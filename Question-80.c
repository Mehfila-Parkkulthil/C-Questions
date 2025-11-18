/*Question 80
Create a program to calculate Least common multiple of a number*/

#include <stdio.h>
int main(){
    int first ,second;
    printf("Least common Multiple / Lcm \n");
    printf("Enter your  first number:\n");
    scanf("%d",&first);
    printf("Enter your second number:\n");
    scanf("%d",&second);

    int min =first > second ? first
                           : second;

    int max =first * second;
    for(int i = min;i<=max;i++){

         if(i%first==0 && i%second==0){
            printf("Lcm : %d ",i);
            break;
        }
    }
    }

    
