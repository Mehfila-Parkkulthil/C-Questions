// Question 9
// Take a number n from user and output its cube .

#include <stdio.h>
int main(){
    int n;
    printf("Lets calculate cube of a number n \n");
    printf("Enter n: \n");
    scanf("%d",&n);
    printf("Cube of  %d is : " ,n);
    printf("%d",n*n*n);

    return 0;
}