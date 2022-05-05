import random
print "WELCOME TO GAME: ROCK-PAPER-SCISSORS"
test = False
human = 0
robot = random.randint(1,3)
while test==False :
	print 'Ban chon: [bua, keo, bao]'
	ans = raw_input('>>> ')
	if (ans == 'bua'):
		human = 1
	elif (ans == 'keo'):
		human = 2
	else:
		human = 3
	print "YOUR CHOICE: %s" %(ans.upper())
	print "COMPUTER CHOICE: "
	if robot == 1:
		print 'BUA'
	elif robot == 2:
		print 'KEO'
	else:
		print 'BAO'
	if (robot == human):
		print "-----------HOA---------"
	elif robot == 1 :
		if human == 2 :
			print '-----------YOU LOSE---------'
		else :
			print '-----------YOU WIN----------'
	elif robot == 2 :
		if (human ==1) :
			print '-----------YOU WIN----------'
		else :
			print '-----------YOU LOSE---------'
	else :
		if ( human == 1) :
			print '-----------YOU LOSE---------'
		else : 
			print '-----------YOU WIN----------' 
	print "CONTINUE? [yes/no]"
	if (raw_input()=="no") :
		test = True
print 'THANKS FOR PLAYING'