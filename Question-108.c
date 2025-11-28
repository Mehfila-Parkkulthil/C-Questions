/*Question-108
Display GP -100,50,25...*/

#include <stdio.h>
int main(){
  int n;
  printf("Arithmetic Progression\n");
  printf("Enter n:\n");
  scanf("%d",&n);
  float a =100;
  for(int i=1;i<=n;i++){
    printf("%.2f , ",a);
    a/=2;
  }
 
  }
