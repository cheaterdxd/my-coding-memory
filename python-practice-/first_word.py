def first_word(text: str) -> str:
    """
        returns the first word in a given text.
    """
    # your code here
    text = text.strip()
    text2 = ''
    for i in text:            
        if(i.isalpha() or i==" "):
            text2 += i
    return text2.split(' ')[0]

print(first_word(' a word '))
print