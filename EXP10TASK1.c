/*
    Task no: 10 (a)
    Name: ANSARI MOHAMMED ARHAM MOHAMMED SUHAIL
    Div: D
    UIN/ROLL NO : 241P134/63
    Title: WAP to Add two numbers using pointers
*/
#include <stdio.h>

int main() {
    int a, b, sum;
    int *p, *q, *Sum;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);


    p = &a;
    q = &b;
    Sum = &sum;

    *Sum = *p + *q;

    printf("The sum of %d and %d is %d\n", *p, *q, *Sum);

    return 0;
}
/*   **OUTPUT**

Enter first number: 5
Enter second number: 10
The sum of 5 and 10 is 15

*/
