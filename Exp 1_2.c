/*
EXPT. NO.   : 1.2

TITLE       : WAP to get students PCM marks
              from the user and find the average.
              Use conditional operator to print if
              the student is eligible for admission.
              Eligibility criteria is 50% in PCM.

NAME        : Ansari Mohammed Arham Mohammad Suhail

CLASS & DIV : FE , D

UIN         : 241P134
*/


#include <stdio.h>

int main(){
    int physics;
    int chemistry;
    int maths;
    float average;

          printf(" \t\t\t ***Student Eligibility Calculator*** \n\n\n");

          printf("Enter Physics marks\t : ");
          scanf("%d", &physics);
          printf("Enter Chemistry marks\t : ");
          scanf("%d", &chemistry);
          printf("Enter Maths marks\t : ");
          scanf("%d", &maths);

               average = (physics+chemistry+maths) / 3 ;

               printf("Average\t = %.2f\n\n", average);

          average>=50? printf("You are Eligible for Admission\n"):printf("You are Not Eligible for Admission\n");



    return 0;

}


/*                          ***Student Eligibility Calculator***


Enter Physics marks      : 65
Enter Chemistry marks    : 44
Enter Maths marks        : 78
Average  = 62.00

You are Eligible for Admission

*/
