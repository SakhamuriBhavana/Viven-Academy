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
```
#include <stdio.h>
int main() {
    printf("Hello, World!");   
    return 0;
}
```
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

| Aspect                         | Compilation Error                                                                 | Runtime Error                                                                 |
|-------------------------------|------------------------------------------------------------------------------------|--------------------------------------------------------------------------------|
| **When it occurs**            | Occurs during the **compilation time**                                            | Occurs during **runtime**                                                    |
| **Cause**                     | Syntax errors, type mismatches, missing declarations                              | Invalid operations like division by zero, accessing invalid memory           |
| **Detection**                 | Identified by the **compiler before execution**                                   | Detected **while the program is running**                                    |
| **Fixing**                    | Must be **corrected before running** the program                                  | Requires **debugging after execution**                                       |
| **Examples**                  | Missing semicolon, undeclared variable, incorrect function call                   | Division by zero, array out of bounds, null pointer dereference              |


## Common Applications of C

1.Operating Systems (like Linux)

2.Compilers

3.Embedded Systems

4.Game Development

5.Device Drivers
## Basic elements of C 

The basic elements of the C language are the fundamental building blocks that help you write any C program. 

**Types of Basic elements of C :-** 

1.character set
2.keywords
3.identifiers
4.constants
5.variable
6.Datatypes
7.Expressions
8.statements

**1. Character Set**

These are valid characters used in C programs:

**Letters**: A–Z, a–z

**Digits**: 0–9

**Special symbols**: + - * / = < > % ; , {} [] () # & ^ ! | ~ " ' \

**Whitespace characters**: space, tab(\t), newline(\n), Carriage Return (\r), Form Feed (\f) etc.

**2. Keywords (Reserved Words)**

These are words that have special meaning in C. 

Examples:
```
int, float, if, else, for, while, return, void, break, continue, switch, case, default, struct
```
**3. Identifiers**

1.Names used to identify variables, functions, arrays, etc.

2.Must begin with a letter (A–Z, a–z) or underscore (_)

3.Can contain letters, digits, and underscores

4.Cannot use C keywords as identifiers

Example:
```
int age; // 'age' is an identifier
```
**4. Constants**

Fixed values that do not change during execution:

-**Integer constants**: 10, -25

-**Float constants**: 3.14, -0.5

-**Character constants**: 'A', '9'

-**String constants**: "Hello", "123"

**5. Variables**

Used to store data. Each variable must be declared with a type.

**Example:**
```
int marks = 90;
float price = 25.5;
```
**6. Data Types**

Defines the type of data a variable can hold:

**Basic:** int, float, char, double

**Derived:** array, pointer, function

**User-defined:** struct, union, enum

## What does a data type Speficify?

3 points to Rememeber:-

1. How many bytes the correspponding variable occupies

2. Type of data stored in corressponding varibale

3. Range of values that can be stored in corressponding variable

**1. How many bytes the correspponding variable occupies**

**1.Char** =1Byte(8bits)

**2.int** =4Byte(32bits)

**3.float** =4Byte(32bits)

**4.short** =2Byte(16bits)

**5.double** =8Byte(64bits)

**2. Type of data stored in corressponding varibale**
```
              +-------------------------------------------------+
              | TYPES OF DATA STORED IN CORRESSPONDING VARIABLE |
              +-------------------------------------------------+
                                       |      
         +--------------------+--------+--------+------------------+    
         |                    |                 |                  |   
   +------------+     +---------------+    +----------------+  +------------------+ 
   | Numerics   |     |  Characters   |    |   Strings      |  |   Other Types   |
   +------------+     +---------------+    +----------------+  +------------------+
         |                    |                      |                  |  
  +---------------+     +----------------+   +------------------+   Derived & User- 
  | Integer Types |     |  char (1 byte) |   |  Array of chars  |   defined types
  | 1.Decimal     |     | Stores single  |   | Ends with '\0'   |   (struct, array,
  | 2.Hexadecimal |     | character like |   | Example: "Hi"    |   union, enum)
  | 3.Octal       |     | 'A', '7', '@'  |   +------------------+ 
  +---------------+     | ASCII encoded  |
          |              +---------------+  
  +------------------+
  |  Range of Values |    
  |- short int       |     
  | - int            |
  | - long int       |
  | - long long int  |
  | - unsigned short |
  | - unsigned int   |
  | - unsigned long  |
  | - unsigned long long |
  +-----------------------+        
           |
  +------------------+
  | Floating Types   |
  | (Decimal Nos.)   |
  +------------------+
  | - float          |
  | - double         |
  | - long double    |
  +------------------+
```

**3. Range of values that can be stored in corressponding variable**

**Signed Integer Types**

These can store both positive and negative numbers.

|   **Type**      |  **Range (Typical)**              | **Size** | **Example**             
| --------------- | ----------------------------------| -------- | --------------|
| `short int`     | -32,768 to 32,767                 | 2 bytes  |`short a = -500;`            
| `int`           | -2,147,483,648 to 2,147,483,647   | 4 bytes  |`int b = 1000;`         
| `long int`      | -2.1 billion to 2.1 billion       | 4 bytes  |`long c = 50000;`           
| `long long int` | Very large range                  | 8 bytes  |`long long d=1..9` 

**Unsigned Interger Types**

These can store only positive numbers (and zero).

| **Type**             | **Range (Typical)**             | **Size**     | **Example**                          |
| -------------------- | ------------------------------- | ------------ | ------------------------------------ |
| `unsigned short int` | 0 to 65,535                     | 2 bytes      | `unsigned short a = 40000;`          |
| `unsigned int`       | 0 to 4,294,967,295              | 4 bytes      | `unsigned int b = 3000000000;`       |
| `unsigned long int`  | 0 to 4 billion+                 | 4 or 8 bytes | `unsigned long c = 500000;`          |
| `unsigned long long` | 0 to 18,446,744,073,709,551,615 | 8 bytes      | `unsigned long long d = 9000000000;` |

**7. Expressions**

A combination of variables, constants, and operators that produces a value.

**Example**
```
a + b * 5;
```
**8. Statements**

Instructions that the C program executes.

**Example:**
```
int x = 10;  // declaration statement
x++;         // increment statement
```



