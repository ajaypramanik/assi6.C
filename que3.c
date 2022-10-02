//3. Write a program to calculate sum of first N odd natural numbers


#include<stdio.h>

int main() {

    int i,n ,sum=0;;
    printf("enter an odd no: ");
    scanf("%d",&n);
      
        
    for(i=1; i<=n; i+=2)
    {    
        sum=sum+i; 
         
    }
    printf("\nSum is :%d",sum);    
    return 0;

}