/*
    Task no: 10 (b)
    Name:ANSARI MOHAMMED ARHAM MOHAMMED SUHAIL
    Div: D
    UIN/ROOL NO: 241P134/63
    Title: WAP to print reverse of an array
    in reverse order using pointers
*/
#include <stdio.h>

int main() {
    int n;

    printf("Enter the no. of elements in array: ");
    scanf("%d", &n);

    int size[n];
    int *S = size;

    printf("Enter the elements of array:\n");
    for (int i=0; i<n; i++) {
        scanf("%d", S + i);
    }

    printf("Array in reverse order is :\n");
    for (int j=n-1; j>=0; j--) {
        printf("%d ", *(S + j));
    }

    return 0;
}
/*   **OUTPUT**
Enter the no. of elements in array: 5
Enter the elements of array:
1
2
3
4
5
Array in reverse order is :
5 4 3 2 1
*/
