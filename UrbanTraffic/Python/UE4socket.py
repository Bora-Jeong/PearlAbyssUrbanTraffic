##################################
## UDP Server to Talk to UE4
##################################

import socket
import joblib
from sklearn.ensemble import RandomForestClassifier
from sklearn import metrics

import torch
import torch.nn as nn
import torch.nn.functional as F

class ControlNet(nn.Module):
    def __init__(self, n_input, n_output):
        super(ControlNet, self).__init__()

        n_hidden = 256

        self.input_layer = nn.Linear(n_input, n_hidden)
        self.hidden_layer = nn.Linear(n_hidden, n_hidden)
        self.output_layer = nn.Linear(n_hidden, n_output)

    def forward(self, x):
        batch_size, _ = x.size()

        x = self.input_layer(x)
        x = F.relu(x)

        x = self.hidden_layer(x)
        x = F.relu(x)

        x = self.output_layer(x)

        out = x
        return out

class Vehicle:
    def __init__(self, name, features):
        self.name = name
        self.features = features


def process_string_data(str):
    strs = str.split('/')
    vehicles = list()
    for i in range(0, len(strs), 21):
        if len(strs) < i + 21: break
        #print(f"name:{strs[i]} features:{strs[i+1:i+21]}")
        v = Vehicle(strs[i], strs[i+1:i+21])
        vehicles.append(v)
    print(f"vehicle count:{len(vehicles)}")
    return vehicles


def inference(vehicles):
    x = [v.features for v in vehicles]
    y = model.predict(x)
    result = ""
    for i, j in enumerate(y):
        result += str(j) + "/"
    return result

HOST = "127.0.0.1"
PORT = 8800
data_size = 8000

server = socket.socket()
server.bind((HOST, PORT))
server.listen(1)
print("Socket Ready")
client, address = server.accept()

model = joblib.load("./random_forest.joblib")

while 1:
    # Receive data from client (data, addr)
    data = client.recv(data_size)
    data = data.decode("utf-8")

    # Print to the server who made a connection.
    # print(data)
    vehicles = process_string_data(data)
    result = inference(vehicles)
    print(result)
    result = bytes(result, 'utf-8')
    client.send(result)


server.close()
