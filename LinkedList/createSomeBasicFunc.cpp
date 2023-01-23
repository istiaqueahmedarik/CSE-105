#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int value;
    node *nextNode;
};
class LinkedList
{
public:
    node *head;
    int size;
    LinkedList()
    {
        head = NULL;
        size = 0;
    }
    node *CreateNewNode(int v)
    {
        node *newnode = new node;
        newnode->value = v;
        newnode->nextNode = NULL;
        return newnode;
    }
    void InsertAtHead(int value)
    {
        size++;
        node *newNode = CreateNewNode(value);
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        newNode->nextNode = head;
        head = newNode;
    }
    int getValue(int data)
    {
        if (data == size || data > size)
            return -1;
        node *PresentNode = head;
        while (data != 0)
        {
            PresentNode = PresentNode->nextNode;
            data--;
        }
        return PresentNode->value;
    }
    void Print(node *Node)
    {
        if (Node == NULL)
            return;
        Print(Node->nextNode);
        cout << Node->value << " ";
    }
    void printReverse()
    {
        Print(head);
        cout << "\n";
    }
    int getSize()
    {
        return size;
    }
    void Traverse()
    {
        node *PresentNode = head;
        while (PresentNode != NULL)
        {
            cout << PresentNode->value << " ";
            PresentNode = PresentNode->nextNode;
        }
        cout << "\n";
    }
    void swapFirst()
    {
        if (size <= 2)
            return;
        node *second = head->nextNode;
        head->nextNode = second->nextNode;
        second->nextNode = head;
        head = second;
    }
};
int main()
{
    LinkedList l;
    cout << l.getSize() << "\n";
    l.InsertAtHead(5);
    cout << l.getSize() << "\n";
    l.InsertAtHead(6);
    l.InsertAtHead(30);
    cout << l.getSize() << "\n";
    l.InsertAtHead(20);
    l.InsertAtHead(30);

    cout << l.getValue(2) << "\n";

    cout << l.getValue(6) << "\n";

    l.printReverse();
    l.Traverse();
    l.swapFirst();
    l.Traverse();
    l.printReverse();
}