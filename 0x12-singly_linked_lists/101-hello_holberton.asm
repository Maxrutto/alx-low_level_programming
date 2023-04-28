section .data
	format db 'Hello, Holberton', 0Ah, 0

section .text
	global main

	extern printf

main:
	push rbp
	mov rbp, rsp

	; Call printf function to print the message
	lea rdi, [format]
	xor eax, eax
	call printf

	; Clean up and exit
	xor eax, eax
	pop rbp
	ret
