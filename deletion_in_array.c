//program to delete an element in an array:
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	int arr[100],n,i,pos,ele;
	printf("\nEnter the total number of elements:");
	scanf("%d",&n);
	printf("\nEnter the elements in the array:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("\nEnter the position ");
	scanf("%d",&pos);
	if(pos>n){
		printf("\nInvalid position:");
		exit(0);
	}
	ele=arr[pos-1];
	n--;
	for(i=pos-1;i<n;i++){
		arr[i]=arr[i+1];
	}
	printf("\nArray after deletion of %d :",ele);
	for(i=0;i<n;i++){
		printf("\n%d",arr[i]);
	}
	printf("\nPress any key to continue...");
	getch();
	return 0;
}