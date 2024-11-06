/*
EXPT. NO.   : 3

TITLE       : WAP to design a menu driven calculator
              using switch statement and goto.

NAME        : Ansari Mohammed Arham Mohammad Suhail

CLASS & DIV : FE , D

UIN         : 241P134
*/

#include <stdio.h>

int main() {
    float num1, num2, result;
    char operation;

    // Displaying operations
    printf("\t\t *** Calculator *** \n\n");
    printf("\t+ : Addition\n");
    printf("\t- : Subtraction\n");
    printf("\t* : Multiplication\n");
    printf("\t/ : Division\n");
    printf("\t%% : Modulus (only for integers)\n\n");

    // Taking inputs
    printf("Enter Num1: ");
    scanf("%f", &num1);
    printf("Enter Num2: ");
    scanf("%f", &num2);
    printf("Enter operation (+, -, *, /, %%): ");
    scanf(" %c", &operation);  // Space before %c to handle newline

    // Performing operation using switch
    switch (operation) {
        case '+':
            result = num1 + num2;
            printf("%.1f + %.1f = %.1f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.1f - %.1f = %.1f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.1f * %.1f = %.1f\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.1f / %.1f = %.1f\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '%':
            // Modulus can only be done for integers
            if ((int)num2 != 0) {
                printf("%d %% %d = %d\n", (int)num1, (int)num2, (int)num1 % (int)num2);
            } else {
                printf("Error: Modulus by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operation.\n");
            break;
    }

    return 0;
}
/*
                 *** Calculator ***

        + : Addition
        - : Subtraction
        * : Multiplication
        / : Division
        % : Modulus (only for integers)

Enter Num1: 45
Enter Num2: 65
Enter operation (+, -, *, /, %): +
45.0 + 65.0 = 110.0

                 *** Calculator ***

        + : Addition
        - : Subtraction
        * : Multiplication
        / : Division
        % : Modulus (only for integers)

Enter Num1: 56
Enter Num2: 32
Enter operation (+, -, *, /, %): -
56.0 - 32.0 = 24.0

                 *** Calculator ***

        + : Addition
        - : Subtraction
        * : Multiplication
        / : Division
        % : Modulus (only for integers)

Enter Num1: 23
Enter Num2: 5
Enter operation (+, -, *, /, %): *
23.0 * 5.0 = 115.0

                 *** Calculator ***

        + : Addition
        - : Subtraction
        * : Multiplication
        / : Division
        % : Modulus (only for integers)

Enter Num1: 45
Enter Num2: 9
Enter operation (+, -, *, /, %): /
45.0 / 9.0 = 5.0

                 *** Calculator ***

        + : Addition
        - : Subtraction
        * : Multiplication
        / : Division
        % : Modulus (only for integers)

Enter Num1: 45
Enter Num2: 76
Enter operation (+, -, *, /, %): %
45 % 76 = 45
*/
