.386
.model flat,stdcall
option casemap:none
include c:\masm32\include\kernel32.inc
include c:\masm32\include\masm32.inc
include c:\masm32\macros\macros.asm
include C:\masm32\include\msvcrt.inc ; for printf, sval

includelib c:\masm32\lib\masm32.lib     
includelib c:\masm32\lib\kernel32.lib
includelib C:\masm32\lib\msvcrt.lib
; author : tuan
; tim xau con sub trong xau Source


.data? 
    s_string db 100 dup (?)
    c_string db 10 dup (?)
    ; rsult db 200 dup (20h)
findString PROTO :DWORD , :DWORD

.code 
_start:
    invoke StdIn,offset s_string,102
    invoke StdIn,offset c_string,12
    push offset c_string
    push offset s_string
    call findString
    invoke ExitProcess,0

findString proc ptr_string, ptr_sub
    LOCAL check:DWORD
    mov esi, ptr_string
    mov edi, ptr_sub
    mov ecx, edi
    mov edx, esi

loop_str:
    mov al, [esi]
    mov bl, [edi]
    inc esi
    ; inc edi ; không inc sub_string vì chỉ đợi khi nào gặp mới inc
    cmp al,0
    je ending
    cmp bl,0
    je reset_sub
    cmp al, bl
    jne loop_str
    ; trường hợp gặp kí tự đầu tiên của chuỗi sub
    ; tăng idx chuỗi sub 
    inc edi
    jmp cpr  

cpr:
    mov al, [esi]
    mov bl, [edi]
    ; tăng đều 2 chuỗi 
    inc esi
    inc edi

    cmp bl,0  ; so sánh để phát hiện th 1 == null, tức là đã hết chuỗi sub -> in ra
    je print_offset

    ; so sánh al, bl neu khong bang, co 2 TH:
    ;1. gap null: tức là đã duyệt hết bl
    ;2. gap tu khac: chưa duyệt hết
    cmp al, bl
    jne reset_sub ; TH chỉ là sai không đúng chuỗi -> load lại chuỗi sub -> nhảy về so sánh

    
    jmp cpr ; nếu bằng thì quay lại so sánh tiếp
     
  
print_offset:
    ; vì lượt này không so sánh nên lùi idx của chuỗi source lại 1 để tránh bị tăng tiếp 1 trong vòng lặp tiếp theo
    dec esi

    push esi 
    sub esi,edx  
    sub esi,len(ptr_sub)
    push esi 
    pop check
    ; save register before printf
    push ecx
    push edx 
    push esi 
    push edi 
    printf("%d\n",check)
    pop edi
    pop esi 
    pop edx 
    pop ecx
    pop esi 
    jmp reset_sub ; cần phải nhảy về reset sub, vì đã gặp hết chuỗi sub. 

reset_sub:
    mov edi,ecx
    jmp loop_str

ending:
    ; invoke StdOut,addr check
    ret
findString endp 

end _start