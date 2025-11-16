//Question 29
//Create a program to check adult , teenager , child or Senior
/*Senior above 60;
Teen above 13 and below 18;
Adult above 18 and below 60
child below 13*/

#include <stdio.h>
int main(){
    int age;
    printf("Enter age: \n");
    scanf("%d",&age);
    if(age>=18 && age <60){
        printf("Adult\n");
    }else if(age>13 && age<18){
        printf("Teenager\n");
    }else if(age>=60){
        printf("Senior\n");
    }else{
        printf("child\n");
    }
    return 0;
}