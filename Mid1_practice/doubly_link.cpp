#include<iostream>

using namespace std;

struct node
{
    
    int data;
    node* next;
    node* prev:

    Node(int d) : data(d), next(nullptr), prev(nullptr) {}
};



class doubly{

    private:
    Node* head;

    public:
    void insertFirst(int k) {
        Node* newNode = new Node(k);
        Node* temp = head;
        if(head == nullptr) {
            newNode->next = head;
            head->prev = newNode;
        } else {

        }
    }

};


