import socket
'''
import thư viện socket, đây là thư viện bult-in, không cần phải cài thêm bất kỳ gì 
'''
socketObject = socket.socket()
'''
gọi socket() method để lấy về 1 socket object
socket object có vai trò lắng nghe và bắt các connection đến port
'''
host = "192.168.1.5" #địa chỉ localhost
port = 8888        #port để lắng nghe 
socketObject.bind((host,port))  # bắt đầu lắng nghe ở localhost vơi port là 1234

socketObject.listen(5)  # mở kết nối trên server, parameter là số lượng kết nối (client) được phép kết nối đến

c, addr = socketObject.accept() # chấp nhận 1 kết nối, trả về (conn,address)
								# conn: object đại diện cho kết nối giữa 2 bên (server-client)
								# address: là địa chỉ của client kết nối đến

print('Got connection from', addr)  # thông báo nhận kết nối từ ...

c.send(f'Thank you for conecting'.encode("utf-8")) # gửi  1 message ngược lại cho client biết là đã kết nối

messrecv = c.recv(1024) # nhận message từ client, parameter: số bytes nhận trong 1 lần
while messrecv:
	print( messrecv) # in ra message đã nhận
	messsent = str(input()).encode("utf-8") # lấy input từ phía server 
	c.send(messsent) # gửi message về client
	messrecv = c.recv(1024) # tiếp tục nhận message từ client
c.close()