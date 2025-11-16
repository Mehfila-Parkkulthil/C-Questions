//Question 57
//Create a progam to input user name , and respond "Hi , Name ."

#include <stdio.h>
int main(){
    char name[20];
    printf("Enter your name :\n");
    scanf("%19s", name);
    printf("Hi , %s", name);
    return 0;
}