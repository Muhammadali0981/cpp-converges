#include <iostream>

using namespace std;

struct node 
{
    int data;
    node* next;

    node(int v): data(v), next(nullptr) {}
};



int main()
{
    node* n1 = new node(1);
    node* n2 = new node(2);
    node* n3 = new node(3);
    node* n4 = new node(4);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    
    node* current = n1;
    while(current){
        cout << current->data << "->" ;
        current = current->next;
    }
    cout << "null" << endl;

    node* temp = n3;
    n2->next = n4;
    n3->next = n4->next;
    n4->next = temp;

    current = n1;
    while(current){
        cout << current->data << "->" ;
        current = current->next;
    }
    cout << "null";
    delete n1;
    delete n2;
    delete n3;
    delete n4;
    return 0;
}
