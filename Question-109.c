/*Question109
Write a program if a number is prime or not */

#include<stdio.h>
int main(){
  printf("Prime or not\n");
  int n;
  printf("Enter n:\n");
  scanf("%d",&n);
 int a =0;
for(int i=2;i<=n-1;i++){
  if(n%i==0){
    a=1;
    break;
  }
}

if(n==1)printf("neither prime nor composite");
else if(a==0){
printf("Prime");
}else{printf("composite");
}

}

