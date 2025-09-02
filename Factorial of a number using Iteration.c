#include <stdio.h>

int main()
{
    int n, i;
    unsigned long long factorial = 1;  // Use unsigned long long for larger results

    printf("Enter the number:\n");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            factorial *= i;
        }
        printf("The factorial of %d is: %llu\n", n, factorial);
    }

    return 0;
}

