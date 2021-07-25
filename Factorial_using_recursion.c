#include<stdio.h>
#include<conio.h>
int fact(int n);
int fact(int n){
    if(n==1)
    return 1;
    return n*fact(n-1);
}
int main(){
    int num;
    printf("\nEnter a number:");
    scanf("%d",&num);
    printf("\nFactorial of %d is %d",num,fact(num));
    printf("\nPress any key to continue...");
    getch();
    return 0;
}