#include<stdio.h>
#include<conio.h>
int LinearSearch(int *arr, int n,int element){
	int i;
    for ( i = 0; i < n; i++)
    {
        if(arr[i] == element){
            return i;
        }
    }
    return -1;
    
}
int BinarySearch(int *arr,int n,int element){
    int low = 0;
    int high = n-1;
    int mid;
    while(low<=high){
    	mid = (low + high)/2;
        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid] < element ){
           low = mid + 1; 
        }
        else
        {
            high = mid - 1;
        }
        
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    //This shows that how a linear search implemented.

    // int arr[] = {22,4,23,42,234,12};
    // int n = sizeof(arr)/sizeof(int);
    // int IndexOfElement;
    // int element = 234;
    // IndexOfElement = LinearSearch(arr,n,element);
    // printf("\nThe size of the given array is %d",n);
    // printf("\n%d found at the %d:",element,IndexOfElement);
    // if(IndexOfElement == -1){
    //     printf("\n%d is not found in the given array:",element);
    // }

    int arr[] = {23,54,67,87,89,100,245,656};
    int n = sizeof(arr)/sizeof(int);
    int indexofelement;
    int element = 54;
    printf("\nThe size of the given array is %d",n);
    indexofelement = BinarySearch(arr,n,element);
    printf("\n%d found at %d",element,indexofelement);
    if(indexofelement == -1){
        printf("\n%d is not found in the array:",element);
    }

    return 0;
}
