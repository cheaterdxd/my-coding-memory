s = ("right to left game",'left to right')

def left_join(phrases: tuple) -> str:
    """
        Join strings and replace "right" to "left"
    """
    text=''
    for i in phrases:
        text+=i + ','
    text = text[:-1].replace("right",'left')
    return text
print(left_join(s))