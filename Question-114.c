/*Question 114
Star plus */

#include <stdio.h>
int main(){
  printf("Enter\n");
  for(int i=1;i<=9;i++){
    for(int j=1;j<=9;j++){
      if(i==5||j==5){
        printf(" * ");
      }else{
        printf("   ");
      }
    }
    printf("\n");
  }
  
}