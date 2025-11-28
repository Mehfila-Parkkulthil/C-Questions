/*Question 122
Right Aligned Inverse */

#include <stdio.h>
int main(){
  printf("\n");
  int n =4;
  for(int i =1;i<=n;i++){
    //spaces
    for(int j=1;j<=i;j++){
      printf(" "); 
    //stars
    for(int j=4;j>=i;j--){
      printf("*");
    }

    printf("\n");
  }
}}