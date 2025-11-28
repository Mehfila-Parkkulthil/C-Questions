/*Question 112
Number and alphabet triangle */

#include <stdio.h>
int main(){
  printf("Enter\n");

  for(int i=1;i<=5;i++){

  if(i%2!=0){//odd
    for(int j=1;j<=i;j++){
      printf("%d ",j);
    }
  }else{//even
    for(int j=0;j<i;j++){
      printf("%c ",('A'+ j));//'A' + 1 =67
    }
  }
  printf("\n");

  }
}