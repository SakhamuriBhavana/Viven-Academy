## Introduction to C

## What is C?
C is a powerful, high-performance programming language developed in the early 1970s by **Dennis Ritchie** at Bell Labs. 
It is widely used for system programming, operating systems, embedded systems, and more.

## Key Features of C
- **Procedural Language** – Follows step-by-step instructions
- **Fast and Efficient** – Close to hardware- 
- **Portable** – Runs on various platforms
- **Modular** – Supports functions and reusable code
- **Rich Library** – Built-in functions for various tasks

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

- Forms the base for learning other languages like C++, Java, and Python.
- Used in system-level programming like OS, drivers, etc.
- Improves understanding of memory management and logic building.

## Difference between the Compiler, Interpreter and Assembler

**Complier**

- Translates C source code into assembly language.
- Checks for syntax errors and optimizes the code.

**Interpreter**

- Interpreter is not used in C.
- Reads code line by line → Executes directly
- Slower, good for testing small pieces of code quickly.

**Assembler** 

- Converts assembly code into machine code (binary format).
- Produces an object file (.o or .obj).

## Difference between the Linker and loader

**linker**

- Combines multiple object files and library files into a single executable file (.exe or .out).
- Resolves function calls (e.g., linking printf() from the standard library).

**loader** 

- Loads the executable file into memory for execution.

- Allocates memory and sets up the program's runtime environment.

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

- **Letters**: A–Z, a–z

- **Digits**: 0–9

- **Special symbols**: + - * / = < > % ; , {} [] () # & ^ ! | ~ " ' \

- **Whitespace characters**: space, tab(\t), newline(\n), Carriage Return (\r), Form Feed (\f) etc.

**2. Keywords (Reserved Words)**

These are words that have special meaning in C. 

Examples:
```
int, float, if, else, for, while, return, void, break, continue, switch, case, default, struct
```
**3. Identifiers**

- Names used to identify variables, functions, arrays, etc.
- Must begin with a letter (A–Z, a–z) or underscore (_)
- Can contain letters, digits, and underscores
- Cannot use C keywords as identifiers

Example:
```
int age; // 'age' is an identifier
```
**4. Constants**

Fixed values that do not change during execution:

- **Integer constants**: 10, -25

- **Float constants**: 3.14, -0.5

- **Character constants**: 'A', '9'

- **String constants**: "Hello", "123"

**5. Variables**

Used to store data. Each variable must be declared with a type.

**Example:**
```
int marks = 90;
float price = 25.5;
```
**6. Data Types**

Defines the type of data a variable can hold:

- **Basic:** int, float, char, double

- **Derived:** array, pointer, function

- **User-defined:** struct, union, enum

## What does a data type Speficify?

3 points to Rememeber:-

- How many bytes the correspponding variable occupies
- Type of data stored in corressponding varibale
- Range of values that can be stored in corressponding variable

**1. How many bytes the correspponding variable occupies**

- **Char** =1Byte(8bits)
- **int** =4Byte(32bits)
- **float** =4Byte(32bits)
- **short** =2Byte(16bits)
- **double** =8Byte(64bits)

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

A **statement** in C is a single instruction that tells the computer to do something.  
Each statement ends with a semicolon (`;`).

## Types of Statements

**1. Declaration Statements**
Used to declare variables.
```c
int a = 10;
float b;
```
**2. Expression Statements**

Used to perform calculations or operations.
```
a + b;  
x = y * 5;
```
**3. Assignment Statements**

Used to assign values to variables.
```
x = 20;
```
**4. Control Statements**

Used to control the flow of the program.
```
if(x > 10) {
    printf("Big number");
}
```
**5. Increment/Decrement Statements**

Used to increase or decrease the value of a variable by 1.
```
x++;   // increment
y--;   // decrement
```
**6. Compound Statements (Blocks)**

A group of statements enclosed within { }.
```
{
    int a = 5;
    int b = 10;
    printf("%d", a + b);
}
```
**9. Operators in C**

Operators are symbols that perform operations on data.

## Types of Operators

-**Arithmetic Operators**: + - * / %

-**Relational Operators**: == != > < >= <=

-**Logical Operators**: && || !

-**Assignment Operators**: = += -= *= /= %=

-**Increment/Decrement Operators**: ++ --

-**Bitwise Operators**: & | ^ ~ << >>

-**Conditional (Ternary) Operator**
```
int result = (a > b) ? a : b;
```

-**Comma Operator**
```
int a, b, c;
c = (a = 3, b = 4, a + b); // c = 7
```

-**sizeof Operator**
```
printf("%lu", sizeof(int));  // commonly 4 bytes
```





