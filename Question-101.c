/*Question 101
Scope of i and j
*/
#include <stdio.h>
int main(){
  printf("Hi lets see the scope of i and j\n");

  for(int i=1;i<=3;i++){
    printf("Hi World\n");
  }

  printf("\n");

  int j;
  for(j=1;j<=5;j++){
    printf("How are you Aiera\n");
  }

  printf("%d",j); //output 6
  // printf("%d",i); shows error
}