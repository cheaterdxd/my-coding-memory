.386
.model flat, stdcall
option casemap:none 

; author: cheaterdxd 
; target: add 20 digit number

include c:\masm32\include\kernel32.inc
include c:\masm32\include\masm32.inc
include c:\masm32\macros\macros.asm
include C:\masm32\include\msvcrt.inc ; for printf, sval

includelib c:\masm32\lib\masm32.lib     
includelib c:\masm32\lib\kernel32.lib
includelib C:\masm32\lib\msvcrt.lib
includelib C:\masm32\lib\msvcrt.lib

add_big_number PROTO 

.code 
_start:
    call add_big_number
    invoke ExitProcess,0

    add_big_number proc 
        local num1[22]:byte
        local num2[22]:byte
        local result[21]:byte 
        invoke StdIn, addr num1, 20
        invoke StdIn, addr num2, 20
        lea esi,num1
        lea edi,num2
        movzx eax, byte ptr [esi]
        push eax
        push esp
        pop eax
        mov ebx,sval(eax)
        movzx eax, byte ptr [edi]
        push eax 
        push esp
        pop eax
        mov eax,sval(eax)
        add ebx,eax
        cmp ebx,9
        jg remainder
        add [result],bl 
    remainder:
        add [result],bl
        inc offset resutl
        inc [result]
        ret
    add_big_number endp 





end _start