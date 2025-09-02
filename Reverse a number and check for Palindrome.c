#include <stdio.h>

int main()
{
    int n, n1, rem = 0, rev = 0;

    printf("Enter the number:\n");
    scanf("%d", &n);
    
    n1 = n;

    while(n1 != 0)
    {
        rem = n1 % 10;
        rev = rev * 10 + rem;
        n1 = n1 / 10;
    }

    if(n == rev)
    {
        printf("The entered number is a Palindrome number\n");
    }
    else
    {
        printf("The entered number is not a Palindrome number\n");
    }

    return 0;
}
