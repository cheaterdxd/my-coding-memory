.386
.model flat, stdcall
option casemap:none

include c:\masm32\include\kernel32.inc
include c:\masm32\include\masm32.inc
include c:\masm32\macros\macros.asm

includelib c:\masm32\lib\masm32.lib     
includelib c:\masm32\lib\kernel32.lib
includelib C:\masm32\lib\msvcrt.lib

.data? 
    input_str db 258 dup(?) 
    rev_str db 258 dup(?)

.code
_start:
    ; nhập chuỗi vào 
    invoke StdIn, offset input_str,256
    ; đảo chuỗi 
    lea esi, input_str
    lea edi, rev_str
    mov ecx, len(esi)
    dec ecx
    add esi, ecx
loop_: 
    mov ebx,[esi]
    mov [edi],bl
    dec esi
    inc edi
    dec ecx
    cmp ecx,-1
    ; je end_
    jne loop_
end_:
    invoke StdOut, offset rev_str

end _start