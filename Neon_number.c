#include <stdio.h>

int main()
{
    int n, square, rem = 0, sum = 0, n1;

    printf("Enter the number: \n");
    scanf("%d", &n);

    square = n * n;
    n1 = square;

    while (n1 != 0)
    {
        rem = n1 % 10;
        sum = sum + rem;
        n1 = n1 / 10;
    }

    if (n == sum)
    {
        printf("Entered number is a Neon number \n");
    }
    else
    {
        printf("Entered number is not a Neon number \n");
    }
    return 0;
}