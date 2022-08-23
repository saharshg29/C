// FACTORIAL OF n NUMBER PRESENT IN AN ARRY

#include <stdio.h>
void main()
{
    int t = 0;
    scanf("%i", &t);
    while (t--)
    {
        int x, fact = 1, n;

       
        scanf("%d", &n);

        for (x = 1; x <= n; x++)

            fact = fact * x;

        printf("%i \n", fact);
    }
}
