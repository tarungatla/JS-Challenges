#include<stdio.h>
#include<conio.h>
struct employee { 
    char name[20]; 
    int age;
    char street[20]; 
    char city[20];
}e;
    void main() 
    { 
    printf("Enter employee's name:"); 
    scanf("%s",&e.name); 
    printf("\n Enter  employee's age:"); 
    scanf("%d",&e.age); 
    printf("\n Enter employee's street:"); 
    scanf("%s",&e.street); 
     printf("\n Enter employee's city:"); 
    scanf("%s",&e.city); 
    printf("\n employee’s details are:"); 
    printf("\n Name=%s",e.name); 
    printf("\n Age=%d",e.age); 
    printf("\n street=%s",e.street);
    printf("\n City=%s",e.city);    
    getch(); }