# Hello World

## Tasks

0. Preprocessor 
> Write a script that runs a C file through the preprocessor and save the result into another file.

    - The C file name will be saved in the variable $CFILE
    - The output should be saved in the file c

> code : ```gcc -E $CFILE -o c```

1. Compiler 

> Write a script that compiles a C file but does not link.

    - The C file name will be saved in the variable $CFILE
    - The output file should be named the same as the C file, but with the extension .o instead of .c. 
 
> command : `gcc -c $CFILE -o $(cut -d. -f1 <<< $CFILE).o`

2. Assembler 

> Write a script that generates the assembly code of a C code and save it in an output file.

    - The C file name will be saved in the variable $CFILE
    - The output file should be named the same as the C file, but with the extension .s instead of .c. 
    
> command : `gcc -S $CFILE -o $(cut -d. -f1 <<< $CFILE).s`

3. Name

> Write a script that compiles a C file and creates an executable named cisfun.

    - The C file name will be saved in the variable $CFILE

> command : `gcc $CFILE -o cisfun`

4. Hello, puts 

> Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.

    - Use the function puts
    - You are not allowed to use printf
    - Your program should end with the value 0

> code : 
```c
#include <stdio.h>
/**
 * main - Print string in console
 *
 * Return: 0 to terminate program
 */
int main(void)
{
	puts("\"Programming is like building a multilingual puzzle");
	return (0);
}
```

5. Hello, printf 

> Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.

    - Use the function printf
    - You are not allowed to use the function puts
    - Your program should return 0
    - Your program should compile without warning when using the -Wall gcc option

> code : 
```c
#include <stdio.h>
/**
 * main - Print string in console
 *
 * Return: 0 to terminate program
 */
int main(void)
{
	printf("with proper grammar, but the outcome is a piece of art,\n");
	return (0);
}
```

6. Size is not grandeur, and territory does not make a nation

> Write a C program that prints the size of various types on the computer it is compiled and run on.

    - You should produce the exact same output as in the example
    - Warnings are allowed
    - Your program should return 0
    - You might have to install the package libc6-dev-i386 on your Linux to test the -m32 gcc option

> code : 
```c
#include <stdio.h>
/**
 * main - Print the size of various type
 *
 * Return: 0 to terminate program
 */
int main(void)
{
	printf("Size of a %s: %ld byte(s)\n", "char", sizeof(char));
	printf("Size of an %s: %ld byte(s)\n", "int", sizeof(int));
	printf("Size of a %s: %ld byte(s)\n", "long int", sizeof(long));
	printf("Size of a %s: %ld byte(s)\n", "long long int", sizeof(long long int));
	printf("Size of a %s: %ld byte(s)\n", "float", sizeof(float));
	return (0);
}
```

7. Intel 

> Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

    - The C file name will be saved in the variable $CFILE.
    - The output file should be named the same as the C file, but with the extension .s instead of .c. 
> command : `gcc -S $CFILE -masm=intel -o $(cut -d. -f1 <<< $CFILE).s`

8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity 

> Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.

    - You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
    - Your program should return 1
    - Your program should compile without any warnings when using the -Wall gcc option

> code : 
```c
#include <stdio.h>
#include <string.h>
/**
 * main - Print string in console
 *
 * Return: 0 to terminate program
 */
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(msg, (sizeof(char) * strlen(msg)), 1, stderr);

	return (1);
}
```
