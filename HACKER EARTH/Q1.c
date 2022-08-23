// You are provided an array  of size  that contains non-negative integers. Your task is to determine whether the number that is formed by selecting the last digit of all the N numbers is divisible by .

#include <stdio.h>

void main () {
    int n = 0, number, tenth, digit;
    scanf("%i", &n);
    int arr[n];
    for ( int i = 0; i<n; i++) {
        scanf("%i", &arr[n]);
    }

    // for (int i = 0; i<n; i++) {
    //     digit = arr[i] % 10;
    //     for (int j = 0; j < i; j++)
    // {
    //     tenth *= 10;
    // }
        
    //     number += digit * tenth;
    // }

      digit = arr[2] % 10;

    printf("%i", digit);

    // if (number % 10 == 0) {
    //     printf("Yes \n");
    // } else {
    //     printf("No \n");
    // }

}