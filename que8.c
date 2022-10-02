//Write a program to check whether a given number is a Prime number or




#include<stdio.h>

int main() {

    int i,n ,flag=0;
    printf("enter a number: ");
    scanf("%d",&n);
        
    for(i=2; i<n; i++)
    {    
       if(n%i==0)
       {
        flag=1;
        break ; 
       }   
    }
    if(flag==1)
       {
        printf("\nnot prime");
       }
       else {
        printf("\nprime");

       }
      
    return 0;

}