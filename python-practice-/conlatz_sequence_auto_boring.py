def collazt(num):
	if num%2==1:
		return num*3 +1
	if num%2==0:
		return num //2
print '''
==================================================
=     THE COLLATZ SEQUENCE GAME - AUTO BORING    =
=       MADE BY:	Le Thanh Tuan No.29      =
================================================== '''
print "Nhap vao so bat ki, toi se cho ban thay su ki dieu"
inputNum = int(raw_input())
num_after_coll = collazt(inputNum)
while num_after_coll != 1 :
	print num_after_coll
	num_after_coll = collazt(num_after_coll)
print "The last is : %d" % num_after_coll
print '''
==================================================
===                   END GAME                 ===
==================================================
'''
#just a small funny game
