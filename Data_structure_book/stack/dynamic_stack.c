#include<stdio.h>
#include<stdlib.h>
struct DynArrayStack {
    int top;
    int capacity;
    int *array;
};
struct DynArrayStack* CreateStack() {
    struct DynArrayStack *S = (struct DynArrayStack*)malloc(sizeof(struct DynArrayStack));
    if(!S) {
        return NULL;
    }
    S->capacity = 1;
    S->top = -1;
    S->array = (int *)malloc(S->capacity * sizeof(int));
    if(!S->array) {
        return NULL;
    }
    return S;
}
int IsFullStack(struct DynArrayStack *s) {
    return (s->top == s->capacity - 1);
}
void DoubleStack(struct DynArrayStack *s) {
    s->capacity *= 2;
    s->array = realloc(s->array,s->capacity);
}
void push(struct DynArrayStack *s,int data) {
    if(IsFullStack(s)) 
        DoubleStack(s);
    s->array[++s->top] = data;
}
int IsEmptyStack(struct DynArrayStack *s) {
    return s->top == -1;
}
int pop(struct DynArrayStack *s) {
    if(IsEmptyStack(s)) {
        return INT_MIN;
    }
    return s->array[s->top--];
}
int main() {
    struct DynArrayStack *s = CreateStack();
    for(int i =0;i<10;i++) {
        push(s,i);
    }
    for(int i =0;i<10;i++) {
        printf("\n %d ",pop(s));
    }
    return 0;
}