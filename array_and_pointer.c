#include<stdio.h>
int main(){
    int a[]={6,2,1,5,3};
    int *q;
    q=a;
    printf("%d",a); //this will print the base address of the array a;
    printf("\n%d",&a[0]);   //this will print the base address also of a;
    q++;
    printf("\n%d",*q); // print the value of a[1]=2;
    printf("\n%d",*(a+1)); //htis will print the value 2;
    printf("\n%d",*a+1);  //this will print 7 because *a = 6 and + 1 = 7;
    return 0;
}