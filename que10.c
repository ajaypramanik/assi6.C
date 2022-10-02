//Write a program to reverse a given number

#include<stdio.h>

int main() {

    int i,n ;
    printf("enter a number: ");
    scanf("%d",&n);
        
    for(i=n; i>=1; i--)
    {    
       printf("\nthe reverse no is:%d\n",i);
       
    }
    
    return 0;

}