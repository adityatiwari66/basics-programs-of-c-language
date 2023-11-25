#include<stdio.h>
#include<conio.h>
int main()
{
   float  principal,rate,years,simpleinterest;
    printf("enter the principal,rate and interest respectively");
    scanf("%f%f%f",&principal,&rate,&years)/100;
    simpleinterest=(principal*years*rate);
    printf("the value of simpleinterest is%f",simpleinterest);
    return 0 ; 
  
}