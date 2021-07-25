#include<stdio.h>
#include<conio.h>
int GCD(int a,int b){
    if(a==b)
    return a;
    if(a%b==0)
    return b;
    if(b%a==0)
    return a;
    if(a>b)
    return GCD(a%b,b);
    else
    return GCD(a,b%a);
}
int main(){
    int a,b;
    printf("\nEnter the two numbers :");
    scanf("%d%d",&a,&b);
    printf("\nGREATEST COMMON DIVISOR GCD(%d,%d) = %d",a,b,GCD(a,b));
    printf("\nPress any key to continue...");
    getch();
    return 0;
}