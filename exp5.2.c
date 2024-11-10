
/*
NAME : ANSARI MOHAMMED ARHAM MOHAMMED SUHAIL
UIN  : 241P134
ROLL NO : 63
DIV  : D
TITLE:WAP TP FIND THE FACTORIAL OF A NUMBER USING ITERATIVE FUNCTION
CLASS : COMPUTER ENGINEERING

*/
#include <stdio.h>

// Function to calculate factorial using iteration
int factorial_iterative(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Function to calculate factorial using recursion
int factorial_recursive(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial_recursive(n - 1);
}

int main() {
    int number;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &number);

    // Calculating factorial using iterative function
    printf("Factorial of %d using iterative function: %d\n", number, factorial_iterative(number));

    // Calculating factorial using recursive function
    printf("Factorial of %d using recursive function: %d\n", number, factorial_recursive(number));

    return 0;
}
/*output
Enter a number to find its factorial: 1
Factorial of 1 using iterative function: 1
Factorial of 1 using recursive function: 1

Process returned 0 (0x0)   execution time : 2.001 s
Press any key to continue.
*/
