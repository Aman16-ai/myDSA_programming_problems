#include<iostream>
#include<unordered_map>
using namespace std;
 
/* Link list node */
struct Node {
    int data;
    struct Node* next;
};
 
void push(struct Node** head_ref, int new_data)
{
    /* allocate node */
    struct Node* new_node = new Node;
 
    /* put in the data  */
    new_node->data = new_data;
 
    /* link the old list off the new node */
    new_node->next = (*head_ref);
 
    /* move the head to point to the new node */
    (*head_ref) = new_node;
}
 
// Returns true if there is a loop in linked list
// else returns false.
bool detectLoopUsingHashing(struct Node* h)
{
    int k = 0;
    unordered_map<Node *,int> mp;
    while (h != NULL) {
   
        if (mp.find(h) != mp.end())
            return true;
 
        mp[h] = ++k;
 
        h = h->next;
    }
 
    return false;
}
bool detectLoopUsingFloydFindingAlgorithm(struct Node* h) {
    Node *slowptr = h;
    Node *fastptr = h;
    while(slowptr && fastptr && fastptr->next!=NULL) {
        slowptr = slowptr->next;
        fastptr = fastptr->next->next;
        if(slowptr == fastptr) {
            return true;
        }
    }
    return false;
}

void firstNodeOfLoopFloydFindingAlogrithm(struct Node*h) {

    Node *slowptr = h;
    Node *fastptr = h;
    bool loopExists = false;
    while(slowptr && fastptr && fastptr->next != NULL) {
        slowptr = slowptr->next;
        fastptr = fastptr->next->next;
        if(slowptr == fastptr) {
            loopExists = true;
            break;
        }        
    }
    if (loopExists) {
        slowptr = h;
        while(slowptr != fastptr) {
            slowptr = slowptr->next;
            fastptr = fastptr->next;
        }
        cout<<endl<<"First Node of loop is "<<slowptr->data;
    }


}
int LengthOfLoop(struct Node *h) {
    Node *slowptr = h;
    Node *fastptr = h;
    int count = 0;
    bool isLoopExists = false;
    while(slowptr && fastptr && fastptr->next != NULL) {
        slowptr = slowptr->next;
        fastptr = fastptr->next->next;
        if(slowptr == fastptr) {
            isLoopExists = true;
            break;
        }
    }
    if(isLoopExists) {
        fastptr = fastptr->next;
        while(slowptr != fastptr) {
            count++;
            fastptr = fastptr->next;
        }
    }
    return count;
}

 
/* Driver program to test above function*/
int main()
{
    /* Start with the empty list */
    struct Node* head = NULL;
 
    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 10);
 
    /* Create a loop for testing */
    head->next->next->next->next = head;
 
    if (detectLoopUsingFloydFindingAlgorithm(head)) {
        cout << "Loop found";
        firstNodeOfLoopFloydFindingAlogrithm(head);
        cout<<endl<<"The length of the loop is "<<LengthOfLoop(head);
    }
    else
        cout << "No Loop";
 
    return 0;
}