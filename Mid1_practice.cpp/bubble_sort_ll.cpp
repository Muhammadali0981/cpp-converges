#include <iostream>

using namespace std;


struct node
{
    int data;
    node* next;

    node(int value):data(value), next(nullptr){}
};

class list{
private:
    node* head;

public:
    void add_node_at_end(int n){
        node* new_node = new node(n);
        if(!head) head = new_node;

        else{
            node* c = head;
            while(c->next){
                c = c->next;
            }

            c->next = new_node;
            
        }
    }
   void bubble_sort() {
    if (!head || !head->next) {
        cout << "List is empty or has only one node" << endl;
        return;
    }

    bool sorted = false;

    while (!sorted) {
        sorted = true;  
        node* current = head;
        node* prev = nullptr;

        while (current->next) {  
            if (current->data > current->next->data) {
                
                sorted = false;  

                node* temp = current->next;
                current->next = temp->next;
                temp->next = current;

                if (prev == nullptr) {
                    head = temp; 
                } else {
                    prev->next = temp;  
                }
               
                prev = temp;
            } else {

                prev = current;
                current = current->next;
            }
        }
    }
}


    
    void reverseList() {
        
        node* prev = nullptr;  // Previous node (will become the new tail)
        node* current = head;  // Current node (traversing through the list)
        node* next = nullptr;  // Temporary storage for the next node

        while (current) {
            // Save the next node before changing the current node's next pointer
            next = current->next;
            
            current->next = prev;
            
            prev = current;
            current = next;
        }


    head = prev;
    }

    void print() {
        
        node* current = this->head;
        while (current != nullptr) {
            cout << current->data << "->";
            current = current->next;
        }
        cout << "NULL" << endl;
    }
};



int main()
{   

    list l1;
    l1.print();
    l1.add_node_at_end(4);
    l1.add_node_at_end(1);
    l1.add_node_at_end(3);
    l1.add_node_at_end(2);
    l1.print();
    l1.bubble_sort();
    l1.print();
    l1.reverseList();
    l1.print();
    return 0;
}
