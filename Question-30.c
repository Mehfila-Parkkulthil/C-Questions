//Question 30
//Use ternary condition to check if number is even or odd

#include <stdio.h>
int main(){
    int number;
    printf("Enter number :\n");
    scanf("%d", &number);
    //Ternary condition
    // Condition? ifTrue : ifFalse;
    (number%2==0)? printf("Even\n"): printf("Odd\n");
}