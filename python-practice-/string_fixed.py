def string_correct(text:str)->str:
    text_l = list(text)
    text_l[0] = text_l[0].capitalize()
    if(text[len(text)-1]!='.'):
        text_l.append('.')
    text = ''.join(text_l)
    # if()
    # print(text)
    # print(text[0])
    # print(text[len(text)-1])

string_correct("lethanhtuan")