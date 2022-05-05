soluong = int(input('Vui long nhap so luong phan tu mong muon: '))
lis = []
evenlis = []
for i in range(0, soluong):
	print 'Nhap phan tu thu %d'%(i+1)
	k = int(input())
	lis.append(k)
	if k % 2 == 0:
		evenlis.append(k)
print 'list ban da nhap la: ',lis
print 'even list is: ',evenlis