print "Hay nhap chuoi bat ky de kiem tra: "
c = raw_input('>>> ')
d = c[::-1]
if c==d:
	print 'Chuoi ban vua nhap la palindrome'
else:
	print 'Chuoi ban vua nhap khong phai la palindrome'