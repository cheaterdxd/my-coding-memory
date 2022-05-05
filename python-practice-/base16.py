#key = "0123456789ABCDEF"
print("nhap chuoi")
chuoi = raw_input()
encode = ""
for i in chuoi:
	encode+=hex(ord(i))[2:4]  #chi lay 2 ki tu cuoi cua so hex , bo di 0x
print(encode)
