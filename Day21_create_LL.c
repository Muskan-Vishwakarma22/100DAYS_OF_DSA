// Problem: Create and Traverse Singly Linked List

// Input:
// - First line: integer n
// - Second line: n space-separated integers

// Output:
// - Print the result

// Example:
// Input:
// 5
// 10 20 30 40 50

// Output:
// 10 20 30 40 50
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
void main(){
    int n;
    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    struct Node* head = NULL; //Initialising null head
    printf("Enter the elements(seperated by space):\n");
    for(int i=0; i<n; i++){
        struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
        scanf("%d", &temp->data);
        temp->next = NULL;
        if(head == NULL){
            head = temp;
        }
        else{
            struct Node* ptr = head;
            while(ptr->next != NULL){
                ptr = ptr->next;
            }
            ptr->next = temp;
        }
    }
    //Printing the linked list
    printf("Traversing the linked list:\n");
    while(head != NULL){
        printf("%d ", head->data);
        head = head->next;
    }
} 