#include<iostream>
using namespace std;
struct CLLNode {
    int data;
    struct CLLNode *next;
};
struct CLLNode *head = NULL;
void insertAtEnd(int data) {
    struct CLLNode *newNode,*current=head;
    newNode = (struct CLLNode*)malloc(sizeof(struct CLLNode));
    if(!newNode) {
        printf("Memory Error");
        return;
    }
    newNode->data = data;
    newNode->next = newNode;
    if(head == NULL) {
        head = newNode;
    }
    else {
        while(current->next!=head) {
            current = current->next;
        }
        newNode->next = head;
        current->next = newNode;
    }
    
}
void insertAtBegin(int data) {
    CLLNode *current = head;
    CLLNode *newNode;
    newNode = (CLLNode*)malloc(sizeof(struct CLLNode));
    if(!newNode) {
        printf("Memory Error");
        return;
    }
    newNode->data = data;
    newNode->next = newNode;
    if(head == NULL) {
        head = newNode;
    }
    else {
        while(current->next!=head) {
            current = current->next;
        }
        newNode->next = head;
        current->next = newNode;
        head = newNode;
    }
    
}
void DeleteLastNode() {
    struct CLLNode *temp,*current = head;
    if(head==NULL) {
        printf("List is empty");
        return;
    }
    else {
        while(current->next!=head) {
            temp = current;
            current = current->next;
        }
        temp->next = head;
        free(current);
    }
}
void DeleteFirstNode() {
    struct CLLNode *temp,*current = head;
    if(head == NULL) {
        printf("\nList is empty");
        return;
    }
    else {
        temp = head;
        while(current->next!=head) {
            current = current->next;
        }
        current->next = head->next;
        head = head->next;
        free(temp);
    }
}
void display() {
    struct CLLNode *current = head;
    if(head == NULL) {
        printf("List is empty\n");
    }
    do {
        printf("%d ",current->data);
        current = current->next;
    }while(current!=head);
}
int main() {
    printf("\nInserting node at the end of list :");
    insertAtEnd(3);
    insertAtEnd(4);
    insertAtEnd(5);
    insertAtEnd(6);
    display();
    printf("\nInserting node at the begin of list :");
    insertAtBegin(55);
    display();
    printf("\nDeleting last node from the list :");
    DeleteLastNode();
    display();
    printf("\nDeleting first node from the list :");
    DeleteFirstNode();
    display();
    return 0;
}