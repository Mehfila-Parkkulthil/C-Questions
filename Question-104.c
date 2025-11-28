/*Question104
Display  the GP =1,2,4,8,16....upto n terms*/

#include <stdio.h>
#include <math.h>
int main(){
  int n;
  printf("Geometric Progression \n");
  printf("Enter your number:\n");
  scanf("%d",&n);
  // a = n th term = a*r(n-1);
  int a = 1 * pow(2,(n-1));

  for (int i=1; i<=a;i*=2){
    printf("%d ",i);
  }
}