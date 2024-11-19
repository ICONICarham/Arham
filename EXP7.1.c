  /*  Expt no: 7.1
        Title  : WAP to find the largest element in an array.
        Name   :ANSARI MOHAMMED ARHAM MOHAMMED SUHAIL
        Div    : D
        UIN    : 241P134
        */
    #include <stdio.h>

 int main() {
        int n, i, max;

       // Getting the number of elements in the array
        printf("Enter the number of elements in the array: ");
        scanf("%d", &n);

       int array[n];

       // Get the elements of the array
        printf("Enter the elements of the array:\n");
        for(i = 0; i < n; i++) {
            scanf("%d", &array[i]);
        }

       // Assume the first element is the largest
        max = array[0];

       // Loop through the array to find the largest element
        for(i = 1; i < n; i++) {
            if(array[i] > max) {
                max = array[i];
            }
        }

       // Print the largest element
        printf("The largest element in the array is: %d\n", max);

       return 0;
    }
    /* OUTPUT
    Enter the number of elements in the array: 7
    Enter the elements of the array:
    54
    74
    65
    98
    41
    32
    65
    The largest element in the array is: 98
    */
