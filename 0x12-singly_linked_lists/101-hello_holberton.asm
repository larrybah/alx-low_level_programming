section .data
	hello db "Hello, Holberton", 0
	newline db 10, 0

section .text
	extern printf

global hello_holberton

hello_holberton:
	mov rdi, hello
	call printf
	ret
