/*Question 115
Star triangle Right aligned */

#include <stdio.h>
int main(){
  printf("Enter\n");
  for(int i=1;i<=5;i++){
    for(int j=1;j<=i;j++){
      printf("*");
    }
    printf("\n");
  }
}