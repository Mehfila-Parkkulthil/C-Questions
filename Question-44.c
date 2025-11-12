/*Question 44
Print sum of all the multiples of 3 and 5
*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
   int N ;
   int sum = 0;
   printf("Hi , Lets calculate sum of all the multiples of 3 or 5\n");
   printf("Enter number N :\n");
   scanf("%d",&N);
   for(int i=1;i<N;i++){
    if((i%3==0) || (i%5==0)){
        sum+=i;
    }
   }
   printf("So sum of your mutltiples till %d is %d \n",N,sum);
    return 0;
}