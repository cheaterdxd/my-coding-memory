%include	'function.asm'
section .data
command db '/bin/echo',0
arg1	db	'Hello world',0
arguments	dd	command
			dd arg1
			dd 0
enviroment	dd 0

section .text
global _start

_start:
	mov ebx,command
	mov ecx,arguments
	mov edx,enviroment
	mov eax,0xb
	int 0x80
	
	call exit