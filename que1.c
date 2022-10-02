//1. Write a program to calculate sum of first N natural numbers


#include<stdio.h>

int main() {

    int i,n ,sum=0;;
    printf("enter a positive no: ");
    scanf("%d",&n);
      
        
    for(i=1; i<=n; i++)
    {    
        sum=sum+i; 
         
    }
    printf("\nSum is :%d",sum);    
    return 0;

}