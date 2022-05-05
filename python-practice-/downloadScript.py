import requests,bs4
from googletrans import Translator
from tkinter import filedialog
from tkinter import *
def menu():
	print ('''
			 Translate script to VietNamese
			 Made by: Cheaterdxd
		=========================================
		=   1. Translate to format RST file     =
		=   2. Translate to clear Text file     =
		=========================================
		''')
	choice = str(input("Your choice: "))
	return choice
def getEnglishScript():
	linkVideo = str(input("link video:"))
	linkDown = "https://downsub.com/?url=" + linkVideo
	sourcePageDown = requests.get(linkDown)
	sourceTxt = bs4.BeautifulSoup(sourcePageDown.text,"html.parser")
	getLink  = sourceTxt.select('#show a[href]')
	linkScript = "https://downsub.com/" + getLink[1].get('href')
	file = requests.get(linkScript)
	clearScriptText = file.text
	return  clearScriptText
def filterNumber(Text):
	i = 0
	Text = Text.replace("\n", "")
	Text = Text.replace(".",".\n")
	while(i < len(Text)):
		if(Text[i] == '\n' or Text[i] == " " or Text[i] == "."):
			i+=1
		elif (Text[i].isalpha() == False):
			Text = Text.replace(Text[i],'')
		else:
			i+=1
	return Text
def saveFile(data):
	fout = Tk()
	fout.filename = filedialog.asksaveasfilename(initialdir = "/",title = "Select file",filetypes = (("Text document","*.txt"),("all files","*.*")))
	k = open(fout.filename+'.txt','w',encoding="utf-8")
	k.write(data)
def EnglishToVietNamese(EngText):
	trans = Translator()
	m = ''
	Viettext =""
	for i in range(0,len(EngText)+5000,5000):
		m = trans.translate(EngText[i:i+5000] ,dest = 'vi')
		Viettext += str(m.text)
	return Viettext

choice = menu()
Viettext = ''
if(choice == '1'):
	Viettext = EnglishToVietNamese(getEnglishScript())
	# print (Viettext)
if(choice == '2'):
	EngText = filterNumber(getEnglishScript())
	engTitle = """
		===========================================
		=             ENGLISH SUB TEXT            =
		==========================================="""
	viettile = """
		===========================================
		=           VIETNAMESE SUB TEXT           =
		==========================================="""
	# print (EngText)
	Viettext = engTitle +'\n'+ EngText + viettile+'\n' + EnglishToVietNamese(EngText)

	# print (Viettext)
saveFile(Viettext)