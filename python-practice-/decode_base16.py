result = ""
chuoi_encode = raw_input("Nhap chuoi can decode:")
list_decode = []
i=0
while(i <= len(chuoi_encode)-2):
	list_decode.append(chuoi_encode[i:i+2])  #lay lan luot 2 ki tu da bi ma hoa cho vao list den khi het
	i+=2
for i in list_decode:
	result+=chr((int(i,16)))   #dua ve base 16 va in ra ki tu do
print(result)
