// Enter a number by user and check whether it is Palindrome or not.

#include <stdio.h>

void check_Palindrome(int n)
{
    if (n < 0) {
        printf("Negative numbers are not considered Palindromes.\n");
        return;
    }

    int rem = 0, rev = 0, n1 = n;

    while (n1 != 0)
    {
        rem = n1 % 10;
        rev = (rev * 10) + rem;
        n1 = n1 / 10;
    }

    if (rev == n)
        printf("Entered number is Palindrome.\n");
    else
        printf("Entered number is not a Palindrome.\n");
}


int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d", &x);

    check_Palindrome(x);

    return 0;
}