import socket

host = "localhost"
port = 1234
s = socket.socket() 
s.bind((host,port))

s.listen(1)
while True:
	acc,add = s.accept()
	print(" Da ket noi voi:",add)
	acc.send("ket noi thanh cong")
	acc.close()
