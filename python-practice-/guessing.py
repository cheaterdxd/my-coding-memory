from random import randint
print 'Hay doan 1 so tu nhien tu 1-9: '
user = raw_input('>>>')
count1 = count2 = count3 = 0
while (user != 'exit'):
	robot = randint(1,9)
	k = int(user)
	if (k > robot):
		count1 +=1
		print 'Too high.'
	elif (k<robot):
		count2+=1
		print 'Too low.'
	else:
		count3+=1
		print 'Exactly.'
	user = raw_input('>>>  ')
print 'You result: '
print '%d too high.'%count1
print '%d too low. '%count2
print '%d Exactly.' %count3
