#include<iostream>
using namespace std;
class List {
    private:
    struct node {
        int data;
        node *link;
    }*start;
    public:
    List() {
        start = NULL;
    }
    void insertData(int value) {
        node *t = new node;
        node *temp = new node;
        temp->data = value;
        temp->link = NULL;
        if(start == NULL) {
            start = temp;
        } 
        else {
            t = start;
            while(t->link != NULL) {
               t = t->link; 
            }
            t->link = temp;

        }
    }
    void display() {
        node *t = new node;
        if(start == NULL) {
            cout<<endl<<"There is no elements to display.";
        }
        else {
            t = start;
            while(t != NULL) {
                cout<<endl<<"Element: "<<t->data;
                t = t->link;
            }
        }

    }

};

int main() {
    
    List list;
    for(int i = 0;i<10;i++) {
        list.insertData(i);
    }
    list.display();
    return 0;
}


