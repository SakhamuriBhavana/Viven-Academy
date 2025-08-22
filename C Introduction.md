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
## Operators

Operators are symbols that perform operations on data.(or) Operators are symbols that perform operations on variables and values.

## Types of Operators

**1. Arithmetic Operators** :
perform basic math (+ - * / %).

**Example**
```
#include <stdio.h>
int main()
{
    int a = 10, b = 5, result;
    int x = 6, y = 3;
    printf("Arithmetic Operators:\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);
    return 0;
}
```
**2. Relational Operators** :
Compare values ( == != > < >= <= ).

**Example**
```
#include <stdio.h>
int main()
{
    int a = 10, b = 5, result;
    int x = 6, y = 3;
    printf("\nRelational Operators:\n");
    printf("a > b = %d\n", a > b);
    printf("a < b = %d\n", a < b);
    printf("a == b = %d\n", a == b);
    printf("a != b = %d\n", a != b);
    return 0;
}
```
  
**3. Logical Operators** :
Compare Conditions (&& || !).

**Example**
```
 #include <stdio.h>
 int main()
 {
    int a = 10, b = 5, result;
    int x = 6, y = 3;
    printf("\nLogical Operators:\n");
    printf("(a > b) && (x > y) = %d\n", (a > b) && (x > y));
    printf("(a > b) || (x < y) = %d\n", (a > b) || (x < y));
    printf("!(a < b) = %d\n", !(a < b));
    return 0;
}
```

**4. Assignment Operators** :
Shorthand Updates (= += -= *= /= %=). 

**Example**
```
 #include <stdio.h>
 int main()
 {
    int a = 10, b = 5, result;
    int x = 6, y = 3;
    printf("\nAssignment Operators:\n");
    result = a;     // simple assignment
    printf("result = %d\n", result);
    result += b;    // result = result + b
    printf("result += b → %d\n", result);
    result -= b;    // result = result - b
    printf("result -= b → %d\n", result);
    result *= b;    // result = result * b
    printf("result *= b → %d\n", result);
    result /= b;    // result = result / b
    printf("result /= b → %d\n", result);
    return 0;
}
```
**5. Increment/Decrement Operators** :
Increase/decrease by 1 (++ --). 

**Example**
```
 #include <stdio.h>
 int main()
 {
    int a = 10, b = 5, result;
    int x = 6, y = 3;
    printf("\nIncrement and Decrement Operators:\n");
    printf("a++ = %d\n", a++);   // Post-increment
    printf("Now a = %d\n", a);
    printf("++b = %d\n", ++b);   // Pre-increment
    printf("Now b = %d\n", b);
    printf("a-- = %d\n", a--);   // Post-decrement
    printf("Now a = %d\n", a);
    printf("--b = %d\n", --b);   // Pre-decrement
    printf("Now b = %d\n", b);
    return 0;
}
```
**6. Bitwise Operators** :
Operate at binary level (& | ^ ~ << >>).

**Example**
```
 #include <stdio.h>
 int main()
 {
    int a = 10, b = 5, result;
    int x = 6, y = 3;
    printf("\nBitwise Operators:\n");
    printf("a & b = %d\n", a & b);   // AND
    printf("a | b = %d\n", a | b);   // OR
    printf("a ^ b = %d\n", a ^ b);   // XOR
    printf("a << 1 = %d\n", a << 1); // Left Shift
    printf("a >> 1 = %d\n", a >> 1); // Right Shift
    return 0;
}
```
**7. Conditional (Ternary) Operator** :
Shorthand if-else

**Syntax**
```
condition ? true : false
```

**Example**
```
#include <stdio.h>
 int main()
 {
    int a = 10, b = 5, result;
    int x = 6, y = 3;
    printf("\nConditional (Ternary) Operator:\n");
    int max = (a > b) ? a : b;
    printf("Max between a and b = %d\n", max);
    return 0;
}
```
**8. Comma Operator**
- Evaluates multiple expressions from left to right.
- The last expression’s value is assigned.

**Example**
```
#include <stdio.h>
 int main()
 {
    int a = 10, b = 5, result;
    int x = 6, y = 3;
    printf("\nComma Operator:\n");
    int c;
    c = (a = 2, b = 3, a + b);  // evaluates left to right, result is last expression
    printf("Using comma operator: c = %d\n", c);
    return 0;
}
```
**9. Sizeof Operator**
- Returns the size in bytes of a data type or variable.

**Example**
```
#include <stdio.h>
 int main()
 {
    int a = 10, b = 5, result;
    int x = 6, y = 3;
    printf("\nsizeof Operator:\n");
    printf("sizeof(int) = %lu bytes\n", sizeof(int));
    printf("sizeof(float) = %lu bytes\n", sizeof(float));
    printf("sizeof(char) = %lu bytes\n", sizeof(char));
    printf("sizeof(double) = %lu bytes\n", sizeof(double));
    printf("sizeof(a) = %lu bytes\n", sizeof(a));
    return 0;
}
```
## Control Statments 

**Control structures** decide **how** and **in what order** statements run in a C program.

They are grouped into:
- **Decision-making (branching)**: `if`, `if-else`, `else-if ladder`, `switch`
- **Looping (iteration)**: `for`, `while`, `do-while`
- **Jump statements**: `break`, `continue`, `goto`, `return`

 ## A) Decision-Making (Branching)

**1. If Statement**
 -  Runs a block **only if** the condition is true (non-zero).

**Syntax:**
```c
if (condition) {
    // executes when condition is true
}
```
**FLow Chart**
```
   ┌───────────────┐
   │   Condition?  │
   └───────┬───────┘
           │Yes
           ▼
     ┌────────────┐
     │ Statement  │
     └────────────┘
           │ 
           ▼
        Next step
```

**Example**
```
#include <stdio.h>
int main(void) {
    int x = 7;
    if (x > 0) {
        printf("x is positive\n");
    }
    return 0;
}
```
**2. If-Else Statement**

- Choose between two paths: if condition is true → run A, else → run B.

**Syntax:**
```
if (condition) {
    // true block
} else {
    // false block
}
```
**Flowchart**
```
   ┌───────────────┐
   │   Condition?  │
   └───────┬───────┘
       Yes │  
           ▼
  ┌────────────┐ No  ┌────────────┐
  │ Statement1 │ --> │ Statement2 │
  └────────────┘     └────────────┘
           │
           ▼
        Next step
```
**Example**
```
#include <stdio.h>
int main(void) {
    int n = 12;
    if (n % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
    return 0;
}
```
**3. Else-If Ladder**

- Test multiple exclusive conditions in order.

**Syntax:**
```
if (cond1) { ... }
else if (cond2) { ... }
else if (cond3) { ... }
else { ... }
```

**FlowChart**
```
   ┌───────────────┐
   │ Condition 1 ? │
   └───────┬───────┘
       Yes │ No
           ▼
   ┌───────────────┐
   │  Statement 1  │
   └───────────────┘
           │
           ▼
        Next step
           
   If No → Check next:
   ┌───────────────┐
   │ Condition 2 ? │
   └───────┬───────┘
       Yes │ No
           ▼
   ┌───────────────┐
   │  Statement 2  │
   └───────────────┘
           │
           ▼
        Next step

   ...
   Else → Default Statement
```

**Example**
```
#include <stdio.h>
int main(void) {
    int marks = 83;
    if (marks >= 90) printf("A\n");
    else if (marks >= 75) printf("B\n");
    else if (marks >= 60) printf("C\n");
    else printf("D\n");
    return 0;
}
```

**4. Switch Statement**

- Branch based on the value of an expression (integral types like int, char, enums).

**Key Points**

- case labels must be **constant and unique**.

- Use break to prevent **fall-through** (executing next cases unintentionally).

- default runs if no case matches (optional but recommended).

**Syntax**
```
switch (expr) {
    case C1: /* block */ break;
    case C2: /* block */ break;
    ...
    default: /* block */
}
```

**FlowCahrt**
```
    ┌─────────────┐
    │ Switch(var) │
    └───────┬─────┘
        ┌───┴───┐
        ▼       ▼
   Case 1    Case 2
   ┌─────┐   ┌─────┐
   │Stmt1│   │Stmt2│
   └─────┘   └─────┘
       │       │
       └───► Default
```

**Example**
```
#include <stdio.h>
int main(void) {
    int choice = 2;
    switch (choice) {
        case 1: printf("Start\n"); break;
        case 2: printf("Settings\n"); break;
        case 3: printf("Exit\n"); break;
        default: printf("Invalid\n");
    }
    return 0;
}
```

 ## B) Looping (Literation)
 - A loop is used when we need to execute a block of statements repeatedly until a certain condition is true.

- There are 3 main types of loops in C:

1. For loop

2. While loop

3. Do-while loop

**1. For Loop** :

- Used when we know the number of iterations in advance.

**Syntax**
```
for(initialization; condition; increment/decrement) {
    // statements
}
```
**FlowChart**
```
 ┌──────────────┐
 │ Initialization│
 └──────┬───────┘
        ▼
 ┌──────────────┐
 │  Condition?  │
 └───┬─────┬────┘
     │Yes  │No
     ▼     ▼
 ┌──────────────┐
 │  Statement   │   → Exit loop
 └──────┬───────┘
        │
   ┌────▼────┐
   │ Update  │
   └─────────┘
        │
        └──> Back to Condition
```

**Example**
```
#include <stdio.h>
int main()
{
    int i;
    for(i = 1; i <= 5; i++)
    {
        printf("%d ", i);
    }
    return 0;
}
```

**2. While Loop** :

- Used when the number of iterations is not known in advance.

**Syntax**
```
while(condition) {
    // statements
}
```
**FlowChart**
```
 ┌──────────────┐
 │  Condition?  │
 └───┬─────┬────┘
     │Yes  │No
     ▼     ▼
 ┌──────────────┐
 │  Statement   │   → Exit loop
 └──────┬───────┘
        │
        └──> Back to Condition
```
**Example**
```
#include <stdio.h>
int main()
{
    int i = 1;
    while(i <= 5)
    {
        printf("%d ", i);
        i++;
    }
    return 0;
}
```
**3. Do-While Loop** :

- Similar to while, but it executes at least once even if the condition is false.

**Syntax**
```
do {
    // statements
} while(condition);
```

**FlowChart**
```
 ┌──────────────┐
 │  Statement   │
 └──────┬───────┘
        │
 ┌──────▼──────┐
 │ Condition ? │
 └───┬─────┬───┘
     │Yes  │No
     └─> Back │
         └────┘
```
**Example**
```
#include <stdio.h>
int main()
{
    int i = 1;
    do
    {
        printf("%d ", i);
        i++;
    } while(i <= 5);
    return 0;
}
```
 ## C) Jump Statements
- Jump statements are used to alter the normal flow of execution in loops or programs.
- There are 3 main jump statements:
1.break

2.continue

3.goto

**1. Break**:

- Used to terminate a loop or switch immediately.

- Control moves to the statement after the loop/switch.

**FlowChart**
```
   ┌─────────────┐
   │ Loop Start  │
   └─────┬───────┘
         ▼
   ┌─────────────┐
   │ Condition ? │
   └───┬─────┬───┘
       │Yes  │No → Exit
       ▼
   ┌─────────────┐
   │ Statement   │
   └─────┬───────┘
         ▼
   ┌─────────────┐
   │ break ?     │
   └───┬─────┬───┘
       │Yes  │No
       ▼     ▼
     Exit   Continue Loop
```
**Example**
```
#include <stdio.h>
int main()
{
    int i;
    for(i = 1; i <= 10; i++)
    {
        if(i == 5)
        {
            break;  // loop stops when i = 5
        }
        printf("%d ", i);
    }
    return 0;
}
```
**2. Continue**:

- Used to skip the current iteration of the loop.

- Control jumps to the next iteration of the loop.

  **FlwoChart**
```
   ┌─────────────┐
   │ Loop Start  │
   └─────┬───────┘
         ▼
   ┌─────────────┐
   │ Condition ? │
   └───┬─────┬───┘
       │Yes  │No → Exit
       ▼
   ┌─────────────┐
   │ continue ?  │
   └───┬─────┬───┘
       │Yes  │No
       ▼     ▼
   Skip Iter. Statement
         │
         ▼
     Next Iteration
```

**Example**
```
#include <stdio.h>
int main()
{
    int i;
    for(i = 1; i <= 10; i++)
    {
        if(i == 5)
        {
            continue; // skips printing 5
        }
        printf("%d ", i);
    }
    return 0;
}
```
**3. Goto**:

- Transfers control to a label in the program.

- Should be used carefully (not recommended in structured programming).

**FlowChart**
```
   ┌─────────────┐
   │ Statement 1 │
   └─────┬───────┘
         ▼
   ┌─────────────┐
   │ goto Label  │
   └─────┬───────┘
         ▼
   ┌─────────────┐
   │ Label: stmt │
   └─────────────┘
```

**Example**
```
#include <stdio.h>
int main()
{
    int i = 1;
    loop:
        if(i <= 5)
        {
            printf("%d ", i);
            i++;
            goto loop;  // jumps back to label
        }
    return 0;
}
```






