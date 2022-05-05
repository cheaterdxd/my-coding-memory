char = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
chuoi = ''
chuoi = raw_input("nhap chuoi ban can encrypt:")
shift = raw_input("nhap vao shift: ")
chuoi = chuoi.upper()
chuoi_encode = ''
for i in chuoi:
	if i.isalpha():
		index = (ord(i)-ord('A')+int(shift))%26
		chuoi_encode += char[index]
	else:
		 chuoi_encode += i
print(chuoi_encode)