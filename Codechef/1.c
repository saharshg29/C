#include <stdio.h>

int main(void)
{
    // your code goes here
    int t, n = 0, arr[n], zeros=0;
    char v[n];
    scanf("%i", &t);
    while (t--)
    {
        scanf("%i", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%i", &arr[i]);
        }
        scanf("%s", &v);
        for (int i = 0; i < n; i++)
        {
            if (v[i] == '0')
            {
                zeros++;
                // fail[i] = arr[i];
            }
        }
        int fail[zeros];
        for (int i = 0; i < zeros; i++)
        {
            if (v[i] == '0')
            {
                // zeros++;
                fail[i] = arr[i];
            }
        }
        int temp;
        for (int i = 0; i<n; i++) {
            for (int j = i+1; j<n; j++) {
                if (arr[i]>arr[j]) {
                    continue;
                }else {
                    temp = fail[j];
                    fail[j] = fail[i];
                    fail[i] = temp;
                }
            }
        }
    for (int i = 0; i<zeros; i++) {
        
    }
    }
    return 0;
}
