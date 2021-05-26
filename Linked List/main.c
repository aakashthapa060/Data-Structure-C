#include <stdio.h>
#include <stdlib.h>


struct Node{
    int data;
    struct Node* next;
};
int printList(struct Node *n){
    while (n != NULL){
        printf("%d \n", n->data);
        n = n->next;
    }
    return 0;
}

int main(){
    struct Node *newHead;
    struct Node *head;
    struct Node *second;
    struct Node *third;

    newHead = (struct Node*)malloc(sizeof(struct Node));
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    newHead->data = 0;
    newHead->next = head;

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    printList(newHead);

    return 0;

}