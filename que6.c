//6. Write a program to calculate factorial of a number


#include<stdio.h>

int main() {

    int i,n ,sum=1;;
    printf("enter an odd no: ");
    scanf("%d",&n);
      
        
    for(i=1; i<=n; i++)
    {    
        sum=sum*i; 
         
    }
    printf("\nSum is :%d",sum);    
    return 0;

}