#include <stdio.h>

void main()
{
    int n;
    scanf("%i", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &a[i]);
    }
    int digit = 0, tenth = 1, number = 0;

    for (int i = 0; i < 5; i++)
    {
        digit = a[i] % 10;
        for (int j = n - 1 - i; j > 0; j--)
        {
            tenth = tenth * 10;
        }
        number = number + (tenth * digit);
        tenth = 1;
    }
    if (number % 10 == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}