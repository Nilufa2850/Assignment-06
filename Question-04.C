// Write a program to calculate sum of squares of first N natural numbers.

#include<stdio.h>
int main()
{
    int x = 1 , n , sum = 0 ;
    printf("Enter a number : ");
    scanf("%d",&n);

    while (x <= n)
    {
        sum = sum + x*x ;
        x++;
    }
    printf("\nSum of squares of first %dth natural no.s is %d: ",n,sum);

    return 0;
}
