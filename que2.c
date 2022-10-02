//2. Write a program to calculate sum of first N even natural numbers


#include<stdio.h>

int main() {

    int i,n ,sum=0;
    printf("enter a even no: ");
    scanf("%d",&n);
           
    for(i=2; i<=n; i+=2)
    {    
        sum=sum+i; 
         
    }
    printf("\nSum is :%d",sum);    
    return 0;

}