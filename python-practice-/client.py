import socket
s = socket.socket()
host = 'localhost'
port = 8888

s.connect((host, port)) # thiết lập kết nối đển host+port chỉ định
messrecv = s.recv(1024)
while messrecv:
	print(messrecv)
	messent = str(input()).encode("utf-8")
	s.send(messent)
	messrecv = s.recv(1024)
s.close()
