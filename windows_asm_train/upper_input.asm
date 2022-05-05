.386
.model flat, stdcall
option casemap:none

include c:\masm32\include\kernel32.inc
include c:\masm32\include\masm32.inc
include c:\masm32\macros\macros.asm

includelib c:\masm32\lib\masm32.lib     
includelib c:\masm32\lib\kernel32.lib

.data 
    banner1 db "Nhap chuoi ban muon: ",10,0
    banner2 db "Ket qua: ",10,0


.data?
    input_string db 32 dup (?)

.code
_start:
    invoke StdOut, addr banner1
    invoke StdIn, offset input_string,32
    mov eax,offset input_string
    
loop1:
    movzx edx, byte ptr [eax]
    cmp dl,0
    je end_loop

    .if dl>=97 && dl<=122
    sub edx,32
    mov byte ptr [eax],dl
    .endif

    add eax,1
    jmp loop1

end_loop:
    invoke StdOut, offset banner2
    invoke StdOut, offset input_string
    invoke ExitProcess,0
end _start
    

