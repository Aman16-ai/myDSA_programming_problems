#include<stdio.h>
#include<stdlib.h>
struct DLLNode {
    int data;
    struct DLLNode *next; 
    struct DLLNode *prev; 
};

struct DLLNode *head=NULL;
void insert(int position,int data) {
    struct DLLNode *newNode,*temp;
    int k = 1;
    newNode = (struct DLLNode*)malloc(sizeof(struct DLLNode));
    if(!newNode) {
        printf("Memory Error");
    }
    newNode->data = data;
    newNode->next = NULL;
    if(position == 1) {
        newNode->next = head;
        newNode->prev = NULL;
        if(head) {
            head->prev = newNode;
        }
        head = newNode;
        return;
    }
    temp = head;
    while((k<position-1) && (temp->next!=NULL)) {
        temp = temp->next;
        k++;
    }
    if(k!=position) {
        printf("Desired position does not exist\n");
    }
    newNode->next = temp->next;
    newNode->prev = temp;
    if(temp->next)
        temp->next->prev = newNode;
    temp->next = newNode;
}
void append(int data) {
    struct DLLNode *newNode,*temp;
    newNode = (struct DLLNode*)malloc(sizeof(struct DLLNode));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    if(head == NULL) {
        head = newNode;
    }
    else {
        temp = head;
        while(temp->next !=NULL) {
            temp = temp->next;
        }
        newNode->prev = temp;
        temp->next = newNode;
    }
}

//Not correct
void addInSortedList(int data) {
    struct DLLNode *newNode,*temp,*t;
    struct DLLNode *newHead = NULL;
    temp = head;
    while(temp!=NULL) {
        newNode = (struct DLLNode*)malloc(sizeof(struct DLLNode));
        newNode->next = NULL;
        newNode->prev = NULL;
        if(temp->data < data) {
            newNode->data = temp->data;
            temp->data = data;
        }
        else {
            newNode->data = data;
        }
        if(newHead == NULL) {
            newHead = newNode;
        }
        else {
            t = newHead;
            while(t->next != NULL) {
                t = t->next;
            }
            newNode->prev = t;
            t->next = newNode;
        }
    }
    head = newHead;
}
void display() {
    struct DLLNode *temp;
    if(head==NULL) {
        printf("Linked list is empty");
    }
    else {
        temp = head;
        while(temp!=NULL) {
            printf("%d ",temp->data);
            temp = temp->next;
        }
    }
}
void deletetion(int position) {
    int k = 1;
    struct DLLNode *temp,*temp2; 
    if(head == NULL) {
        printf("List is empty");
        return;
    }
    if(position == 1) {
        temp = head;
        head = head->next;
        head->prev = NULL;
        free(temp);
        return;
    }
    temp = head;
    while((k<position) && (temp->next!=NULL)) {
        temp = temp->next;
        k++;
    }
    if(k!=position-1) {
        printf("Desired position does not exist\n");
    }
    
    temp2 = temp;
    temp->prev->next = temp->next;
    if(temp->next) {
    temp->next->prev = temp->prev;
    }
    free(temp2);


}
int main() {
    // insert(1,5);
    // insert(2,45);
    // insert(3,78);
    // insert(4,55);
    // insert(5,87);
    append(5);
    append(45);
    append(100);
    addInSortedList(4);
    addInSortedList(6);
    display();

    return 0;
}
