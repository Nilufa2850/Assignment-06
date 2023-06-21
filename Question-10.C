//Write a program to reverse a given number.

#include<stdio.h>
int main()
{
     int n, reverse = 0 , reminder ;
    printf("Enter a number : ");
    scanf("%d", &n);

    while(n != 0)
    {
        reminder = n%10;
        n=n/10;
        reverse = reverse*10 + reminder ;

    }

    printf("reverse number is %d ",reverse);

    return 0; 
}
