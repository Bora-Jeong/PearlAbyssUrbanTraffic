##################################
## UDP Server to Talk to UE4
##################################

import socket
import sys
from UDPRequestHandler import *

#HOST = "0.0.0.0"
HOST = "127.0.0.1"
PORT = 8800
data_size = 1024

server = socket.socket()
server.bind((HOST, PORT))
server.listen(1)
print("Socket Ready")

while 1:
    # Receive data from client (data, addr)
    client, address = server.accept()
    data = client.recv(data_size)
    data = data.decode("utf-8")

    # Print to the server who made a connection.
    print(data)

    test_msg = "안녕하세요"
    result = bytes(test_msg, 'utf-8')
    client.send(result)


server.close()