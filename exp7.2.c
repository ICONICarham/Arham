/*  Expt no: 7.2
        Title  : WAP to calculate sum of two matrix.
        Name   : ANSARI MOHAMMED ARHAM MOHAMMED SUHAIL
        EXPDiv    : D
        UIN    : 241P134/63
    */
    #include <stdio.h>

    int main() {
       int matrix1[7][7], matrix2[7][7], result[7][7];
       int row, col;

       // Input dimensions
        printf("Enter number of rows: ");
        scanf("%d", &row);
        printf("Enter number of columns: ");
        scanf("%d", &col);

       // Input matrix 1
        printf("Enter elements of Matrix 1:\n");
        for (int i = 0; i < row; i++) {
             for (int j = 0; j < col; j++) {
                scanf("%d", &matrix1[i][j]);
             }
      }

       // Input matrix 2
        printf("Enter elements of Matrix 2:\n");
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                scanf("%d", &matrix2[i][j]);
            }
        }

       // Add matrices
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                result[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }

       // Print Matrix 1
        printf("Matrix 1:\n");
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                 printf("%d ", matrix1[i][j]);
            }


            printf("\n");
        }

       // Print Matrix 2
        printf("Matrix 2:\n");
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                printf("%d ", matrix2[i][j]);
            }
            printf("\n");
        }

       // Print the result
        printf("Result (Matrix 1 + Matrix 2):\n");
        for (int i = 0; i < row; i++) {
           for (int j = 0; j < col; j++) {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }

       return 0;
    }
    /* OUTPUT
    Enter number of rows: 7
    Enter number of columns: 7
    Enter elements of Matrix 1:
    7 8 9 4 5 6 1
    4 5 7 8 4 9 7
    4 5 8 9 4 5 4
    4 5 4 5 4 5 9
    4 5 6 7 4 5 8
    4 5 6 5 8 5 2
    5 6 8 5 6 8 5
    Enter elements of Matrix 2:
    9 6 7 5 8 6 3
    9 2 6 5 9 3 4
    6 1 2 3 1 2 4
    3 2 3 6 5 4 6
    6 9 6 5 2 1 4
    3 6 9 5 8 5 8
    1 2 9 7 5 4 5
    Matrix 1:
    7 8 9 4 5 6 1
    4 5 7 8 4 9 7
    4 5 8 9 4 5 4
    4 5 4 5 4 5 9
    4 5 6 7 4 5 8
    4 5 6 5 8 5 2
    5 6 8 5 6 8 5
    Matrix 2:
    9 6 7 5 8 6 3
    9 2 6 5 9 3 4
    6 1 2 3 1 2 4
    3 2 3 6 5 4 6
    6 9 6 5 2 1 4
    3 6 9 5 8 5 8
    1 2 9 7 5 4 5
    Result (Matrix 1 + Matrix 2):
    16 14 16 9 13 12 4
    13 7 13 13 13 12 11
    10 6 10 12 5 7 8
    7 7 7 11 9 9 15
    10 14 12 12 6 6 12
    7 11 15 10 16 10 10
    6 8 17 12 11 12 10
    */
