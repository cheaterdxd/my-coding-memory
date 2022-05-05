section .bss
strinput: resb 255
len: resb 4

section .text
global _start

_start:

	; call read() to get string
	mov eax,3
	mov edx,255
	mov ecx,strinput
	mov ebx,0 ; 0: standard input
	int 0x80
	
	;call write() to output len
	dec eax ; bỏ đi kí tự \n
	cmp eax,10
	jb smaller
	jmp bigger
smaller:
	add eax,'0'
	mov [len],eax
	mov ecx,len ; buf
	xor eax,eax
	mov edx,4 ; len 
	mov eax,4 ; syscall
	mov ebx,1 ; 1: standard output
	int 0x80
	jmp exit
bigger:
	add eax,0
	aaa
	push eax
	mov eax,esp
	mov ecx,0 ; count
	
loop:
	cmp byte[eax+ecx],0
	jz finish
	add byte[eax+ecx],'0'
	inc ecx
	jmp loop
finish:
	pop eax
	bswap eax
	mov [len],eax
	mov ecx,len ; buf
	xor eax,eax
	mov edx,4 ; len 
	mov eax,4 ; syscall
	mov ebx,1 ; 1: standard output
	int 0x80
	
exit:	
	mov eax,1
	int 0x80
	