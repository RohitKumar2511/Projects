#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;

        Node(int data)//const
        {
            this -> data = data;
            this -> next = NULL;
        }
};

void Insert_heaed(Node* &head, int d)
{
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void print(node* &head)
{
    Node* temp = head;
    
}

int main()
{   
    Node* node1 = new Node(10);
    cout << node1 -> data << endl;
    cout<< node1 -> next << endl;
/*    Node* node1 = new Node(1233);
    cout << node1 -> data << endl;
    cout<< node1 -> next << endl;*/

    Node* head = node1;
    return 0;
}