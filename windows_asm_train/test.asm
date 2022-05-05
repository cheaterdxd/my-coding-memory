; �������������������������������������������������������������������������

;                 Build this with the "Project" menu using
;                        "Console Assemble & Link"

    .486                                    ; create 32 bit code
    .model flat, stdcall                    ; 32 bit memory model
    option casemap :none                    ; case sensitive
 
    include c:\masm32\include\windows.inc     ; always first
    include c:\masm32\macros\macros.asm       ; macros for print, exit

  ; -----------------------------------------------------------------
  ; include files that have MASM format prototypes for function calls
  ; -----------------------------------------------------------------
    include c:\masm32\include\masm32.inc
    include c:\masm32\include\gdi32.inc ; for print api
    include c:\masm32\include\user32.inc
    include c:\masm32\include\kernel32.inc ; for exit 
	include C:\masm32\include\msvcrt.inc

  ; ------------------------------------------------
  ; Library files that have definitions for function
  ; exports and tested reliable prebuilt code.
  ; ------------------------------------------------
    includelib c:\masm32\lib\masm32.lib
    includelib c:\masm32\lib\gdi32.lib
    includelib c:\masm32\lib\user32.lib
    includelib c:\masm32\lib\kernel32.lib
	includelib C:\masm32\lib\msvcrt.lib

  ; --------------------------------------------------------------
  ; This is a prototype for a procedure used in the demo. It tells
  ; MASM how many parameters are passed to the procedure and how
  ; big they are. This makes procedure calls far more reliable as
  ; MASM will not allow different sizes or different numbers of
  ; parameters to be passed. Note that a C calling convention
  ; procedure CAN have a variable number of arguments but these
  ; examples use the normal Windows STDCALL convention which is
  ; different.
  ; --------------------------------------------------------------

    .code                       ; Tell MASM where the code starts

; �������������������������������������������������������������������������

start:
  	call doit

doit proc
	LOCAL num1[12] :byte
	LOCAL num2[12] :byte                           ; The CODE entry point to the program
	invoke StdIn, addr num1,12
	invoke StdIn, addr num2,12
    ; mov eax, OFFSET MyLabel 
    ; invoke crt__wtol, reparg(MyLabel)
	mov eax, sval(addr num1)
	push eax 
	mov eax, sval(addr num2)
	pop edx
	add eax,edx 
	; mov eax, ustr$(eax)
	; push eax
	; call StdOut
	; push EAX
	; push esp
	printf("%u",EAX)
doit endp
    invoke ExitProcess,0
end start                       ; Tell MASM where the program ends
