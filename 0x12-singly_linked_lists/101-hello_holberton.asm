section .data
message db "Hello, Holberton", 10
section .text
global mainmain:
main:
mov rax, 1
mov rdi, 1
mov rsi, message
mov rdx, 17
syscall
