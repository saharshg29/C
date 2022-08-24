#include <stdio.h>

void main()
{
    int n;
    scanf("%i", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[0] > arr[1])
        {
            arr[0] += arr[1];
            n--;

            for (int j = 1; j < n; j++)
            {
                arr[j] = arr[j + 1];
            }
        }
        else
        {
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%i ", arr[i]);
    }
}