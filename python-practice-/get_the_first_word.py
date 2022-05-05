def first_word(text: str) -> str:
    """
        returns the first word in a given text.
    """
    # your code here
    text = text.strip()
    text2 = ''
    special_char = [",",":","[","]","/","\\",'''?''',"<",">","*","&","^","%","$","#","@","!","~","`","."]
    for i in text:
        if i in special_char:
            print("catching: " + i)
            text = text.replace(i," ")
    list_word = text.split(" ")
    
    print(list_word)
    for w in list_word:
        if len(w)==0:
            list_word.remove(w)
        for c in range(0,len(w)-1):
            if(((w[c].isalnum()!=True) and w[c] != "'")):
                list_word.remove(w)
    print(list_word[0])     
    return list_word[0]


if __name__ == '__main__':
    print("Example:")
    print(first_word("Hello world"))
    
    # These "asserts" are used for self-checking and not for an auto-testing
    assert first_word("Hello world") == "Hello"
    assert first_word(" a word ") == "a"
    assert first_word("don't touch it") == "don't"
    assert first_word("greetings, friends") == "greetings"
    assert first_word("... and so on ...") == "and"
    assert first_word("hi") == "hi"
    assert first_word("Hello.World") == "Hello"
    print("Coding complete? Click 'Check' to earn cool rewards!")
