text = "lethanhtuan<hello>"
open_marker = '<'
close_marker = '>'

def maker_tool(text:str, open_marker:str, close_marker:str):
    start = text.find(open_marker)
    end = text.find(close_marker)
    print(text[start+1:end])

maker_tool(text,open_marker,close_marker)