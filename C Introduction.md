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

- These are words that have special meaning in C. 

Examples:
```
int, float, if, else, for, while, return, void, break, continue, switch, case, default, struct
```
**3. Identifiers**

- An identifier is simply the name you give to an element in your program.
- It is used to identify variables, functions, arrays, structures, labels, etc.
- Names used to identify variables, functions, arrays, etc.
- Must begin with a letter (A–Z, a–z) or underscore (_)
- Can contain letters, digits, and underscores
- Cannot use C keywords as identifiers

**Example:**
```
int age; // 'age' is an identifier
```
**4. Constants**

- Fixed values that do not change during execution:

- **Integer constants**: 10, -25

- **Float constants**: 3.14, -0.5

- **Character constants**: 'A', '9'

- **String constants**: "Hello", "123"

**5. Variables**

- Used to store data. Each variable must be declared with a type.

**Example:**
```
int marks = 90;
float price = 25.5;
```
**6. Data Types**

- Defines the type of data a variable can hold:

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

- A combination of variables, constants, and operators that produces a value.

**Example**
```
a + b * 5;
```
**8. Statements**

- A **statement** in C is a single instruction that tells the computer to do something.  
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
## Operators And Expressions

- Operators are symbols that perform operations on data.(or) Operators are symbols that perform operations on variables and values.

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
## Types of Conversions

- When an expression involves different data types, C automatically converts one type to another to avoid data loss or mismatch. This process is called Type Conversion.
**Flowchart**
```
             +-------------------+
             |   Type Conversion |
             +-------------------+
                     |
        +------------+-------------+
        |                          |
+----------------+         +-----------------+
| Implicit (Auto)|         | Explicit (Cast) |
+----------------+         +-----------------+
| Small → Large  |         | Manual by user  |
| e.g., int→float|         | (datatype)expr  |
+----------------+         +-----------------+
```
**1.Implict Conversion** :

- Done automatically by the compiler.

- Also called Type Promotion.

- Converts smaller data type → larger data type to prevent data loss.

- Conversion hierarchy in C:

  char → int → float → double

**Example**
```
#include <stdio.h>
int main()
{
    int a = 5;
    float b = 2.5;
    float result = a + b;   // int is promoted to float
    printf("Result = %f", result);
    return 0;
}
```

**2. Explicit Conversion**

Done manually by the programmer.

**Syntax:**
```
(datatype) expression
```

**Example**
```
#include <stdio.h>
int main()
{
    int a = 5, b = 2;
    float result = (float)a / b;  // int is explicitly converted to float
    printf("Result = %f", result);
    return 0;
}
```
## Operator Precedence & Associativity

- Precedence: Priority of operator.

- Associativity: Direction of evaluation (left-to-right or right-to-left).

| Operator                               | Precedence | Associativity |          |              |
| -------------------------------------- | ---------- | ------------- | -------- | ------------ |
| `()` (parentheses), `[]`, `->`         | Highest    | Left → Right  |          |              |
| Unary (`++`, `--`, `!`, `~`, `(type)`) | High       | Right → Left  |          |              |
| `*`, `/`, `%`                          | Next       | Left → Right  |          |              |
| `+`, `-`                               | Medium     | Left → Right  |          |              |
| `<`, `>`, `<=`, `>=`                   | Lower      | Left → Right  |          |              |
| `==`, `!=`                             | Lower      | Left → Right  |          |              |
| `&&`                                   | Low        | Left → Right  |          |              |
| \`                                     |            | \`            | Very Low | Left → Right |
| `=`                                    | Assignment | Right → Left  |          |              |
| `,` (comma)                            | Lowest     | Left → Right  |          |              |

**Example**
```
int x = 10, y = 5, z = 2;
int result = x + y * z;   // '*' has higher precedence than '+'
printf("%d", result);     // 20, not 30
```
## Role of Parentheses

- Parentheses () override precedence rules.

- Expressions inside parentheses are always evaluated first.

**Example**
```
#include <stdio.h>
int main()
{
    int a = 10, b = 5, c = 2;
    int result1 = a + b * c;       // Without parentheses: 10 + (5*2) = 20
    int result2 = (a + b) * c;     // With parentheses: (10+5) * 2 = 30
    printf("Result1 = %d\n", result1);
    printf("Result2 = %d\n", result2);
    return 0;
}
```
## Order of Evaluation of Operands

- Precedence decides which operator is applied first.

- Associativity decides direction (left-to-right or right-to-left).

- But order of evaluation of operands is NOT always fixed in C.

**Example**
```
#include <stdio.h>
int main()
{
    int a = 2, b = 3, c = 4;
    int result = a + b * c; // Multiplication has higher precedence than addition
    printf("Result = %d", result); // 14
    return 0;
}
```
**Flow Diagram for Expression Evaluation**
```
           +-----------------------+
           |   Expression Written  |
           +-----------------------+
                       |
                       v
           +-----------------------+
           | Check for Parentheses |
           +-----------------------+
                       |
                       v
           +-----------------------+
           | Apply Precedence Rule |
           +-----------------------+
                       |
                       v
           +-----------------------+
           | Apply Associativity   |
           +-----------------------+
                       |
                       v
           +-----------------------+
           | Evaluate Expression   |
           +-----------------------+
```
## Control Statments 

- **Control structures** decide **how** and **in what order** statements run in a C program.

  They are grouped into:
- **Decision-making (branching)**: `if`, `if-else`, `else-if ladder`, `switch`
- **Looping (iteration)**: `for`, `while`, `do-while`,`Nested-Loop`
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
**3.Nesting of if…else**

- Nesting means placing one if…else statement inside another.

- Useful when we need to check multiple conditions step by step.

**Syntax:**
```
if (condition1) {
    if (condition2) {
        // code if both condition1 and condition2 are true
    }
    else {
        // code if condition1 true but condition2 false
    }
}
else {
    // code if condition1 is false
}
```
**FlowChart**
```
   ┌───────────────┐
   │  condition1 ? │
   └───────┬───────┘
           │Yes
           ▼
    ┌───────────────┐
    │  condition2 ? │
    └───────┬───────┘
        Yes │   │ No
           ▼    ▼
       [Block1] [Block2]
           │
           ▼
        [Exit]
           
Else (No from condition1) → [Block3] → Exit
```
**Example**
```
#include <stdio.h>
int main()
{
    int age = 20;
    int marks = 75;

    if (age >= 18)
    {
        if (marks >= 60)
        {
            printf("Eligible for admission.\n");
        } else
        {
            printf("Not enough marks.\n");
        }
    } else
    {
        printf("Not eligible due to age.\n");
    }

    return 0;
}
```
**Dangling else Problem**

- In C, every else is associated with the nearest unmatched if.

- This creates ambiguity when nested if statements are written without braces {}.

- It is called the dangling else problem.

**FlowChart**
 ```
            condition1?
          /       \
        Yes        No
       / 
 condition2?
   /      \
 Yes       No
 |         |
[Block1] [Block2]   ← else binds with nearest if (condition2)
```
**Example**

**Without Braces (Ambiguous)**
```
#include <stdio.h>
int main()
{
    int x = 5;
    if (x > 0)
        if (x > 10)
            printf("x is greater than 10\n");
        else
            printf("x is not greater than 10\n");
    return 0;
}
```
**What happens here?**

- At first glance, it looks like the else belongs to the outer if (x > 0).

- But in C, the rule is:

   - "else is always matched with the nearest unmatched if".

- So the else is actually paired with if (x > 10) (inner one).

**Correct Version (Using Braces)**
```
#include <stdio.h>
int main()
{
    int x = 5;
    if (x > 0)
    {
        if (x > 10)
        {
            printf("x is greater than 10\n");
        }
        else
         {
            printf("x is not greater than 10\n");
         }
    }
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

**FlowChart**
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

**4. Nested-Loop**

- A nested loop means having one loop inside another loop.
- The inner loop runs completely for each iteration of the outer loop.
- Mostly used in patterns, matrices, and multi-dimensional problems.

**FlowChart**
```
        ┌─────────────┐
        │ Outer Loop  │◄───────────────┐
        └─────┬───────┘                │
              ▼                        │
        ┌─────────────┐                │
        │ Inner Loop  │◄────────────┐  │
        └─────┬───────┘             │  │
              ▼                     │  │
         Statements                 │  │
              │                     │  │
              ▼                     │  │
        ┌─────────────┐             │  │
        │ Inner Loop? │─────────────┘  │
        └─────┬───────┘                │
              ▼                        │
        ┌─────────────┐                │
        │ Outer Loop? │────────────────┘
        └─────┬───────┘
              ▼
            Exit
```

**Example**
```
#include <stdio.h>
int main()
{
    int i, j;
    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
```
**Infinte Loop**

- An infinite loop runs forever (until the program is terminated externally or you break/return from it). They’re useful for menus, servers, event loops, embedded firmware main loops, etc.

**Flowchart**
```
   ┌──────────────┐
   │   Start      │
   └──────┬───────┘
          │
   ┌──────▼───────┐
   │   Loop Body  │
   └──────┬───────┘
          │
          ▼
   ( Condition always true )
          │
          └───────► Back to Loop Body
```
**Example**
```
#include <stdio.h>
int main()
{
    int i = 1;
    while(1)
    {   
        printf("Number: %d\n", i); // infinite loop
        i++;
        if(i > 5)
        {   
            break; // exit condition using break
        }
    }
    return 0;
}
```
 ## C) Jump Statements

- Jump statements are used to alter the normal flow of execution in loops or programs.
- There are 3 main jump statements:

     1.Break

     2.Continue

     3.Goto

     4.Return

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

**4. Return**:

- return is used inside a function to send a value (or no value) back to the calling function.

- It also terminates the execution of the current function immediately.

- In main(), return 0; indicates successful execution of the program.

**FlowChart**
```
 ┌─────────────┐
 │ Function    │
 │ Execution   │
 └─────┬───────┘
       ▼
 ┌─────────────┐
 │ return ?    │
 └───┬─────┬───┘
     │Yes  │No
     ▼     ▼
Terminate   Continue
Function    Function
```

**Example**
```
#include <stdio.h>
int add(int a, int b)
{
    return a + b;  // returns sum
}
int main()
{
    int result = add(5, 7);
    printf("Sum = %d\n", result);
    return 0;  // successful execution
}
```

## Functions

**What is a Function**

- A function in C is a block of code (a set of instructions) written to perform a specific task.

- It has a name.

- It can take input (parameters/arguments).

- It can return output (a value) or just perform an action.

- It can be reused multiple times in a program.

- Think of a function like a machine: you give input, it processes it, and gives output.

**Why do we use Functions?**

We use functions because they:

- Avoid repetition – instead of writing the same code again, we call the function.

- Increase reusability – the same function can be used in different programs.

- Improve readability – code looks cleaner and organized.

- Simplify debugging – if an error occurs, we can check just one function.

- Support teamwork – in large projects, different programmers can write different functions.

**Where do we use Functions?**

We use functions:

- To perform calculations (like sqrt() or pow() from math library).

- To organize big programs into smaller modules.

- For input/output (printf, scanf are functions).

- To implement logic (like sorting, searching, swapping, etc.).

- Basically, functions are used everywhere in C — even main() is a function!

**Advantages of using Functions**

**What it means** Functions let you break a program into small, named pieces (modules). That gives:

- **Modularity** — easier to understand & test one piece at a time.

- **Reusability** — call the same code from many places instead of copying it.

- **Maintainability** — change implementation in one place.

- **Abstraction** — callers don’t need to know internal details.

- **Easier debugging & testing** — test each function independently.

**Library Functions**

- The library funct.ions are formally not a part of the C language, but they are supplied with every C compiler. The source code of the library functions is not given to the user. These functions are precompiled and the user gets only the object code. This object code is linked, to the object code of your program by the linker. Different categories of library functions are grouped together in separate Library files. When we call a library function in our program, the linker selects the code ofthat function from the library file and adds it to the program.
 
- The definition, declaration and call of library functions

 1. Function Definition- Predefined, precompiled and present in the library.'
 
 2. Function Declaration- In header files ( files with a .h extension)
 
 3. Function Call- By the programmer

-  To use a library function in our program we should know

         (i)   Name ofthe function and its purpose

         (ii)  Type and number of arguments it accepts
 
         (iii) Type of the value it returns

         (iv)  Name ,of the header file to be included.
 
- We can define any function of our own with the same name as that of any function in the C library.
- If we do so then the function that we have defined will take precedence over the library function with the same name. 
- These are predefined functions in C’s standard library.

**Examples:**

- <stdio.h> → printf(), scanf().

- <string.h> → strlen(), strcpy().

- <math.h> → sqrt(), pow().

- <stdlib.h> → malloc(), free().

**Example**
```
#include <stdio.h>
#include <math.h>
int main()
{
    double x = 16.0;
    printf("Square root of 16 = %.2f\n", sqrt(x)); // library function
    return 0;
}
```

**User-Defined Functions**

- Functions written by the programmer for specific tasks. These types of functions are called as a User-Defined Functions.

- To create and use these fucntions we should know about these three things.Those are:

  1. Fucntion Definition

  2. Fucntion Declaration

  3. Fucntion Calling / Function Invocation
  
**1. Fucntion Definition:**

- It gives the actual body of the function.

**Syntax:**
```
return_type function_name(parameters) {
    // body
}
```

**Example**
```
int square(int n)
{  
    return n * n; // function definition
}
```

**2. Fucntion Declaration:**

- A prototype tells compiler about function name, return type, and parameters.

- Allows type checking.

- Must match definition.

**Example**
```
#include <stdio.h>
int add(int, int); // declaration
int main()
{
    printf("%d\n", add(2,3));
    return 0;
}
int add(int x, int y)
{ 
    return x + y; // definition
}
```

**3. Fucntion Calling / Fucntion Invoation**

- When we use a function inside main or another function, that is calling.

**Example:**
```
#include <stdio.h>
int square(int n)
{
   return n * n;
}
int main()
{
    int result = square(5); // function call
    printf("Square = %d\n", result);
    return 0;
}
```
- If the function defined and not called even once then it's code will never be executed. A function can be called more than once, so the code is, executed each time it is called. The execution of a function finishes either when the closing braces of the function body are reached or if return statement is encountered.

**Return Statement**

- Used to exit from a function.

- Can return a value to the caller.

- In void functions → return; just exits.

**Example**
```
#include <stdio.h>
int add(int a, int b)
{
    return a + b;  // return value
}
void show()
{
    printf("Hello\n");
    return; // exits function
}
int main()
{
    printf("Sum = %d\n", add(3, 4));
    show();
    return 0;
}
```

**Function Parameters and Arguments**

- Parameters = variables in function definition.

- Arguments = actual values passed during function call.

- C uses call by value (copy passed).

 - The calling function sends some values to the called function for communication; these values are called
 arguments or parameters.

**Actual arguments:**
 
 - The arguments which are mentioned in the function cali are known as actual arguments, since these are the values which are actually sent to the called function. Actual arguments can be written in the form of variables, constants or expressions or any function call that returns a value.

**Formal arguments:**

- The name of the arguments, ~hich are mentioned in the function definition are called formal or dummy arguments since they are used just to hold the values that are sent by the calling function.

 - These, formal arguments are simply like other local variables ofthe·function which are created when the function call srarts and are destroyed when the function ends. However there are Jwo differeqces, First is that fornml arguments are declared inside parentheses while other local variables are de~lared at the beginning ofthe function block. The second difference is'that fopnalarguments are autonlatically initialized with the values ofthe achial arguments passed, while other local variables are assigned values through the statements written inside the function body.
 
 - The order, number and type of actual arguments in the function call should match with the order, number and type of formal arguments in the function definition.

**Example**
```
 #include<stdio.h>
 main( )
 {
    int m=6.n=3;
    prinif(~~d\t":multiply(~,n)J;
    printf ("%d\ t" ,'mnltlply"(is:,'1;1),' i";"
    printf("%d\t".multiply(m+n.m-n));
    printf("%d\n".multiply(6.srim(m,n))) ;
 }
 multiply(int x. int y)
 {
    int ~;
    p:::x*y;
    return p;
 }
 sum(int x , int. y)
 {
    return X+Y;
 }
```

**Order of Evaluation of Function Arguments**

- When you call a function with multiple arguments, the C standard does not specify the order in which those arguments are evaluated.

- Some compilers may evaluate left to right, others right to left.

- That means, if your code depends on the order of evaluation → you may get different results on different compilers.

- Also, if the same variable is modified more than once in one statement, it may cause undefined behavior.

 ## Types Of Functions
 
- The functions can be classified into four categories on the basis of the arguments and return value.

                   1. Functions with no arguments and no return value.

                   2. Functions with no arguments and a return value.

                   3. Functions with arguments and no return value.

                   4. Functions with arguments and a return value.

**1. Functions with no arguments and no return value**

- These functions do not take any input (arguments) and also do not give back any output (return value).

- They just perform a task.

**Synatx**
```
void func(void)
main()
{
   ...;
   func();
   ...;
}
void func(void)
{
   ...;
   statements;
   ...;
}
```

**Example**
```
 #include<stdio.h>
 void dispmenu(void) // Functions with no arguments and no return value
 {
    printf ("1.Create database\n");
    printf("2.Insert new record\n");
    printf("3.Modifya record\n");
    printf("4.Delete a record\n");
    printf("5.Display all records\n");
    printf("6.Exit\n");
}  
 int main( ) //Function Call
 {
    int choice;.
    dispmenu( ) ;
    printf ("Enter your choice :"};
    scanf("%d",&choice);
 }
```

**2. Functions with no arguments and a return value**

- These functions take no input, but they return a value back to the calling function.

- Useful when you want to compute something and return the result.

**Syntax:**
```
void main()
{
    int result;
    ...;
    result = func();   
    ...;
}
int func(void)    
{
    ...;
    statements;
    ...;
    return value; 
}
```
**Example**
```
#include <stdio.h>
int getNumber(void)  // function definition
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    return n;  // return value to main
}
int main()   // function call
{
    int x;
    x = getNumber();  // function returns a value
    printf("You entered: %d\n", x);
}
```

**3. Functions with arguments and no return value**

- Function accepts input values (arguments).
- Function does not return a value.
- Used when function only needs to use inputs to perform an action, like printing or updating.

**Synatx**
```
#include <stdio.h>
void func(int x, int y); // function declaration
void main()
{
    ...;
    func(10, 20);  // function call with arguments
    ...;
}
void func(int a, int b)  // function definition
{
    ...;
    statements using a and b;
    ...;
}
```

**Example**
```
#include <stdio.h>
void displaySum(int a, int b)  
{
    int sum = a + b;
    printf("The sum of %d and %d is %d\n", a, b, sum);
}
int main()   
{
    int x = 10, y = 20;
    displaySum(x, y);  
}
```

 **4. Functions with arguments and a return value**

- Function accepts inputs (arguments).
- Function returns a value using return.
- This is the most common and flexible type of function.

**Synatx**
```
#include <stdio.h>
int func(int x, int y);    // function declaration
void main()
{
    int result;
    ...;
    result = func(10, 20);   // function call with arguments
    ...;
}
int func(int a, int b)     // function definition
{
    ...;
    statements using a and b;
    ...;
    return value;    // must return result
}
```

**Example**
```
#include <stdio.h>
int add(int a, int b)   
{
    int sum = a + b;
    return sum;   
}
int main()   
{
    int x, y, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    result = add(x, y);   
    printf("The sum is: %d\n", result);
}
```

**main( ) Function**
 
- Execution of every C program always begins with the function main(). Each function is called directly or indirectly in main() and after all functions have done their operations, control returns back to main(). There can be only one main() function in a program.

- The main() function is a user defined functionbut the name, number and type ofarguments are predefined in the language. The operating system calls. the main function and main() returns a value of integer type to the operating system. If the value returned is zero, it implies that the function has terminated successfully and any nonzero return value indicates an error. If no return value is specified in main() then any garbage value will be returned automatically. Calling the function exit( ) with an integer value is equivalent to returning that value from main(). The definition, declaration and call of main() function.

                 1.Function Declaration- By the C compiler

                 2.Function Definition- By the programmer

                 3.Function Call- By the operating system

**Local, Global And Static Variables**

**1. Local variable:**

- The variables that are defined within the body of a function or a block are local to that function or block only and are called local variables. These variables are created when function is entered and are destroyed when the function is exited.

**Example**
```
void func(void)
{
   int a, b;
}
```
Here a and b are local variables which are defined within the body of the function func(). Local variables can be used only in those functions or blocks, in which they are declared. The same variable name may be used in different functions.

**Example**
```
void func1(void)
{
   int a=2, b=4;
}
void func2(void)
{
   int a=15, b=20;
}
```
Here values of a=2, b=4 are local to the function func1() and a=15, b=20 are local to the function func2().

**2. Global Variables**

- The variables that are defined outside any function are called global variables. All functions in the program can access and modify global variables. It is useful to declare a variable global if it is to be used by many functions in the program. Global variables are automatically initialized to 0 at the time of declaration.

**Example**
```
#include<stdio.h>
int a, b;  //global variables
void func1(void);
void func2(void);
int main(void)
{
   a=5; b=6;
   printf("\nInside main(): a=%d, b=%d\n", a, b);
   func1();
   func2();
}
void func1(void)
{
   a=15; b=20;
   printf("\nInside func1(): a=%d, b=%d\n", a, b);
}
void func2(void)
{
   printf("\nInside func2(): a=%d, b=%d\n", a, b);
}
```
Here a and b are declared outside all functions so they are global variables. The variable a will be initialized to 0 automatically since it is a global variable. Now we can use these variables in any function. In func1(), there is a local variable with variable name as global variable. Whenever there is a conflict between a local and global variable, the local variable gets the precedence. So inside func2(), the value of local variable gets printed.

**Static Variable**

- Static variables are declared by writing keyword static in front of the declaration. If a static variable is not initialized then it is automatically initialized to 0.
- A static variable is initialized only once and its value is retained between function calls.

**Example**
```
#include<stdio.h>
void func(void);
int main(void)
{
    func();
    func();
    func();
    return 0;
}
void func(void)
{
    int a=10;
    static int b=10;
    printf("a=%d, b=%d\n",a,b);
    a++;
    b++;
}
```
Here b is a static variable. First time when the function is called b is initialized to 10. Inside the function, value of b becomes 11. This value is retained and when next time the function is called, value of b is 11 and the initialization is neglected. Similarly when third time function is called, value of b is 12. Note that the variable a, which is not static is initialized on each call and its value is not retained.


