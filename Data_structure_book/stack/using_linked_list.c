#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* next;
};
struct node* top = NULL;

void push(int data) {
    struct node *newNode,*temp;
    newNode = (struct node*)malloc(sizeof(struct node*));
    newNode->data = data;
    newNode->next = NULL;
    if(top == NULL) {
        top = newNode;
    }
    else {
        newNode->next = top;
        top = newNode;

    }
}
int pop() {
    struct node*t;
    int data;
    if(top == NULL) {
        return -1;
    }
    t = top;
    top = top->next;
    data = t->data;
    free(t);
    return data;
}
void display() {
    struct node *temp;
    if(top == NULL) {
        printf("\nLinked list is empty");
    }
    else {
        temp = top;
        while(temp!=NULL) {
            printf("\n %d ",temp->data);
            temp = temp->next;
        }

    }
}
int main() {
    for(int i =1;i<=10;i++) {
        push(i);
    }
    for(int i =1;i<=11;i++) {
        int data = pop();
       if(data == -1) {
           printf("\nStack is empty:");
       }
       else {
           printf("\nElement is %d ",data);
       }
    }
    return 0;
}