section .data
    message db 'Hello, Holberton', 0Ah, 0
    format db '%s'

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp

    ; push the arguments to the stack
    mov rdi, format
    mov rsi, message
    xor rax, rax

    ; call the printf function
    call printf

    ; clean up the stack and exit the program
    mov rsp, rbp
    pop rbp
    xor eax, eax
    ret
