chartable = '0123456789ABCDEF'
def ascii_2_8bits(asciiofword):
	chuoi_bin = ''
	while(asciiofword!=0):
		chuoi_bin += str(asciiofword%2)
		asciiofword/=2
	if(len(chuoi_bin)<8):
		chuoi_bin+=(8-len(chuoi_bin))*'0'
	return chuoi_bin[::-1]
chuoi_decode = raw_input("Nhap chuoi can decode: ")
chuoi_binary = ''
for i in chuoi_decode:
	temp = ascii_2_8bits(ord(i))
	chuoi_binary += temp
	print temp
	print chuoi_binary
list_8_bits= []
for i in range(0,len(chuoi_binary),8):
	list_8_bits.append(chuoi_binary[i:i+8])
chuoi_ascii = ''
for i in list_8_bits:
	chuoi_ascii+=chr(int('0b'+i,2))
print chuoi_ascii