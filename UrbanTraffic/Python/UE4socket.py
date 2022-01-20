##################################
## UDP Server to Talk to UE4
##################################

import socket
import joblib
from sklearn.ensemble import RandomForestClassifier
from sklearn import metrics

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
    for i in y:
        result += vehicles[i].name + "/" + str(i) + "/"
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
    result = bytes(result, 'utf-8')
    client.send(result)


server.close()