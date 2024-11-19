
/*
NAME : ANSARI MOHAMMED ARHAM MOHAMMED SUHAIL
UIN  : 241P134
ROLL NO : 63
DIV  : D
TITLE:WAP TO DIFINE A COUNTER FUNCTION TO PRINTHOW MANY TIMES FUCTION IS CALLED USE STORAGE DEVICES
CLASS : COMPUTER ENGINEERING

*/
#include <stdio.h>

void  counter() {
//Static variable to count Function calls
static int count =0;
//Increment count by i every time the function is called
 count++;
// Print the current count
printf("The function has been called %d times.\n", count);
}

int main() {
// Calling the counter function multiple times
counter();
counter();
counter();
counter();

return 0;

}


/*output

The function has been called 1 times.
The function has been called 2 times.
The function has been called 3 times.
The function has been called 4 times.


*/

