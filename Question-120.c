/*Question 120
Right Aligned Triangle 
*/
#include <stdio.h>
int main(){
  int n =4;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){//spaces
      printf("   ");
    }
    for(int j=1;j<=i;j++){//stars
      printf(" * ");
    }
    printf("\n");
  }
}