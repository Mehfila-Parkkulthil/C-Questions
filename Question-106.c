/*Question106
Display AP 100 ,99,98,97 upto positive term */

#include <stdio.h>
int main(){
  int n;
  printf("Arithmetic progression\n");
  printf("Enter your number\n");
  scanf("%d",&n);
  int a =100;
  for(int i=1 ; i<=n;i++){
    printf("%d ",a);
    a--;
    if(a<0)
    return 0;
  }

}