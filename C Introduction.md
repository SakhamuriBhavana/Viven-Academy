## Introduction to C

## What is C?
C is a powerful, high-performance programming language developed in the early 1970s by **Dennis Ritchie** at Bell Labs. 
It is widely used for system programming, operating systems, embedded systems, and more.

## Key Features of C

**Procedural Language** – Follows step-by-step instructions

**Fast and Efficient** – Close to hardware

**Portable** – Runs on various platforms

**Modular** – Supports functions and reusable code

**Rich Library** – Built-in functions for various tasks

## Basic Structure of a C Program

#include <stdio.h>
int main() {
    printf("Hello, World!"); 
    return 0;
}

## Explanation:

**#include <stdio.h>** --> Includes standard input/output functions.

**main()** --> Entry point of every C program.

**printf()** --> Prints text to the screen.

**return 0;** --> Ends the program.

## Why Learn C?

1.Forms the base for learning other languages like C++, Java, and Python.

2.Used in system-level programming like OS, drivers, etc.

3.Improves understanding of memory management and logic building.

## Difference between the Compiler, Interpreter and Assembler

**Complier**

1.Translates C source code into assembly language.

2.Checks for syntax errors and optimizes the code.

**Interpreter**

1.Interpreter is not used in C.

2.Reads code line by line → Executes directly

3.Slower, good for testing small pieces of code quickly.

**Assembler** 

1.Converts assembly code into machine code (binary format).

2.Produces an object file (.o or .obj).

## Difference between the Linker and loader

**linker**

1.Combines multiple object files and library files into a single executable file (.exe or .out).

2.Resolves function calls (e.g., linking printf() from the standard library).

**loader** 

1.Loads the executable file into memory for execution.

2.Allocates memory and sets up the program's runtime environment.

## What is the main differrence between the Compilation error and Runtime error

**Compilation Error:-**

1.Compilation error is occurs during the compilation time

2.Compilation Error Cause	Syntax errors, type mismatches, missing declarations.

3.Compilataiton Error Detection	Identified by the compiler before execution.

4.Compilatation Error Fixing	Must be corrected before running the program.

5.Examples:-Missing semicolon, undeclared variable, incorrect function call.

**Runtime Error:-**

1.Runtime Error is occurs during th runtime.

2.Runtime Error Cause Invalid operations like division by zero, accessing invalid memory.

3.Runtime Error Detection Occurs while the program is running.

4.Runtime Error Fixing Requires debugging after execution.

5.Examples:-Division by zero, accessing an array out of bounds, null pointer dereference.

## Common Applications of C

1.Operating Systems (like Linux)

2.Compilers

3.Embedded Systems

4.Game Development

5.Device Drivers


