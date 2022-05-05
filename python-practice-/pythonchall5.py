import pickle
import urllib
banner = urllib.urlopen('http://www.pythonchallenge.com/pc/def/banner.p')
picked =  banner.read()
unpick = pickle.loads(picked)
for li in unpick:
	print ''.join(i[0]*i[1] for i in li)
	 