# a challenge from py.checkio
def check_uppercase(text:str):
    return text.isupper()
def check_word(spec_word:str,text:str):
    remember_idx=0
    count = 0
    is_checking=False
    len_spec = len(spec_word)-1
    len_text = len(text)-1
    spec_idx = 0
    text_idx = 0
    while(text_idx<=len_text):
        #print("text_idx = %d , spec_idx = %d "%(text_idx,spec_idx))
        while(spec_idx<=len_spec):
            #print("checking text[%d]: %s, spec_word[%d]: %s"%(text_idx,text[text_idx],spec_idx, spec_word[spec_idx]))
            if(text[text_idx]==spec_word[spec_idx] and is_checking==False):
                is_checking = True
                #print("meet the spec at "+ str(text_idx) +" "+text[text_idx] )
                text_idx+=1
                continue
            if is_checking:
                #print("checking next word")
                if(text[text_idx]==spec_word[spec_idx]):
                    text_idx+=1
                    continue
                if(text[text_idx]!=spec_word[spec_idx]):
                    #print("checking the same")
                    spec_idx+=1
                    #print("checking next the same at spec[%d]: %s"%(spec_idx,spec_word[spec_idx]))
                    if(text[text_idx]!=spec_word[spec_idx]):
                        #print("check the same correct at text = %s, spec = %s"%(text[text_idx],spec_word[spec_idx]))
                        # text_idx+=1
                        # spec_idx+=1
                        spec_idx=0
                        is_checking=False
            if spec_idx == len_spec:
                return True
            text_idx+=1
            if(text_idx>len_text):
                break
        # #print("text_idx after running: "+str(text_idx))
    return False
def not_help(text:str):
    if(check_uppercase(text)==True):
        return True
    text = text.lower()
    format_text=""
    if(text[-3:] =='!!!'):
        return True
    for i in text:
        if (i.isalpha()==True):
            format_text+=i
    if ('help' in format_text):
        return True
    if ('asap' in format_text):
        return True
    if ('urgent' in format_text):
        return True
    if(check_word('help',text)==True):
        return True
    if(check_word('asap',text)==True):
        return True
    if(check_word('urgent',text)==True):
        return True
    return False

# #print(not_help("lethanht an 135234 h<ellllp >P{|]"))
# #print(not_help("lethanht an 1352u<rgent34 h<elp >P{|]"))
print(not_help('HOW ARE U'))
# print(check_uppercase("HOW ARE U0"))
