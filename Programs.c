**Sum of Two Numbers**

#include <stdio.h>
int main() {
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum = %d", sum);
    return 0;
}

**Even or Odd**

#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("Even");
    else
        printf("Odd");
    return 0;
}

**Largest of Two Numbers**

#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a > b)
        printf("%d is larger", a);
    else
        printf("%d is larger", b);
    return 0;
}

**Factorial of a Number**

#include <stdio.h>
int main() {
    int n, i;
    long long fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        fact *= i;
    printf("Factorial = %lld", fact);
    return 0;
}

**Check Prime Number**

#include <stdio.h>
int main() {
    int n, i, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (n % i == 0)
            count++;
    }
    if (count == 2)
        printf("Prime Number");
    else
        printf("Not a Prime Number");
    return 0;
}

**Fibonacci Series**

#include <stdio.h>
int main() {
    int n, t1 = 0, t2 = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}

**Reverse a Number**

#include <stdio.h>
int main() {
    int num, rev = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }
    printf("Reversed Number = %d", rev);
    return 0;
}

**Check Palindrome Number**

#include <stdio.h>
int main() {
    int num, temp, rev = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0) {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }
    if (rev == num)
        printf("Palindrome");
    else
        printf("Not a Palindrome");
    return 0;
}

**Check Perfect Number**

#include <stdio.h>
int main() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 1; i < num; i++) {
        if (num % i == 0)
            sum += i;
    }
    if (sum == num)
        printf("Perfect Number");
    else
        printf("Not a Perfect Number");
    return 0;
}

**Armstrong Number**

#include <stdio.h>
int main() {
    int num, temp, rem, result = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0) {
        rem = temp % 10;
        result += rem * rem * rem;
        temp /= 10;
    }
    if (result == num)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");
    return 0;
}

**Leap Year**

#include <stdio.h>
int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("Leap Year");
    else
        printf("Not a Leap Year");
    return 0;
}


**Sum of Digits**

#include <stdio.h>
int main() {
    int num, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }
    printf("Sum of digits = %d", sum);
    return 0;
}

**Count Digits**

#include <stdio.h>
int main() {
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        num /= 10;
        count++;
    }
    printf("Total digits = %d", count);
    return 0;
}

**Check Positive/Negative/Zero**

#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0)
        printf("Positive");
    else if (num < 0)
        printf("Negative");
    else
        printf("Zero");
    return 0;
}

**Simple Calculator (Switch Case)**

#include <stdio.h>
int main() {
    char op;
    float a, b;
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch (op) {
        case '+': printf("Result = %.2f", a + b); break;
        case '-': printf("Result = %.2f", a - b); break;
        case '*': printf("Result = %.2f", a * b); break;
        case '/': 
            if (b != 0)
                printf("Result = %.2f", a / b);
            else
                printf("Division by zero error");
            break;
        default: printf("Invalid operator");
    }
    return 0;
}

**Check Vowel or Consonant**

#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf("Vowel");
    else
        printf("Consonant");
    return 0;
}

**Multiplication Table**

#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    return 0;
}

**Swapping Two Numbers**
**with using 3rd Variable**
#include <stdio.h>
int main() {
    int a = 5, b = 10, temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swapping: a = %d, b = %d", a, b);
    return 0;
}
**without using 3rd Variable**
#include <stdio.h>
int main() {
    int a = 5, b = 10;
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping: a = %d, b = %d", a, b);
    return 0;
}

** Odd numbers between 1 to 50 by using the for loop**
    
#include <stdio.h>
int main() {
    int i;
    printf("Odd numbers from 1 to 50:\n");
    for (i = 1; i <= 50; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    return 0;
}

** Sum of Odd numbers from starting to ending eg:- 10 to 20 in between the sum of odd numbers is 75

#include <stdio.h>
int main() {
    int start, end, i, sum = 0;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);
    for (i = start; i <= end; i++) {
        if (i % 2 != 0) { 
            sum += i;
        } 
    }
    printf("Sum of all odd numbers between %d and %d is: %d\n", start, end, sum);
    return 0;
}

