def checkio(words: str) -> bool:
    split_l = words.split(' ')
    count = 0
    for i in split_l:
        print(i + "is " + str(i.isascii()))
        if(i.isalpha()):
            count +=1
        else:
            count =0 
        if(count>=3):
            return True
    return False
print('    tuan'.strip())
# print(checkio("one two 3 four five six 7 eight 9 ten eleven 12"))