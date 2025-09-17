//  WAP to check whether the entered number by the user is a Armstrong or Narcissistic number or not, without using predefined function(pow())


#include <stdio.h>

int power(int x, int n)
{
    int i, res = 1;
    for(i = 1; i <=n; i++)
    {
        res = res * x;
    }
    return res;
}

void check_Armstrong(int n)
{
    int n1, n2, count = 0, rem = 0 ,num = 0;
    n1 = n2 = n;

    while(n1 != 0)
    {
        n1 = n1 / 10;
        count++;
    }
    
    while(n2 != 0)
    {
        rem = n2 % 10;
        num = num  + power(rem, count);
        n2 = n2 /10;
    }

    if(n == num)
    {
        printf("Entered number is a Armstrong number \n");
    }
    else
    {
        printf("Entered number is not a Armstrong number : \n");
    }
}

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    check_Armstrong(n);

    return 0;
}