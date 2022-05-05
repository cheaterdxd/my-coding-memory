section .data
msg db 'hello world!',0 
len equ $-msg
section .text
global _start

_start:
	
	; call write(fd,msg,len)
	mov edx,len
	inc edx
	mov ebx,1 ;standard output
	mov ecx,msg ; mov address of msg
	mov eax,0x4
	int 0x80
	
	; exit
	mov eax,1
	int 0x80
	