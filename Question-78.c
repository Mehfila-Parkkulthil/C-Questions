//Question 78
//Create a program to calculate sum of all oddd numbers from 1 to n

#include <stdio.h>
int main(){
    printf(" \n");
    printf("Lets calculate sum of all odd numbers form 1 to N (excluding N)\n");
    int N ,sum ;
    printf("Enter your number N :  ");
    scanf("%d",&N);
    sum =0;
    printf("So the numbers are :  ");
    for(int i =1 ; i<N;i++){
        if(i%2!=0){
            sum+=i;
            printf("%d  " , i);
        }
        
    }
    printf("\n");
    printf("The sum of all odd numbers are : %d", sum);
    return 0;
}