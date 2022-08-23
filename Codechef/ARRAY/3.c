#include <stdio.h>

int main(void) {
	// your code goes here
	int n;
	scanf("%i", &n);
	int s1[n], s2[n], p1[n], p2[n], total[n];
	for (int i = 0; i<n; i++) {
	    scanf("%i %i", &s1[i], &s2[i]);
	}
	for (int i =0; i<n; i++) {
	    if (s1[i] > s2[i]) {
	        p1[i] = s1[i] - s2[i];
	        total[i] = p1[i];
	    } else {
	        p2[i] = s2[i] - s1[i];
	        total[i] = p2[i];
	    }
	}
	int temp;
	for (int i = 0; i<n-2; i++) {
	    for (int j = i+1; j<n; j++) {
	        if (total[i] > total[j]) {
	            continue;
	        } else {
	            temp = total[j];
	            total[j] = total[i];
	            total[i] = temp;
	        }
	    }
	}
	
	int max = total[0];
	
	for (int i=0; i<n; i++) {
	    if (p1[i] == max) {
	        printf("1 %i", max);
	        break;
	    } else {
	        printf("2 %i", max);
	        break;
	    }
	}
	
	return 0;
}

