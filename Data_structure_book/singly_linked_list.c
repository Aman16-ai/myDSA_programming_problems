#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct ListNode {
    int data;
    struct ListNode *next;
};
struct ListNode *head = NULL;
void insertNode(int data,int position) {
    int k = 1;
    struct ListNode *q;
    struct ListNode *p;
    struct ListNode *temp;
    temp = (struct ListNode*)malloc(sizeof(struct ListNode));
    temp->data = data;
    temp->next = NULL;
    if(head == NULL) {
        head = temp;
    }
    else {
        q = head;
        while((q!=NULL) && (k<position)) {
            k++;
            p = q;
            q = q->next;
        }
        p->next = temp;
        temp->next = q;

    }
}
void DeleteNode(int position) {
    struct ListNode *t,*r;
    int k = 1;
    if(head == NULL) {
        printf("List is empty nothing to delete.");
    }
    else {
        t = head;
        while((t!=NULL) && (k <position)) {
            k++;
            r = t;
            t = t->next;
        }
        r->next = t->next;
        free(t);
    }
}
void display() {
    struct ListNode *p;
    if(head == NULL) {
        printf("List is empty");
    }
    else {
        p = head;
        while(p != NULL) {
            printf("%d ",p->data);
            p = p->next;
        }
    }
}
void DeleteLinkedList() {
    struct ListNode *temp,*i;
    i = head;
    while(i) {
        temp = i->next;
        free(i);
        i = temp;
    }
    head = NULL;
}
int Length() {
    struct ListNode *temp;
    int count = 0;
    temp = head;
    while(temp) {
        count++;
        temp = temp->next;
    }
    return count;
}
int main() {
    insertNode(1,1);
    insertNode(3,2);
    insertNode(14,3);
    insertNode(44,4);
    insertNode(55,5);
    display();

    //Checking the length of the list
    printf("\nThe length of the list is %d ",Length());

    //deleting the node at position 2;
    DeleteNode(2); 
    printf("\nAfter delete the node at position 2\n");
    display();

    //Checking the length of the list
    printf("\nThe length of the list is %d ",Length());

    //Deleting the all nodes of the list;
    DeleteLinkedList();
    printf("\nAfter deleting all nodes of the list\n");
    display();
    return 0;
}