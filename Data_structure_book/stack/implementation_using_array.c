#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int top;
    int capacity;
    int *arr;

};
struct stack* createStack(int capacity) {
    struct stack * s = (struct stack*)malloc(sizeof(struct stack));
    if(!s) {
        return NULL;
    }
    s->top = -1;
    s->capacity = capacity;
    s->arr = (int*)malloc(s->capacity * sizeof(int)); 
    if(!s->arr) {
        return NULL;
    }
    return s;
}
int isEmptyStack(struct stack *s) {
    if(s->top == -1) {
        return 1;
    }
    else {
        return 0;
    }
}
int isFullStack(struct stack *s) {
    if(s->top == s->capacity - 1) {
        return 1;
    }
    else {
        return 0;
    }
}

void push(struct stack *s,int data) {
    if(isFullStack(s)) {
        printf("Stack Overflow");
    }
    else {
        
        s->top++;
        s->arr[s->top] = data;
    }
}
int pop(struct stack *s) {
    int data;
    if(isEmptyStack(s)) {
        printf("Stack is empty");
        
    }
    else {
        data = s->arr[s->top];
        s->top--;
    }
    return data;
}

void deleteStack(struct stack *s) {
    if(s) {
        if(s->arr) {
            free(s->arr);
        }
        free(s);
    }
}
int main() {
    struct stack *s = createStack(10);
    
    for (int i = 0; i < 10; i++)
    {
        push(s,i);
    }
    
    printf("\n");
    for(int i =0;i<10;i++) {
        printf("%d ",pop(s));
    }
    printf("Deleting stack");
    deleteStack(s);
    printf("After deleting stack");
    pop(s);
   
    return 0;
}