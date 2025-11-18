/*Question 81
Create a program to calculate the greatest common divisor of a number*/

#include<stdio.h>
int main(){
    int first ,second;
    printf("Greatest Common Divisor \n");
    printf("Enter your first and second number : \n ");
    scanf("%d , %d" ,&first , &second);
    printf("Your numbers are %d and %d\n",first , second);
    
    int min =first >second ? first 
                            :second;

    for(int i =min ; i>=1;i--){
        if(first%i==0 && second%i==0){
            printf("The Gcd of %d and %d is %d\n", first ,second , i);
            return 0;
        }
    }
    return 0;
}