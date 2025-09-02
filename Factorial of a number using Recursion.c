#include <stdio.h>

int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}

int main()
{
    int n, factorial;
    printf("Enter the number:\n");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        factorial = fact(n);
        printf("The factorial of the entered number is: %d\n", factorial);
    }

    return 0;
}
