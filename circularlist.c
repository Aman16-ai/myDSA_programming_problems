#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;;
	struct node* link;
};
struct node* head = NULL;
void insertData(int data) {
	struct node *temp;
	struct node *r;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = data;
	temp->link = NULL;
	if(head == NULL) {
		head = temp;
	}
	else {
		r = head;
		while(r->link != NULL) {
			r = r->link;
		}
		r->link = temp;
	}
}
void display() {
	struct node* r;
	if(head == NULL) {
		printf("List is empty");
	}
	else {
		r = head;
		while(r != NULL) {
			printf("%d ",r->data);
			r = r->link;
		}
	}
}
int main() {
	int data = 5;
	for(int i =0;i<10;i++) {
		insertData(i);
	}
	display();
	return 0;
}