#include<stdio.h>
struct DLLNode {
    int data;
    struct DLLNode *next; 
    struct DLLNode *prev; 
};

struct DLLNode *head=NULL;
void Insert(int data,int position) {
    struct DLLNode *p,*q,*temp;
    int k = 1;
    temp = (struct DLLNode*)malloc(sizeof(struct DLLNode));
    temp->data = data;
    temp->next=NULL;
    temp->prev = NULL;
    if((head == NULL) && (position == 1)) {
        temp->next = head;
    }
    else {
        p = head;
        while((p!=NULL) && (k < position)) {
            k++;
            q = p;
            p = p->next;
        }
        q->next = temp->prev;
        temp->next = p;
    }
}
