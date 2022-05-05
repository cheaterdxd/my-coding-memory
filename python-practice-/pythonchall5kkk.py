import urllib
import re
request_url = urllib.urlopen("http://www.pythonchallenge.com/pc/def/linkedlist.php?nothing=72198")
k = ''.join(re.findall("\d",request_url.read()))
print k
truoc = ""
while(k.isdigit()):
	truoc = k
	url_string = "http://www.pythonchallenge.com/pc/def/linkedlist.php?nothing=" + k
	request_url = urllib.urlopen(url_string) 
	k = ''.join(re.findall("\d",request_url.read()))
	print k
	if(k == '16044'):
		k = '8022'
url_string = "http://www.pythonchallenge.com/pc/def/linkedlist.php?nothing=" + truoc
request_url = urllib.urlopen(url_string) 
print request_url.read()