#include <stdio.h>

// I'm going to write a simple c hello world program.

/* lets make some fun with this code */

void main(){

    printf("Hello World!\n");

    // just declare a variable of type int as [ex: int myDate;]

    int mydate = 25; //Here declared with a value of initialization

    float myfloat = 25.12;

    char mychar = 'g';

    // Handling strings in c

    char mystring[] = "GOLANG";

    printf("date: %d\n",mydate);

    printf("float: %f\n", myfloat);

    printf("char: %c\n", mychar);

    printf("string: %s\n", mystring);

    printf("sum of two numbers: %.2f\n", myfloat+(float)mydate);
}