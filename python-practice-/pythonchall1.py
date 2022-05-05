import urllib.request
url = "http://www.pythonchallenge.com/pc/def/0.html"
new_url = "http://www.pythonchallenge.com/pc/def/"+ str(2**38)+".html"
page = urllib.request.urlopen(new_url)

print(page.read())