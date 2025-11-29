/*Question 118
Star triangle inverted left aligned */

#include <stdio.h>
int main(){
  printf("Enter\n");
  int n =4;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i+1;j++){
      printf(" * ");
    }
    printf("\n");
  }
}

/*
  for(int i=4;i>=1;i--){
    for(int j=1;j<=i;j++){
      printf(" * ");
    }
    printf("\n");
  }
    */