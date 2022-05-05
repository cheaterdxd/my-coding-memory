%include 'function.asm'
section .data
usage	db	'Usage: ./open2ReadFile [filepath]',0

section .bss
char resb 1
section .text

global _start:
_start:
	cmp byte[esp],0x1
	je	noArgument
	; open file

	mov eax,0x5 ; syscall
	mov ebx,[esp+8] ; filepath
	mov edx,0x0;  read_only
	int 0x80
	push eax 
loop:	
	;read file
	pop eax
	push eax
	mov ebx,eax
	mov ecx,char
	mov edx,1
	mov eax,3 ; syscall
	int 0x80
	
	cmp byte[char],0xa
	je	closefile
	
	;write file
	mov ebx,1 ; standard output
	mov ecx,char
	mov edx,1
	mov eax,4 ; syscall 
	int 0x80
	jmp loop

closefile:
	pop ebx ; get fd
	xor eax,eax 
	mov eax,0x6 ; syscall close()
	int 0x80; close file
	jmp exit
noArgument:
	mov eax,usage
	call sys_write
	jmp exit
	