#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *start=NULL;
void appenddata(){
    struct node *temp;
    struct node *t;
    temp = (struct node*)malloc(sizeof(struct node*));
    printf("\nEnter the data:");
    scanf("%d",&temp->data);
    temp->link = NULL;
    if(start == NULL){
        start = temp;
    }
    else{
        t = start;
        while(t->link!=NULL){
            t = t->link;
        }
        t->link = temp;
    }
}
void insertNodeAtHead() {
    struct node *temp;
    struct node *t;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data:\n");
    scanf("%d",&temp->data);
    temp->link = NULL;
    if(start == NULL) {
        start = temp;
    }else {
        t = start->link;
        start = temp;
        start->link = t;
        
    }
}
void deletefirstnode(){
    struct node *r;
    r = start;
    if(start == NULL){
        printf("\nAll nodes deleted succssefully");
    }
    else{
        start = start->link;
        free(r);
    }
}
void viewlinkedlist(){
    struct node *t;
    if(start == NULL){
        printf("\nThere is no nodes to view");
    }
    else{
        t = start ;
        while(t!=NULL){
            printf("\n%d",t->data);
            t = t->link;
        }
    }
}
int main(){
    char ch;
    while(1){
        printf("\nPress 1. for append data in the list:");
        printf("\nPress 2. for for delete the first node of the list:");
        printf("\nPress 3. for view the list data:");
        printf("\nPress 4. for insert the node at the head of the list:");
        printf("\nPress 5. for exit:");
        printf("\n\nEnter your choice:");
        ch = getche();
        switch(ch){
            case '1':
            appenddata();
            break;
            case '2':
            deletefirstnode();
            break;
            case '3':
            viewlinkedlist();
            break;
            case '4':
            insertNodeAtHead();
            break;
            case '5':
            exit(0);
            default:
            printf("\nInvalid choice:");
        }
    }
    printf("\nPress any key to continue...");
    getch();
    return 0;
}