/*Question82
Create a program to check if the number is prime or not*/

#include <stdio.h>
int main(){
    printf("Lets check if Prime or not\n");
    int n;
    printf("Enter your number :\n");
    scanf("%d",&n);

    for(int i=n-1 ; i>=2 ;i--){
        if(n%i==0){
            printf("%d is not prime",n);
            return 0;
        }
    }
    printf("%d is prime" , n);
    return 0;
}
/*for(int i=2;i<n;i++){
 if(n%i==0){
            printf("%d is not prime",n);
            return 0;
        }
}


*/