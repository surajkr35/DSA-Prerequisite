#include <stdio.h>

int main()
{
    int n, missing, sum = 0, range, sum_N = 0;

    printf("Enter the highest number in the range (e.g., for 1-10, enter 10):\n");
    scanf("%d", &range);

    printf("Now, enter the %d numbers from the range, one at a time:\n", range - 1);

    for (int i = 0; i < range - 1; i++) 
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &n);
        sum = sum + n;
    }

    sum_N = (range * (range + 1)) / 2;
    missing = sum_N - sum;

    printf("The expected sum of numbers from 1 to %d is %d.\n", range, sum_N);
    printf("The sum of the numbers you entered is %d.\n", sum);
    printf("The missing number is: %d\n", missing);
    
    return 0;
}