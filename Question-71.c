//Question 71
//Create a program that determines if a given year is a leap year or not
//Hint : Considering conditions like divisible by 4 but not 100, unless also divisible by 400.
//i.e , A year can be said leap year if it gets divided by 4 , but if it also gets divided by 100 then its not at the same time if it gets divided by 100 and also 400 then its a leap year.

#include <stdio.h>
int main(){
    printf("LEAP YEAR or NOT\n");
    int year;
    printf("Enter year:\n");
    scanf("%d",&year);

    //if divided by 4 and not divided by 100 then its a leap year 
    //also if divided by 400 its a leap year

    if((year%4==0 && year%100!=0)||(year%400==0)){
        printf("LEAP YEAR");
    }else{
        printf("NOT A LEAP YEAR");
    }
    return 0;


/*
if(year%400==0){
    printf("LEAP YEAR");
  }else if(year%100==0){
    printf("NOT LEAP YEAR");
  }else if(year%4==0){
    printf("LEAP YEAR");
  }else{
    printf("NOT A LEAP YEAR");
  }


*/
  

}