charset="ABCDEFGHIJKLMNOPQRSTUVWXYZ234567"
chuoi_encode = raw_input("nhap chuoi can decode: ")
chuoi_decode = ''
#change a word encode base32 to a string 5bits binary
def decode_to_5bits(kitudecode):
	result = ''
	for k in range(0,len(charset)-1):
		if(kitudecode==charset[k]):
			while(k!=0):
				result+=str(k%2)
				k/=2
			while(len(result)<5):
				result+=(5-len(result))*'0'
	#print result
	return result[::-1]
bits_5 = ''   #dua ascii thanh 5 bits binary
for i in chuoi_encode:
	bits_5+=decode_to_5bits(i)
#print(bits)
bits_8=[]     #dua 5 bits thanh cac list 8 bits
solanlaybits = len(bits_5)/8
#print(solanlaybits)
for i in range(0,len(bits_5),8):
	dem = 0;
	if(dem<=solanlaybits-1):
		bits_8.append(bits_5[i:i+8])
		dem+=1
#print(bits_8)
#print(len(chuoi_encode))
for i in range(0,solanlaybits):   #change 8 bits to ascii -> word
	chuoi_decode+=chr(int('0b'+bits_8[i],2))
print chuoi_decode