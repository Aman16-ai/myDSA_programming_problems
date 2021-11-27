#include<iostream>
#include<unordered_map>
using namespace std;
class LinkedList {
    private:
        struct node
        {
           int data;
           node *next;
        }*head;
        
    public:
    LinkedList() {
        head = NULL;
    }
    void insertAtEnd(int data);
    void nthNodeFromLastUsingTwoIterations(int n);  //time complexity --> O(m) and space complexity --> O(1)
    void nthNodeFromLastUsingHashing(int n); //time complexity --> O(m) and space complexity --> O(m)
    void nthNodeFromLastUsingTwoPointersOneIteration(int n); //time complexity --> O(m) and space complexity --> O(1)
    void display();
};
void LinkedList::nthNodeFromLastUsingTwoPointersOneIteration(int n) {
    node *p = head;
    node *q = head;
    for(int i = 0;i<n;i++) {
        p = p->next;
    }
    //1->2->4->7->null;
    while(p!=NULL) {
        p = p->next;
        q = q->next;
    }
    cout<<endl<<"nth node from last is "<<q->data;
}
void LinkedList::nthNodeFromLastUsingHashing(int n) {
    node *t=head;
    unordered_map<int,node *>mp;
    int m = 0;
    while(t!=NULL) {
        m++;
        mp[m] = t;
        t = t->next;
    }
    int l = m - n + 1;
    cout<<endl<<"nth node from last is "<<mp[l]->data;
}
void LinkedList::nthNodeFromLastUsingTwoIterations(int n) {
   
    node *t = head;
    int m = 0;
    int k = 0;
    while(t!=NULL) {
        m++;
        t = t->next;
    }
    int l = m-n+1;  //calculating the position of nth node from start;
    t = head;
    while(t!=NULL) {
        k++;
        if(k == l) {
            cout<<endl<<"nth node from last is "<<t->data;
            break;
        }
        t = t->next;

    }
}
void LinkedList::insertAtEnd(int data) {
    node *t,*temp;
    temp = new node();
    temp->data = data;
    temp->next = NULL;
    if(head == NULL) {
        head = temp;
    }
    else {
        t = head;
        while(t->next!=NULL) {
            t = t->next;
        }
        t->next = temp;
    }
}
void LinkedList::display() {
    node *t;
    if(head == NULL) {
        cout<<endl<<"Linked list is empty";
    }
    else {
        t = head;
        while(t !=NULL) {
            cout<<t->data<<" ";
            t = t->next;
        }
    }
}
int main() {
    LinkedList list;
    list.insertAtEnd(1);
    list.insertAtEnd(2);
    list.insertAtEnd(4);
    list.insertAtEnd(7);
    list.insertAtEnd(45);
    list.insertAtEnd(78);
    list.display();
    list.nthNodeFromLastUsingHashing(1);
    return 0;
}