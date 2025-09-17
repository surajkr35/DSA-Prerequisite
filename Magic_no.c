// WAP to check the entered number by the user is a Magic Number or not.

#include <stdio.h>

// Function to check if a number is a Magic Number
void check_Magic_No(int n)
{
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return;
    }

    int n1 = n, rem, sum;

    // Repeat the digit sum process until a single digit is obtained
    do
    {
        sum = 0;
        while(n1 != 0)
        {
            rem = n1 % 10;
            sum += rem;
            n1 /= 10;
        }
        n1 = sum;
    }
    while(sum > 9);

    // If the final single digit is 1, it's a Magic Number
    if(sum == 1)
        printf("Entered number is a Magic Number.\n");
    else
        printf("Entered number is not a Magic Number.\n");
}

int main()
{
    int x;
    printf("Enter the number: ");
    scanf("%d", &x);
    check_Magic_No(x);

    return 0;
}
