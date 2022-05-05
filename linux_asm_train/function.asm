slen:
	push ebx; save old ebx 
	mov ebx,eax; mov the string to ebx 
nextchar:
	cmp byte[eax],0
	jz finished
	inc eax
	jmp nextchar
finished:
	sub eax,ebx; return value = eax
	pop ebx ;old ebx
	ret
sys_write:
;call sys_write(ebx=fd,ecx=buf,edx=len)
	; save context
	push ebx
	push ecx 
	push edx
	push eax
	call slen
	mov edx,eax
	mov ebx,1
	pop eax 
	mov ecx,eax 
	mov eax,4; syscall = 4
	int 0x80
	
	; pop all old value of register
	pop edx 
	pop ecx
	pop ebx 

exit:
	mov eax,1
	int 0x80