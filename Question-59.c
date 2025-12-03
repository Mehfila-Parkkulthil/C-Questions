//Question 59
//Create a program that declares one variable of each fundamental datatypes (int , float , double and char )and prints their size using sizeof()operator

#include <stdio.h>
int main(){
    int integer ;
    float decimal;
    char character;
    double dbl;

    printf("The size of int is %d bytes\n", sizeof(integer));
    printf("The size of float is %d bytes\n", sizeof(decimal));
    printf("The size of char is %d bytes\n", sizeof(character));
    printf("The size of double is %d bytes\n", sizeof(dbl));
 
    //actually it shows warning instead of %d use %lu to avoid warning ie, unsigned int.

      return 0;
}