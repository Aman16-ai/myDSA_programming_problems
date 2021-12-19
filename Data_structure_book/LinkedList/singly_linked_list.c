#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct ListNode *reverse(struct ListNode * head);
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
void DeleteLinkedList(struct ListNode *head) {
    struct ListNode *temp,*i;
    i = head;
    while(i) {
        temp = i->next;
        free(i);
        i = temp;
    }
    head = NULL;
}
int Length(struct ListNode *head) {
    struct ListNode *temp;
    int count = 0;
    temp = head;
    while(temp) {
        count++;
        temp = temp->next;
    }
    return count;
}

// struct ListNode* ReverseLinkedList(struct ListNode *head) {
//     //using iteratible approach
//     struct ListNode *temp,*tail = NULL;
//     while(head!=NULL) {
//         temp = head->next;
//         head->next = tail;
//         tail = head;
//         head = temp;
//     }
//     struct ListNode *newHead = tail;
//     return newHead;
// }
void reverse_list() {
    struct ListNode *temp,*tail = NULL;

    //iterative approach
    while(head!=NULL) {
        temp = head;
        head = head->next;
        temp->next = tail;
        tail = temp;
    }
    head = tail;
}
void reserverListRecursive() {
    struct ListNode *node;
    node = reverse(head);
    head = node;
}
struct ListNode* reverse(struct ListNode *head) {
    if(head == NULL || head->next == NULL) {
        return head;
    }
    struct ListNode *temp = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return temp;
}
int main() {
    insertNode(1,1);
    insertNode(3,2);
    insertNode(4,3);
    insertNode(5,4);
    printf("Linked list before reverse");
    display();
    printf("Linked list after reversed\n");
    reserverListRecursive();
    display();
    return 0;
}