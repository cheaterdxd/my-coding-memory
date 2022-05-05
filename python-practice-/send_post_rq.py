import requests
url = "https://www.hackthebox.eu/api/invite/generate"
x = requests.post(url)
print(x.text)