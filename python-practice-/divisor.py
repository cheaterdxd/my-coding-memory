check = False
while(check == False):
	print 'CHUONG TRINH TIM UOC CHUNG CUA 1 SO'
	x = int(input('Xin hay nhap so nguyen bat ky: '))
	y = []
	for i in range(1,x+1):
		if ( x % i == 0 ):
			y.append(i)
	print y
	print 'Ban co muon tiep tuc hay khong ? [yes/no]'
	k = raw_input()
	if (k == 'no'):
		check = True
print 'Xin cam on da su dung phan mem cua chung toi.'
