#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
class LinkedList
{
    Node *head;

public:
    LinkedList()
    {
        head = nullptr;
    }
    void insertEnd(int data)
    {
        Node *newnode = new Node();
        newnode->data = data;
        newnode->next = nullptr;
        if (head == nullptr)
        {
            head = newnode;
            return;
        }
        Node *temp = head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next = newnode;
    }
    void insertBegin(int data)
    {
        Node *newnode = new Node();
        newnode->data = data;
        newnode->next = head;
        head = newnode;
    }
    void insertAtPosition(int position, int data) {
        Node *newnode = new Node();
        newnode->data = data;
        Node *temp = head;
        for(int i = 0; i<position-1;i++){
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
};
int main()
{
    return 0;
}