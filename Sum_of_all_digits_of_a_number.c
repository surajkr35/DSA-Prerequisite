// WAP to print sum of all its digit of a number entered by the user.

#include <stdio.h>

#include <stdio.h>

void sum_digits(int n)
{
    int rem = 0, sum = 0;
    int n1 = n < 0 ? -n : n;  // Make number positive if negative

    while (n1 != 0)
    {
        rem = n1 % 10;
        sum = sum + rem;
        n1 = n1 / 10;
    }

    printf("The sum of digits of %d is: %d\n", n, sum);
}

int main()
{
    int x;
    printf("Enter the number: ");
    scanf("%d", &x);

    sum_digits(x);

    return 0;
}
