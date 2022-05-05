char = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
chuoi = ''
chuoi = raw_input("nhap chuoi ban can decrypt:")
print("nhap vao shift hoac 0 de brute: ")
shift = raw_input()
if(shift.isalpha()):
	print("ban da nhap sai !")
else:
	chuoi = chuoi.upper()
	chuoi_encode = ''
	if(shift!='0'):
		for i in chuoi:
			if i.isalpha():
				index = (ord(i)-ord('A')-int(shift))%26
				chuoi_encode += char[index]
			else:
		 		chuoi_encode += i
		print(chuoi_encode)
	else:
		for k in range(1,26):
			chuoi_encode = ''
			for i in chuoi:
				if i.isalpha():
					index = (ord(i)-ord('A')-k)%26
					chuoi_encode += char[index]
				else:
		 			chuoi_encode += i
	  		print(chuoi_encode+'  ')
