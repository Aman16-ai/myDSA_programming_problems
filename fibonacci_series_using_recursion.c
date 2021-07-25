#include<stdio.h>
#include<conio.h>
int fib(int n);
int fib(int n){
    if(n==1 || n==2)
    return 1;
    return fib(n-1)+fib(n-2);
}
int main(){
    int n;
    printf("\nEnter the number of term:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    printf("%d ",fib(i));
    printf("\nPress any key to continue...");
    getch();
    return 0;
}