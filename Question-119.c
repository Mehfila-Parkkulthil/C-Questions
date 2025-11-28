/*Question 119
Star cross */

#include <stdio.h>
int main(){
  printf("Enter\n");
  for(int i=1;i<=5;i++){
   for(int j=1;j<=5;j++){
    if(i+j==6 || i==j){
      printf(" * ");
    }else{
      printf("   ");
    }
   }
   printf("\n");
  }
}