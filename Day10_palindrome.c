// Problem: Read a string and check if it is a palindrome using two-pointer comparison.
// Input:
// - Single line: string s
// Output:
// - Print YES if palindrome, otherwise NO
// Example:
// Input:
// level
// Output:
// YES
// Explanation: String reads same forwards and backwards
#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    scanf("%s",s);
    int start=0;
    int end=strlen(s)-1;
    while(start<end){
        if(s[start]!=s[end]){
            printf("NO");
            return 0;
        }
        start++;
        end--;
    }
    printf("YES");
    return 0;
}