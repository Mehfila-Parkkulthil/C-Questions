/*Question90
Create a program to print all prime numbers */

#include <stdio.h>
int main(){
    printf("Lets print prime numbers upto N\n");
    int number;
    printf("Enter your number :\n");
    scanf("%d",&number);
    printf("Prime numbers are  ");
    for(int i=2;i<=number;i++){
        int isPrime =1; //assume prime
        for (int j=2;j*j<=1;j++){
            if(i%j==0){
                isPrime =0;
                break;
            }
        }
        if(isPrime){
            printf("%d",i);
        }
    }
    printf("\n");
    return 0;
}