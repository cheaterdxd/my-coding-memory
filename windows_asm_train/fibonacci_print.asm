.386
.model flat, stdcall
option casemap:none 

; author: cheaterdxd 
; target: print n integer

include c:\masm32\include\kernel32.inc
include c:\masm32\include\masm32.inc
include c:\masm32\macros\macros.asm
include C:\masm32\include\msvcrt.inc ; for printf, sval

includelib c:\masm32\lib\masm32.lib     
includelib c:\masm32\lib\kernel32.lib
includelib C:\masm32\lib\msvcrt.lib
includelib C:\masm32\lib\msvcrt.lib


.data 
    input_banner db "nhap vao so luong muon in: ",0
.code 

print_n_fibo PROTO

_start:
    call print_n_fibo
    invoke ExitProcess, 0

    print_n_fibo proc 
        LOCAL n_element: DWORD
        local num1: DWORD
        local num2: DWORD
        local num3: DWORD
        invoke StdOut, offset input_banner
        invoke StdIn, addr n_element,4
        mov esi, sval(addr n_element)
        mov num1,1
        mov num2,1

    loop_:        
        push num1
        ; pop num3
        pop eax 
        ; mov num3,num1
        add eax,num2
        push eax 
        pop num3
        printf("%d ",num3)
        ; mov num1,num2
        push num2 
        pop num1 
        ; mov num2,num3
        push num3
        pop num2 
        dec esi 
        cmp esi,0
        jne loop_
        jmp ret_
    ret_:
        ret 
    print_n_fibo endp 

end _start