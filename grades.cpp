#include<iostream>
using namespace std;

//grade < 40 => failing grade
// nextMultipleOfFive - grade < 3 => grade = nextMultipleOfFive
// grade < 38 => no rounding
int nextMultipleOfFive(int num) {
    int nextMultiple = 0;
    for(int i =num + 1;i<1000;i++) {
        if(i % 5 == 0) {
            nextMultiple = i;
            break;
        }
    }
    return nextMultiple;
}
void show_answer(int *arr,int n) {
    for(int i = 0;i<n;i++) {
        cout<<arr[i]<<endl;
    }
}
int main() {
    int n;
    int nextMultiple;
    int *grades,*tempGrades;
    cin>>n;
    grades = new int[n];
    tempGrades = new int[n];
    for(int i=0;i<n;i++) {
        cin>>grades[i];
    }
    
    for(int i = 0;i<n;i++) {
        nextMultiple = nextMultipleOfFive(grades[i]);
        cout<<endl<<"The Next Mutlitple of five is "<<nextMultiple<<endl;
        if(grades[i] < 38) {
            tempGrades[i] = grades[i];
        }
        else if(nextMultiple - grades[i] < 3) {
            tempGrades[i] = nextMultiple;
        }
        
    }
    show_answer(tempGrades,n);
    return 0;
}
