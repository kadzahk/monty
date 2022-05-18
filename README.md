# 0x18. C - Stacks, Queues - LIFO, FIFO

## Description
In this project we are tasked to create an interpreter for Monty ByteCode files. These files will have commands per line to manipulate the data structure given.
What you should learn from this project:

* What do LIFO and FIFO mean
* What is a stack, and when to use it
* What is a queue, and when to use it
* What are the common implementations of stacks and queues
* What are the most common use cases of stacks and queues
* What is the proper way to use global variables
* How to work with git submodules
---

## Instructions

Compile with:
```
gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```
---

---

## Requirements
- All your files will be compiled on Ubuntu 14.04 LTS
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You allowed to use a maximum of one global variable
- No more than 5 functions per file
- You are allowed to use the C standard library
- The repository monty should be added as a submodule to your holbertonschool-low_level_programming repository, under the name 0x18-stacks_queues_lifo_fifo

---

## Tasks

### 0. push, pall
* Implement the push and pall opcodes.
* The opcode push pushes an element to the stack.
* The opcode pall prints all the values on the stack, starting from the top of the stack.

### 1. pint
* Implement the pint opcode.
* The opcode pint prints the value at the top of the stack, followed by a new line.

### 2. pop
* Implement the pop opcode.
* The opcode pop removes the top element of the stack.

### 3. swap
* Implement the swap opcode
* The opcode swap swaps the top two elements of the stack.

### 4. add
* Implement the add opcode.
* The opcode add adds the top two elements of the stack.

### 5. nop
* Implement the nop opcode.
* The opcode nop doesn’t do anything.

### Juan Muñoz - @Kadzahk <a href="https://www.twitter.com/Kadzahk" rel="nofollow"> <img width="18px" align="center" src="https://raw.githubusercontent.com/rahulbanerjee26/githubAboutMeGenerator/main/icons/twitter.svg" style="max-width: 100%;"></a> <a href="https://www.github.com/Kadzahk"> <img width="18px" align="center" src="https://raw.githubusercontent.com/rahulbanerjee26/githubAboutMeGenerator/main/icons/github.svg" style="max-width: 100%;"></a>

### Santiago Osorno - @santiagosorno14 <a href="https://twitter.com/santiagosorno14" rel="nofollow"> <img width="18px" align="center" src="https://raw.githubusercontent.com/rahulbanerjee26/githubAboutMeGenerator/main/icons/twitter.svg" style="max-width: 100%;"></a> <a href="https://github.com/santiago1411"> <img width="18px" align="center" src="https://raw.githubusercontent.com/rahulbanerjee26/githubAboutMeGenerator/main/icons/github.svg" style="max-width: 100%;"></a>