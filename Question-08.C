/* Write a program to check whether a given number is a Prime number or
not. */

#include<stdio.h>
int main()
{
     int num, i = 2, flag = 0;
    printf("Enter a number : ");
    scanf("%d", &num);

    while (i <= num/2)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
        i++;
    }
    
    if (flag == 1)
        printf("Given number is not a Prime Number.");
    else 
        printf("Given number is a Prime Number.");

    return 0; 
}
