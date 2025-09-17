// WAP to print numbers from N to 1 by skipping two numbers. Take N as a input by the user.

#include <stdio.h>

void Print_Numbers(int n)
{
    int i;

    for (i = n; i >= 1; i = i-2)
    {
        printf("%d \n", i);
    }
}

int main()
{
    int x;
    printf("Enter the value of N : ");
    scanf("%d", &x);
    Print_Numbers(x);

    return 0;
}