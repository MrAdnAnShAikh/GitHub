#include<stdio.h>
#include<conio.h>
void main()
{
    int i ,fact = 1,n=6;
    for(i=n;i>=1;i--)
    {
        fact=fact*i;
    }
    printf("factorial of %d is : %d",n,fact); 
}