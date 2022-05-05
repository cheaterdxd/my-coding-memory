import zipfile,sys
if(len(sys.argv) == 1):
    print "[+] Usage: python crackCompressFile.py <filename>\n"
else:
    fileIn = zipfile.ZipFile(sys.argv[1])
    try:
        fileIn.extractall(pwd="passfake")
    except Exception as e :
        print e
