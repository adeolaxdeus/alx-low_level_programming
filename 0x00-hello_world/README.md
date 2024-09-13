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
