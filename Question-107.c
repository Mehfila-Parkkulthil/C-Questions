/*Question-107
Display AP=100,96,92....*/

#include <stdio.h>
int main(){
  int n;
  printf("Arithmetic Progression\n");
  printf("Enter n:\n");
  scanf("%d",&n);
  int a =100;
   for(int i=1;a>0;i++){
    printf("%d ",a);
    a=a-4;
  }
}