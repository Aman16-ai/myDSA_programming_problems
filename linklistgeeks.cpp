#include <iostream>
using namespace std;
class list
{
private:
    //creating a node here.
    struct node
    {
        int data;
        node *link;
    } * start;

public:
    //Default constructor.
    list()
    {
        //When a new instance create of this class then start will assign NULL;
        start = NULL;
    }

    //Method to insert an element at the starting of the list.
    void insertAtBegin(int item)
    {
        node *temp;
        node *t;
        temp = new node;
        temp->data = item;
        temp->link = NULL;
        if (start == NULL)
        {
            start = temp;
        }
        else
        {
            t = start;
            start = temp;
            start->link = t;
        }
    }

    //Method to add an element at the end of the list.
    void append(int item)
    {
        node *temp, *t;
        temp = new node;
        temp->data = item;
        temp->link = NULL;
        if (start == NULL)
        {
            start = temp;
        }
        else
        {
            t = start;
            while (t->link != NULL)
            {
                t = t->link;
            }
            t->link = temp;
        }
    }

    //Method to display all elements of the list.
    void display()
    {
        node *t;
        if (start == NULL)
        {
            cout << endl
                 << "There is no element:";
        }
        else
        {
            t = start;
            cout << endl;
            while (t != NULL)
            {
                cout << t->data << " ";
                t = t->link;
            }
        }
    }

    //Method to delete an element at the starting of the list.
    void deleteFromBegin()
    {
        node *r;
        if (start == NULL)
        {
            cout << endl
                 << "There is no element to delete:";
        }
        else
        {
            r = start;
            start = start->link;
            delete r;
        }
    }

    //Method to delete an element at the end of the list.
    void deleteFromEnd()
    {
        node *t;
        node *r;
        if (start == NULL)
        {
            cout << endl
                 << "There is no element to delete:";
        }
    }
    // Method to count the total numbers of nodes in the list.s
    int count()
    {
        node *t;
        int totalNodes = 1;
        if (start == NULL)
        {
            totalNodes = 0;
        }
        else
        {
            t = start;
            while (t->link != NULL)
            {
                totalNodes++;
                t = t->link;
            }
        }

        return totalNodes;
    }

    void add(int position, int data)
    {
        node *temp, *t,*r;
        int count = 0;
        temp->data = data;
        temp->link = NULL;
        if(start == NULL) {
            start = temp;
        }
        else {
            t = start;
            while(t->link != NULL) {
                count++;
                if(position == count) {
                    r = t->link;
                    t->link = temp;
                    temp->link = r;
                }
                else {
                    t = t->link;
                }
            }
        }
    }
    void deleteAtPosition(int position) {
        node *t,*r;
        int count = 0;
        if(start == NULL) {
            cout<<endl<<"List is empty";
        }        
        else {
            t = start;
            while(t->link != NULL) {
                count++;
                if(count == position) {
                    r = t;
                    t = t->link;
                    delete r;
                }
                else {
                    t = t->link;
                }
            }
        }

    }
};
int main()
{
	
    list l;
    l.append(67);
    l.append(70);
    l.append(90);
    l.display();
    int count = l.count();
    cout << endl
         << "Total numbers of nodes in the list :" << count;
    l.insertAtBegin(55);
    l.display();
    int count2 = l.count();
    cout << endl
         << "Total numbers of nodes in the list :" << count2;

    l.add(2,88);
    l.display();
    l.deleteAtPosition(2);
    return 0;
}