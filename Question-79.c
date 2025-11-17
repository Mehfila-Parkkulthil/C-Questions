//Quesiton 79
//Create a program to calculate the sum of the digits of a number

#include <stdio.h>
int main(){
    int n;
    printf("Lets calculate the sum of your digits\n");
    printf("Enter your number :\n");
    scanf("%d",&n);

    int sum= 0;
    int num =n;
    
    while(n>0){
        sum = sum + (n%10 ); //sum = 0 + 3; //sum =0+3+2; //sum=0+3+2+1;
        n = n/10; // n= 123/10 =12;  // n=12/10=1 ;  // n=1/10 =0 ; so loop stops
    }
    printf("The sum of your number %d is %d \n", num ,sum);
    return 0;
}