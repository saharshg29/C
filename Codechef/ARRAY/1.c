#include <stdio.h>

void main() {
	// your code goes here
	int t, n=0, arr[n],count = 0, d;
	scanf("%i", &t);
    while (t--) {
        scanf("%i", &n);
        for (int i = 0; i<n; i++) {
            scanf("%i", &arr[i]);
        }
        for (int i = 0; i<n; i++) {
            if (arr[i] > 999) {
                count++;
            }
        }
        printf("%i \n", count);
        count = 0;
    }
	
}

