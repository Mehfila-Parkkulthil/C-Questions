//Question 68
/*
Create a program to convert Fahrenheit to celsius
C= (F-32)*5/9

*/

#include <stdio.h>
int main(){
    printf("Lets convert fahrenheit to celsius\n");
    float f , c;
    printf("Enter your temperature in Fahrenheit:\n");
    scanf("%f",&f);
    c= (f-32)*(5/9);
    printf("So your Temperature in celsius : %f\n" , c);
   return 0;
}
