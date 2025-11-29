/*Question 125
Star Rhombus */

#include <stdio.h>
int main(){
  int n=4;
  printf("Star Rhombus\n");
  printf("\n");
  for(int i=1;i<=n;i++){
    //spaces
    for(int j=1;j<=n-i+1;j++){
      printf(" ");
    }
    //stars
    for(int j=1;j<=n;j++){
      printf("*");
    }
    printf("\n");
  }
}