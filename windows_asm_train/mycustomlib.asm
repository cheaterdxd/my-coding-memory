format_input_kaka proc input_kaka:DWORD
        mov esi, input_kaka
    loop_string:
        mov al, [esi]
        inc esi
        cmp al,10
        jne loop_string ; chua bang thi tiep tuc lap
        mov [esi],byte ptr 0
        ret
    format_input_kaka endp