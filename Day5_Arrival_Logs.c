// Problem: A system receives two separate logs of user arrival times from two different servers. Each log is already sorted in ascending order. Your task is to create a single chronological log that preserves the correct order of arrivals.

// Input:
// - First line: integer p (number of entries in server log 1)
// - Second line: p sorted integers representing arrival times from server 1
// - Third line: integer q (number of entries in server log 2)
// - Fourth line: q sorted integers representing arrival times from server 2)

// Output:
// - Print a single line containing all arrival times in chronological order, separated by spaces

// Example:
// Input:
// 5
// 10 20 30 50 70
// 4
// 15 25 40 60

// Output:
// 10 15 20 25 30 40 50 60 70

// Explanation: Compare the next unprocessed arrival time from both logs and append the earlier one to the final log until all entries are processed
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100000

int main(){
    int p, q;

    // read size of first log and validate
    scanf("%d", &p);
    if(p <= 0 || p > MAX_SIZE) return 1;

    // allocate and read first log
    int *arr1 = malloc(p * sizeof(int));
    for(int i = 0; i < p; i++){
        scanf("%d", &arr1[i]);
    }

    // read size of second log and validate
    scanf("%d", &q);
    if(q <= 0 || q > MAX_SIZE){ free(arr1); return 1; }

    // allocate and read second log
    int *arr2 = malloc(q * sizeof(int));
    for(int i = 0; i < q; i++){
        scanf("%d", &arr2[i]);
    }

    // i, j are pointers into arr1 and arr2; k is index into result
    int i = 0, j = 0, k = 0;
    int *res = malloc((p + q) * sizeof(int));

    // compare elements from both logs and pick the smaller one
    while(i < p && j < q){
        if(arr1[i] <= arr2[j]){
            res[k++] = arr1[i++];
        } else {
            res[k++] = arr2[j++];
        }
    }

    // append any remaining elements from either log
    for(; i < p; i++) res[k++] = arr1[i];
    for(; j < q; j++) res[k++] = arr2[j];

    // print merged result
    for(int i = 0; i < p + q; i++){
        if(i > 0) printf(" ");
        printf("%d", res[i]);
    }
    printf("\n");

    free(arr1); free(arr2); free(res);
    return 0;
}