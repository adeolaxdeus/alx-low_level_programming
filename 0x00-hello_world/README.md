#                 0x00-hello_world
## Description
This repository contains bash scripts that helps compile C programs
and also basic C program to help famillarize a newbie to C language

* 0-preprocessor - A script that runs a C file through the preprocessor and
	save the result into another file.

	* The C file name will be saved in the variable $CFILE
	* The output will be saved in the file c

* 1-compiler - A script that compiles a C file but does not link.

	* The C file name will be saved in the variable $CFILE
	* The output file should be named the same as the C file, but with the extension .o instead of .c.
		* Example: if the C file is main.c, the output file should be main.o

* 2-assembler - A script that generates the assembly code of a C code and save it in an output file.

	* The C file name will be saved in the variable $CFILE
	* The output file should be named the same as the C file, but with the extension .s instead of .c.
		* Example: if the C file is main.c, the output file should be main.s

* 3-name - A script that compiles a C file and creates an executable named cisfun.

	* The C file name will be saved in the variable $CFILE

* 4-puts.c - A C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.

	* Use the function puts
	* You are not allowed to use printf
	* Your program should end with the value 0


* 5-printf.c - A C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.

	* Use the function printf
	* You are not allowed to use the function puts
	* Your program should return 0
	* Your program should compile without warning when using the -Wall gcc option

* 100-intel - A script that generates the assembly code (Intel syntax) of a C
code and save it in an output file.

	* The C file name will be saved in the variable $CFILE.
	* The output file should be named the same as the C file, but with the extension .s instead of .c.
		* Example: if the C file is main.c, the output file should be main.s

* 101-qoute.c - A C program that prints exactly and that piece of art is useful"
- Dora Korpar, 2015-10-19, followed by a new line, to the standard error.

	* You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
	* Your program should return 1
	* Your program should compile without any warnings when using the -Wall gcc option
