#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct StackArray{
    int top;
    int capacity;
    int *arr;
}; 
struct StackArray* createstack(int cap){
    struct StackArray* stack;
    stack=(struct StackArray*)malloc(sizeof(struct StackArray));
    stack->top=-1;
    stack->capacity=cap;
    stack->arr=(int*)malloc(cap*sizeof(int));
    return stack;
}
int isfull(struct StackArray* stack){
    if(stack->top==stack->capacity-1){
        return 1;
    }
    else{
        return 0;
    }
    
}
int isempty(struct StackArray* stack){
    if(stack->top==-1){
        return 1;
    }
    else
    {
        return 0;
    }
    
}
void push(struct StackArray *stack,int item){
    if(isfull(stack)==0){
        stack->top++;
        stack->arr[stack->top]=item;
    }
    else{
        printf("\nStack is full:");
    }
}
int pop(struct StackArray *stack){
    int item;
    if(isempty==0){
       item = stack->arr[stack->top];
       stack->top--;
    }
    else{
        printf("\nStack is empty:");
    }
}
int main(){
    struct StackArray *stack;
    char ch;
    int cap;
    int item;
    printf("\nEnter the capacity of the stack:");
    scanf("%d",&cap);
    stack=createstack(cap);
    while(1){
        printf("\nPress 1. for push:");
        printf("\nPress 2. for pop");
        printf("\nPress 3. for exit:");
        printf("\n\nEnter your choice:");
        ch=getche();
        system("cls");
        switch(ch){
            case '1':
            printf("\nEnter the item to push in stack:");
            scanf("%d",&item);
            push(stack,item);
            break;
            case '2':
            item=pop(stack);
            printf("\nItem popped from stack is : %d",item);
            break;
            case '3':
            exit(0);
            default:
            printf("\nPlease choice valid option:");
        }
    }   
    printf("\nPress any key to continue...");
    getch();
    return 0;
}