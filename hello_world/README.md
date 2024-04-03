<p align="left"><img width="150" height="150" src="images/c-logo.png"></p>

<h1 align="left">C - Hello World</h1>

## Resources

### Read or watch

- [Everything you need to know to start with C.pdf](https://drive.google.com/file/d/1X6XJACwRh8m_6d9cxfu5rJDYNatAfe2G/view?usp=sharing) (You do not have to learn everything in there yet, but make sure you read it entirely first)
- [Dennis Ritchie](https://en.wikipedia.org/wiki/Dennis_Ritchie)
- [“C” Programming Language: Brian Kernighan](https://www.youtube.com/watch?v=de2Hsvxaf8M&ab_channel=Computerphile)
- [Why C Programming Is Awesome](https://www.youtube.com/watch?v=smGalmxPVYc&ab_channel=ChrisHawkes)
- [Learning to program in C part 1](https://www.youtube.com/watch?v=rk2fK2IIiiQ&ab_channel=JonathanEngelsma)
- [Learning to program in C part 2](https://www.youtube.com/watch?v=FwpP_MsZWnU&ab_channel=JonathanEngelsma)
- [Understanding C program Compilation Process](https://www.youtube.com/watch?v=VDslRumKvRA&ab_channel=HowTo)
- [Betty Coding Style](https://github.com/holbertonschool/Betty/wiki)
- [Hash-bang under the hood](https://twitter.com/unix_byte/status/1024147947393495040?s=21) (Look at only after you finish consuming the other resources)
- [Linus Torvalds on C vs. C++](http://harmful.cat-v.org/software/c++/linus) (Look at only after you finish consuming the other resources)

### man or help

- _`gcc`_
- _`printf (3)`_
- _`puts`_
- _`putchar`_

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General

- Why C programming is awesome
- Who invented C
- Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
- What happens when you type _`gcc main.c`_
- What is an entry point
- What is _`main`_
- How to print text using _`printf`_, _`puts`_ and _`putchar`_
- How to get the size of a specific type using the unary operator _`sizeof`_
- How to compile using _`gcc`_
- What is the default program name when compiling with _`gcc`_
- What is the official C coding style and how to check your code with _`betty-style`_
- How to find the right header to include in your source code when using a standard library function
- How does the _`main`_ function influence the return value of the program

## Requirements

### C Scripts

- Allowed editors: _`vi`_, _`vim`_, _`emacs`_
- All your files will be compiled on Ubuntu 20.04 LTS using _`gcc`_, using the options _`-Wall -Werror -Wextra -pedantic -std=gnu89`_
- All your files should end with a new line
- A _`README.md`_ file at the root of the repo, containing a description of the repository
- A _`README.md`_ file, at the root of the folder of this project, containing a description of the project
- There should be no errors and no warnings during compilation
- You are not allowed to use _`system`_
- Your code should use the _`Betty`_ style. It will be checked using [_`betty-style.pl`_](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [_`betty-doc.pl`_](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)

### Shell Scripts

- Allowed editors: _`vi`_, _`vim`_, _`emacs`_
- All your scripts will be tested on Ubuntu 20.04 LTS
- All your scripts should be exactly two lines long (_`$ wc -l file`_ should print 2)
- All your files should end with a new line
- The first line of all your files should be exactly _`#!/bin/bash`_

## More Info

### Betty linter

To run the Betty linter just with command _`betty <filename>`_:

- Go to the [_`Betty`_](https://github.com/holbertonschool/Betty) repository
- Clone the [_`repo`_](https://github.com/holbertonschool/Betty) to your local machine
- _`cd`_ into the Betty directory
- Install the linter with _`sudo ./install.sh`_
- _`emacs`_ or _`vi`_ a new file called _`betty`_, and copy the script below:

```bash
#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done
```

- Once saved, exit file and change permissions to apply to all users with _`chmod a+x betty`_
- Move the _`betty`_ file into _`/bin/`_ directory or somewhere else in your _`$PATH`_ with _`sudo mv betty /bin/`_

You can now type _`betty <filename>`_ to run the Betty linter!

## Tasks

### [0-Preprocessor](./0-preprocessor)

Write a script that runs a C file through the preprocessor and save the result into another file.

- The C file name will be saved in the variable `$CFILE`
- The output should be saved in the file `c`

```shell
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ cat main.c 
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ export CFILE=main.c
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ ./0-preprocessor 
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ tail c
# 942 "/usr/include/stdio.h" 3 4

# 2 "main.c" 2


# 3 "main.c"
int main(void)
{
 return (0);
}
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ 
```

Repo:

- GitHub repository: [holbertonschool-low_level_programming](https://github.com/root/holbertonschool-low_level_programming)
- Directory: [hello_world](/hello_world)
- File: [0-preprocessor](./0-preprocessor)

### [1. Compiler](./1-compiler)

Write a script that compiles a C file but does not link.

- The C file name will be saved in the variable `$CFILE`
- The output file should be named the same as the C file, but with the extension `.o` instead of `.c`.
  - Example: if the C file is `main.c`, the output file should be `main.o`

```shell
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ export CFILE=main.c
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ cat main.c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ ./1-compiler 
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ ls
0-preprocessor  1-compiler   c            main.o
Makefile               100-intel      main.c  main.s
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ cat -v main.o | head
^?ELF^B^A^A^@^@^@^@^@^@^@^@^@^A^@>^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^P^B^@^@^@^@^@^@^@^@^@^@@^@^@^@^@^@@^@^K^@^H^@UHM-^IM-eM-8^@^@^@^@]M-C^@GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609^@^T^@^@^@^@^@^@^@^AzR^@^Ax^P^A^[^L^G^HM-^P^A^@^@^\^@^@^@^\^@^@^@^@^@^@^@^K^@^@^@^@A^N^PM-^F^BC^M^FF^L^G^H^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^D^@M-qM-^?^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^E^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^F^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^D^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^H^@^@^@^R^@^A^@^@^@^@^@^@^@^@^@^K^@^@^@^@^@^@^@^@main.c^@main^@^@^@^@ ^@^@^@^@^@^@^@^B^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@.symtab^@.strtab^@.shstrtab^@.text^@.data^@.bss^@.comment^@.note.GNU-stack^@.rela.eh_frame^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^[^@^@^@^A^@^@^@^F^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@@^@^@^@^@^@^@^@^K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@!^@^@^@^A^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@'^@^@^@^H^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@,^@^@^@^A^@^@^@0^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@5^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@5^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@J^@^@^@^A^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^@^@^@^@^@^@^@^@8^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^H^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@E^@^@^@^D^@^@^@@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M- ^A^@^@^@^@^@^@^X^@^@^@^@^@^@^@    ^@^@^@^F^@^@^@^H^@^@^@^@^@^@^@^X^@^@^@^@^@^@^@^Q^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-8^A^@^@^@^@^@^@T^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-8^@^@^@^@^@^@^@M-X^@^@^@^@^@^@^@
^@^@^@^H^@^@^@^H^@^@^@^@^@^@^@^X^@^@^@^@^@^@^@  ^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^P^A^@^@^@^@^@^@^M^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ 
```

Repo:

- GitHub repository: [holbertonschool-low_level_programming](https://github.com/root/holbertonschool-low_level_programming)
- Directory: [hello_world](/hello_world)
- File: [1-compiler](./1-compiler)

### [2. Assembler](./2-assembler)

Write a script that generates the assembly code of a C code and save it in an output file.

- The C file name will be saved in the variable `$CFILE`
- The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.
  - Example: if the C file is main.c, the output file should be `main.s`

```shell
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ export CFILE=main.c
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ cat main.c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ ./2-assembler
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ ls
0-preprocessor  1-compiler  2-assembler c  main.c  main.s  Makefile
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ cat main.s
    .file   "main.c"
    .text
    .globl  main
    .type   main, @function
main:
.LFB0:
    .cfi_startproc
    pushq   %rbp
    .cfi_def_cfa_offset 16
    .cfi_offset 6, -16
    movq    %rsp, %rbp
    .cfi_def_cfa_register 6
    movl    $0, %eax
    popq    %rbp
    .cfi_def_cfa 7, 8
    ret
    .cfi_endproc
.LFE0:
    .size   main, .-main
    .ident  "GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609"
    .section    .note.GNU-stack,"",@progbits
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ 
```

Repo:

- GitHub repository: [holbertonschool-low_level_programming](https://github.com/root/holbertonschool-low_level_programming)
- Directory: [hello_world](/hello_world)
- File: [2-assembler](./2-assembler)

### [3. Name](./3-name)

Write a script that compiles a C file and creates an executable named `cisfun`.

- The C file name will be saved in the variable `$CFILE`

```shell
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ export CFILE=main.c
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ cat main.c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ ./3-name 
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ ls
0-preprocessor  1-compiler   3-name  cisfun  main.o  Makefile
100-intel       2-assembler  c       main.c  main.s
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ 
```

Repo:

- GitHub repository: [holbertonschool-low_level_programming](https://github.com/root/holbertonschool-low_level_programming)
- Directory: [hello_world](/hello_world)
- File: [3. Name](./3-name)

### [4. Hello, puts](./4-puts.c)

Write a C program that prints exactly `"Programming is like building a multilingual puzzle`, followed by a new line.

- Use the function `puts`
- You are not allowed to use `printf`
- Your program should end with the value `0`

```shell
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c && ./a.out
"Programming is like building a multilingual puzzle
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ echo $?
0
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ 
```

Repo:

- GitHub repository: [holbertonschool-low_level_programming](https://github.com/root/holbertonschool-low_level_programming)
- Directory: [hello_world](/hello_world)
- File: [4-puts.c](./4-puts.c)

### [5. Hello, printf](./5-printf.c)

Write a C program that prints exactly `with proper grammar, but the outcome is a piece of art,`, followed by a new line.

- Use the function `printf`
- You are not allowed to use the function `puts`
- Your program should return `0`
- Your program should compile without warning when using the `-Wall` `gcc` option

```shell
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-printf.c
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ ./a.out 
with proper grammar, but the outcome is a piece of art,
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ echo $?
0
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ 
```

Repo:

- GitHub repository: [holbertonschool-low_level_programming](https://github.com/root/holbertonschool-low_level_programming)
- Directory: [hello_world](/hello_world)
- File: [5-printf.c](./5-printf.c)

### [6. Size is not grandeur, and territory does not make a nation](./6-size.c)

Write a C program that prints the size of various types on the computer it is compiled and run on.

You should produce the exact same output as in the example
Warnings are allowed
Your program should return `0`
You might have to install the package `libc6-dev-i386` on your Linux (Vagrant) to test the `-m32` `gcc` option

```shell
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ gcc 6-size.c -m32 -o size32 2> /tmp/32
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ gcc 6-size.c -m64 -o size64 2> /tmp/64
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ ./size32
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 4 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ ./size64
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 8 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ echo $?
0
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ 
```

Repo:

- GitHub repository: [holbertonschool-low_level_programming](https://github.com/root/holbertonschool-low_level_programming)
- Directory: [hello_world](/hello_world)
- File: [6-size.c](./6-size.c)

### [8. Intel](./100-intel)

Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

- The C file name will be saved in the variable `$CFILE`.
- The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.
  - Example: if the C file is `main.c`, the output file should be `main.s`

```shell
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ export CFILE=main.c
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ cat main.c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ ./100-intel 
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ cat main.s
    .file   "main.c"
    .intel_syntax noprefix
    .text
    .globl  main
    .type   main, @function
main:
.LFB0:
    .cfi_startproc
    push    rbp
    .cfi_def_cfa_offset 16
    .cfi_offset 6, -16
    mov rbp, rsp
    .cfi_def_cfa_register 6
    mov eax, 0
    pop rbp
    .cfi_def_cfa 7, 8
    ret
    .cfi_endproc
.LFE0:
    .size   main, .-main
    .ident  "GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609"
    .section    .note.GNU-stack,"",@progbits
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ 
```

Repo:

- GitHub repository: [holbertonschool-low_level_programming](https://github.com/root/holbertonschool-low_level_programming)
- Directory: [hello_world](/hello_world)
- File: [100-intel](./100-intel)

### [9. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity](./101-quote.c)

Write a C program that prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error.

You are not allowed to use any functions listed in the NAME section of the man (3) `printf` or man (3) `puts`
Your program should return 1
Your program should compile without any warnings when using the `-Wall` `gcc` option

```shell
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o quote 101-quote.c
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ ./quote
and that piece of art is useful" - Dora Korpar, 2015-10-19
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ echo $?
1
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ ./quote 2> q
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ cat q
and that piece of art is useful" - Dora Korpar, 2015-10-19
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ grep printf < 101-quote.c
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ grep put < 101-quote.c
root@ubuntu:~/holbertonschool-low_level_programming/hello_world$ 
```

Repo:

- GitHub repository: [holbertonschool-low_level_programming](https://github.com/root/holbertonschool-low_level_programming)
- Directory: [hello_world](/hello_world)
- File: [101-quote.c](./100-intel)
