import socket
mysock = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
mysock.bind(("",1234))
mysock.listen(5)
conn, addr = mysock.accept()
data=conn.recv(1000)
if data:
    print("Got a request!")
conn.close()
mysock.close()
