/*Question 124
0 and 1 Triangle */

#include <stdio.h>
int main(){
  printf("Enter\n");
  for(int i =1;i<=4;i++){
    for(int j =1;j<=i;j++){
      if(((i+j)%2==0)){
        printf("1");
      }else{
        printf("%d ",0);
      }
    }
    printf("\n");
  }
}