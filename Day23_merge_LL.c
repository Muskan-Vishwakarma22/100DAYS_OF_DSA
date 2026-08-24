// Problem: Merge Two Sorted Linked Lists - Implement using linked list with dynamic memory allocation.

// Input:
// - First line: integer n
// - Second line: n space-separated integers (first list)
// - Third line: integer m
// - Fourth line: m space-separated integers (second list)

// Output:
// - Print the merged linked list elements, space-separated

// Example:
// Input:
// 5
// 10 20 30 40 50
// 4
// 15 25 35 45

// Output:
// 10 15 20 25 30 35 40 45 50

// Explanation:
// Compare nodes of both lists, append smaller to result, continue until all nodes are merged.

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

struct Node* inputList(int size) {
    struct Node* head = NULL;
    struct Node* tail = NULL;
    int data;
    for (int i = 0; i < size; i++) {
        scanf("%d", &data);
        struct Node* newNode = createNode(data);
        if (head == NULL) { head = tail = newNode; }
        else { tail->next = newNode; tail = newNode; }
    }
    
    return head;
}

struct Node* mergeSorted(struct Node* h1, struct Node* h2) {
    if (!h1) return h2;
    if (!h2) return h1;
    if (h1->data <= h2->data) { h1->next = mergeSorted(h1->next, h2); return h1; }
    else { h2->next = mergeSorted(h1, h2->next); return h2; }
}

void printList(struct Node* head) {
    while (head) { printf("%d ", head->data); head = head->next; }
    printf("\n");
}

int main() {
    int n, m;
    printf("Enter the number of elements in linked list 1: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    struct Node* head1 = inputList(n);

    printf("Enter the number of elements in linked list 2: ");
    scanf("%d", &m);
    printf("Enter %d elements: ", m);
    struct Node* head2 = inputList(m);

    struct Node* merged = mergeSorted(head1, head2);
    printf("Merged List: ");
    printList(merged);
    return 0;
}
