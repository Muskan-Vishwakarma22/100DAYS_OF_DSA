// Problem: Given an array of n integers, reverse the array in-place using two-pointer approach.

// Input:
// - First line: integer n
// - Second line: n space-separated integers

// Output:
// - Print the reversed array, space-separated

// Example:
// Input:
// 5
// 1 2 3 4 5

// Output:
// 5 4 3 2 1

// Explanation: Swap pairs from both ends: (1,5), (2,4), middle 3 stays
#include <stdio.h>
void reverseArray(int *arr, int size){
    int *left = arr;
    int *right = arr + (size-1);
    while(left<right){
        int temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }
}
int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    reverseArray(arr, n);
    
    
    // Print reversed array
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}