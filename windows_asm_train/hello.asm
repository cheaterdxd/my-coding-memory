;file: 32bit print helloword written in asm
; author: Le Thanh Tuan
                                    
.386					; x86 instruction set
.model flat, stdcall	; Flat, 32-bit memory model (not used in 64-bit)
option casemap: none	; Case insensitive syntax


; include lib prototype
include c:\masm32\include\kernel32.inc
include c:\masm32\include\masm32.inc
includelib c:\masm32\lib\masm32.lib  
includelib c:\masm32\lib\kernel32.lib
; data segment 
.data 
	helloword db "hello word",10,0
; code segment
.code
; function 
start:
    invoke StdOut, addr helloword
	invoke ExitProcess,0
end start
