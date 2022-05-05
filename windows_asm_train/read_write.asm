.386
.model flat,stdcall
option casemap:none
include c:\masm32\include\kernel32.inc
include c:\masm32\include\masm32.inc

includelib c:\masm32\lib\masm32.lib     
includelib c:\masm32\lib\kernel32.lib
; declare some command string
.data 
    banner_read db "Input something :",10,0
    banner_write db "Your input: ",0
; declare a unused string for input    
.data?
    input_string db 32 dup (?)

.code 
start:
	; Use the StdOut API function to display the text in a console.
    invoke StdOut, addr banner_read
    ; use stdin to read input from console
    invoke StdIn, addr input_string, 32 
    invoke StdOut, addr banner_write
    invoke StdOut, addr input_string
	; When the console has been closed, exit the app with exit code 0
    invoke ExitProcess, 0
end start
