// WAP to check whether a number entered by the user is a Prime or not.

#include <stdio.h>

// Function to calculate and print sum of digits of a number
void sum_digits(int n)
{
    int rem = 0, sum = 0;
    int n1 = n < 0 ? -n : n;  // Convert negative number to positive

    while (n1 != 0)
    {
        rem = n1 % 10;  // Get last digit
        sum += rem;     // Add digit to sum
        n1 /= 10;       // Remove last digit
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
