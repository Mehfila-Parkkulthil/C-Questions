/*Question 69
Create a program to check if a number is positive , negative or zero*/

#include <stdio.h>
int main(){
    printf("Lets check if it is positive or negative or zero \n");
    printf("Enter your number:\n");
    int n;
    scanf("%d",&n);
    if (n>0){
        printf("POSITIVE");
    }else if(n==0){
        printf("ZERO");
    }else{
        printf("NEGATIVE");
    }
}