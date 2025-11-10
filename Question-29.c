//Question 29
//Create a program to check adult , teenager , child

#include <stdio.h>
int main(){
    int age;
    printf("Enter age: \n");
    scanf("%d",&age);
    if(age>=18){
        printf("Adult\n");
    }else if(age>13 && age<18){
        printf("Teenager\n");
    }else{
        printf("child");
    }
    return 0;
}