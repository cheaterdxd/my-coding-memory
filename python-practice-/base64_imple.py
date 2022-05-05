charset="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
chuoi_input = raw_input("nhap chuoi can encode: ")
list_ascii = []
#change to ascii
for i in chuoi_input:
	list_ascii.append(ord(i))
#change ascii to binary
list_binary = ''  
for i in list_ascii:
	binary = ''    #nhan so nhi phan duoi dang string de khong bi mat bits
	while(i!=0):
		binary+=str(i%2)
		i=i/2
	if(len(binary)<8): #fill cho du 8 bits
		binary+=(8-len(binary))*'0'
	list_binary+=(binary[::-1]) # nhan dao nguoc chuoi binary
#fill the bit 0 to chia het cho 6
while(len(list_binary)%6!=0):
	list_binary+='0'
#change to the decode
result = ''
for i in range(0,len(list_binary),6):
	temp = int('0b'+list_binary[i:i+6],2) #chia chuoi binary thanh tung chuoi 6 bits -> decode
	if(temp<64):
		result+=charset[temp]
	else:
		result+='='
print(result)
