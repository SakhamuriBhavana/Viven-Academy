## Sum of two numbers 
```
#include <stdio.h>
int main() {
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum = %d", sum);
    return 0;
}
```
**Even or Odd**
```
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
```
**Largest of Two Numbers**
```
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
```
**Factorial of a Number**
```
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
```
**Check Prime Number**
```
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
```
**Fibonacci Series**
```
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
```
**Reverse a Number**
```
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
```
**Check Palindrome Number**
```
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
```
**Check Perfect Number**
```
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
```
**Armstrong Number**
```
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
```
**Leap Year**
```
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
```
**Sum of Digits**
```
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
```
**Count Digits**
```
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
```
**Check Positive/Negative/Zero**
```
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
```
**Simple Calculator (Switch Case)**
```
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
```
**Check Vowel or Consonant**
```
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
```
**Multiplication Table**
```
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
```
**Swapping Two Numbers**
**with using 3rd Variable**
```
#include <stdio.h>
int main() {
    int a = 5, b = 10, temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swapping: a = %d, b = %d", a, b);
    return 0;
}
```
**without using 3rd Variable**
```
#include <stdio.h>
int main() {
    int a = 5, b = 10;
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping: a = %d, b = %d", a, b);
    return 0;
}
```
**Odd numbers between 1 to 50 by using the for loop**
```  
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
```
**Sum of Odd numbers from starting to ending eg:- 10 to 20 in between the sum of odd numbers is 75**
```
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
```
**Count the Number of Vowels in a string** 
```
#include <stdio.h>
int main() {
  char str[100];
  printf("Enter a string:");
  scanf("%s",&str);
  int count=0;
  for(int i=0;str[i]!='\0';i++)
  {
      if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A'|| str[i]=='E'|| str[i]=='I'|| str[i]=='O'|| str[i]=='U')
      {
          count++;
      }
  }
  printf("Number of vowels in  a string:");
  printf("%d",count);

    return 0;
}
```
**Sum of Numerics in a String**
```
#include <stdio.h>
int main() {
    char str[100];
    int sum = 0, i = 0;
    printf("Enter a string: ");
    scanf("%s", str); // Reads a word (no spaces)

    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            sum += str[i] - '0'; // Convert character digit to int
        }
        i++;
    }
    printf("Sum of numeric digits: %d\n", sum);
    return 0;
}
```
**Sum of Adjacent Elements in an Array and print Highest Sum**
```
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in an array:");
    scanf("%d",&n);
    printf("Enter %d elements:");
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int highest_sum=0;
    int add=0;
    for(int i=0;i<n-1;i++)
    {
        add=arr[i]+arr[i+1];
        if(add > highest_sum)
        {
            highest_sum=add;
        }
    }
    printf("%d",highest_sum);
    return 0;    
}
```
**Swapping of 2 Variables by using Functions**
```
#include <stdio.h>
void swap(int *a, int *b);
int main() {
    int x, y;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    printf("\nBefore swapping:\n");
    printf("x = %d\ny = %d\n", x, y);
    swap(&x, &y);
    printf("\nAfter swapping:\n");
    printf("x = %d\ny = %d\n", x, y);
    return 0;
}
void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
```
**write a function to reverse a number in C language**
```
#include <stdio.h>
int reverseNumber(int n);
int main() {
    int num, reversed;
    printf("Enter a number: ");
    scanf("%d", &num);
    reversed = reverseNumber(num);
    printf("Reversed number: %d\n", reversed);
    return 0;
}
int reverseNumber(int n) {
    int reverse = 0;
    while (n != 0) {
        reverse = reverse * 10 + n % 10;
        n = n / 10;
    }
    return reverse;
}
```
**Write a Function to print Sum of Even numbers in a number and Product of Odd Numbers in a Numbers**
```
#include <stdio.h>
void findSumAndProduct(int number);
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    findSumAndProduct(number);
    return 0;
}
void findSumAndProduct(int number) {
    int evenSum = 0;
    int oddProduct = 1;
    int foundOdd = 0;
    while (number > 0) {
        int digit = number % 10;  

        if (digit % 2 == 0) {
            evenSum = evenSum + digit;  
        } else {
            oddProduct = oddProduct * digit;  
            foundOdd = 1;
        }
        number = number / 10;
    }
    printf("Sum of even digits = %d\n", evenSum);
    if (foundOdd == 1) {
        printf("Product of odd digits = %d\n", oddProduct);
    } else {
        printf("There are no odd digits.\n");
    }
}
```
**check whether a number is divisible by 3 or divisible 5 but not both without using functions**
```
#include <stdio.h>
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if ((number % 3 == 0 && number % 5 != 0) || (number % 3 != 0 && number % 5 == 0)) {
        printf("%d is divisible by 3 or 5, but not both.\n", number);
    } else {
        printf("%d is either not divisible by 3 or 5, or divisible by both.\n", number);
    }
    return 0;
}
```
**check whether the entered character is alphabet or not using logical operators without functions**
```
#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);  
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("'%c' is an alphabet.\n", ch);
    } else {
        printf("'%c' is NOT an alphabet.\n", ch);
    }
    return 0;
}
```
**Write a Program to find the majority element of an array**
```
#include <stdio.h>
int main()
{ 
    int n,i,j,count,me;
    printf("Enter the number of elememnts in an array:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
      count=0;
          for(j=0;j<n;j++)
          {
              if(arr[i]==arr[j])
              {
                 count++;
              }
           }
           if(count>n/2)
            {
                me=arr[i];
                break;
            }
    }
if(me!=-1)
    printf("The majority element is:%d\n",me);
else
    printf("There is  bo me element");
    return 0;
    }
```
**write a program to find the substring in a string without using the functions**
```
#include <stdio.h>
int main() {
    char mainStr[100], subStr[100];
    int i, j;
    printf("Enter the main string: ");
    scanf("%s", mainStr); 
    printf("Enter the substring to search: ");
    scanf("%s", subStr);
    for (i = 0; mainStr[i] != '\0'; i++) {
        for (j = 0; subStr[j] != '\0'; j++) {
            if (mainStr[i + j] != subStr[j]) {
                break;
            }
        }
        if (subStr[j] == '\0') {
            printf("Substring found at position %d\n", i);
            return 0;
        }
    }
    printf("Substring not found.\n");
    return 0;
}
```
**Program to reverse a string by using funcitions**
```
#include <stdio.h>
void reverseString(char str[]); 
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);  
    reverseString(str); 
    printf("Reversed string: %s\n", str);
    return 0;
}
void reverseString(char str[]) {
    int start = 0;
    int end = 0;
    while (str[end] != '\0') {
        end++;
    }
    end--; 
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
```
**program to count the number of words in a string**
```
#include <stdio.h>
int main() {
    char str[200];
    int i = 0, words = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);  
    while (str[i] != '\0') {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' ')) {
            words++;  
        }
        i++;
    }
    printf("Word count: %d\n", words);
    return 0;
}
```
**Program to reverse the character in a string**
```
#include <stdio.h>
int main() {
    char str[100];
    int i, length = 0;
    printf("Enter a string: ");
    scanf("%s", str);  
    while (str[length] != '\0') {
        length++;
    }
    for (i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
    printf("Reversed string: %s\n", str);
    return 0;
}
```
**Count the Number words in a sentence**
```
#include <stdio.h>
int main() {
    char str[200];       
    int i = 0, words = 1;
    printf("Enter a sentence: ");
    scanf(" %[^\n]", str); 
    while (str[i] != '\0') {              
        if (str[i] == ' ' && str[i+1] != ' ') {
            words++;                      
        }
        i++;                              
    }
    printf("Number of words: %d\n", words);
    return 0;
}
```
**Find the Length of a String (without strlen)**
```
#include <stdio.h>
int main() {
    char str[100];
    int i = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    while (str[i] != '\0') {
        i++;
    }
    printf("Length of the string: %d\n", i);
    return 0;
}
```
**Program on to Extract the given string**
```
#include <stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int start,end;
    printf("enter a string: ");
    fgets(str,sizeof(str),stdin);
    printf("Enter the start and end value: ");
    scanf("%d %d",&start,&end);
    for(int i=start;i<end;i++){
        for(int j=i;j<end;j++){
            for(int k=i;k<=j;k++){
                printf("%c",str[k]);
            }
            printf("\n");
        }
    }
}
```
**Program on odd numbers on left side and even numbers on right side**
```
#include <stdio.h>
int main() {
    int arr[100], n, i, j, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    i = 0;
    j = n - 1;
    while(i < j) {
        while(arr[i] % 2 != 0 && i < j) {
            i++;
        }
        while(arr[j] % 2 == 0 && i < j) {
            j--;
        }
        if(i < j) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    printf("Reordered array (odd left, even right):\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
```
