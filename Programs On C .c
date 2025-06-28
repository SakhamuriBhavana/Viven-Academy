**Sum of Two Numbers**
/*
#include <stdio.h>
int main() {
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum = %d", sum);
    return 0;
}
*/
**Even or Odd**
/*
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
*/
**Largest of Two Numbers**
/*
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
*/
**Factorial of a Number**
/*
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
*/
**Check Prime Number**
/*
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
*/
**Fibonacci Series**
/*
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
*/
**Reverse a Number**
/*
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
*/
**Check Palindrome Number**
/*
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
*/
**Check Perfect Number**
/*
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
*/



