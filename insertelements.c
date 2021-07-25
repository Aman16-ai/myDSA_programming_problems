#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	int arr[100],n,pos,ele;
	printf("\nEnter the total number of elements of the array:");
	scanf("%d",&n);
	printf("\nEnter the elements in the array:");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("\nEnter the position where you want to insert the element:");
	scanf("%d",&pos);
	printf("\nEnter the element to insert:");
	scanf("%d",&ele);
	if(pos>n){
		printf("\nInvalid position:");
		exit(0);
	}
	for(int i=n-1;i>pos-1;i--){
		arr[i+1]=arr[i];
	}
	arr[pos-1]=ele;
	printf("\nElement %d is successful inserted:",ele);
	for(int i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}

		return 0;
}