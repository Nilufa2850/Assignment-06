// Write a program to calculate factorial of a number.

#include<stdio.h>
int main()
{
    int x = 1 , n , fact = 1 ;
    printf("Enter a number : ");
    scanf("%d",&n);

    while (x <= n)
    {
        fact = fact*x ;
        x++;
    }
    printf("\nFactorial of %d is %d: ",n,fact);

    return 0;
}
