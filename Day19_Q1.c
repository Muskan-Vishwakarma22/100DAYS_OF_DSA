// Problem: Given an array of integers, find two elements whose sum is closest to zero.

// Input:
// - First line: integer n
// - Second line: n space-separated integers

// Output:
// - Print the pair of elements whose sum is closest to zero

// Example:
// Input:
// 5
// 1 60 -10 70 -80

// Output:
// -10 1

// Explanation: Among all possible pairs, the sum of -10 and 1 is -9, which is the closest to zero compared to other pairs.

#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int closestSum = arr[0] + arr[1];
    int a = arr[0], b = arr[1];    // store the best pair
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(abs(arr[i] + arr[j]) < abs(closestSum)){
                closestSum = arr[i] + arr[j];
                a = arr[i];
                b = arr[j];
            }
        }
    }
    printf("The pair whose sum is closest to zero: %d %d\n", a, b);
    return 0;
}