#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main() {
	char strOriginal[10];
	char strReverse[10]; 
	int i,j;
	cout<<endl<<"Enter the string";
	cin>>strOriginal;
	for(i = 0,j = strlen(strOriginal); i<=strlen(strOriginal);i++,j--) {
		strReverse[i] = strReverse[i] + strOriginal[j];
		cout<<strReverse[i]<<" ";
	}
	cout<<endl<<"Original string is :"<<strOriginal;
	cout<<endl<<"Reversed string is :"<<strReverse;
	cout<<endl<<"Press any key to continue...";
	getch();
	return 0;
}