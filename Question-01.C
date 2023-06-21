// Write a program to calculate sum of first N natural numbers.

#include<stdio.h>
int main()
{
    int x = 1 , n , sum = 0 ;
    printf("Enter a number : ");
    scanf("%d",&n);

    while (x <= n)
    {
        sum = sum +x ;
        x++;
    }
    printf("\nSum of first %dth natural no.s is %d: ",n,sum);

    return 0;
}
