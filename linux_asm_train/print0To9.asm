section .bss
num resb 1
section .text
global _start
_start:
	mov esi,0
Lap:
	mov [num],esi ; đưa giá trị muốn in vào biến
	add byte[num],'0' ; biến đang nằm ở kiểu int, chuyển sang kiểu char
    mov ecx,num ; mov biến thành tham số cho syscall
    mov edx,1 ; len của biến syscall 0-9 chỉ cần 1byte là đủ
	mov ebx,1 ; đầu ra chuẩn
	mov eax,4 ; syscall cho sys_write()
	int 0x80 ; interupt 0x80
	inc esi ; tăng số lên 
	cmp esi,9 ; so sánh có nhỏ hơn 9
	jle Lap ; nếu nhỏ hơn thì quay lại Lap
	; nếu lơn hơn thì exit()
	mov eax,1 ; syscall cho exit()
	int 0x80
