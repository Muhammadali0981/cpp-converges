/*
    Name: Muhammmad Ali
    Date: 09/09/2024
    Desc: Stack using linked list
*/

#include <iostream>

using namespace std;


template <typename T>
class Stack {
    struct Node {
        T value;
        Node* next;

        Node(T value): value(value), next(nullptr) {}
    }* head;

    unsigned length;
public:
    Stack(): head(nullptr), length(0) {}

    void push(T value) {
        Node* new_node = new Node(value);

        new_node->next = head;
        head = new_node;
        length++;
    }

    T pop() {
        if (length <= 0)
            throw "empty stack";

        Node* temp = head;
        T value = head->value;
        head = head->next;

        delete temp;
        length--;

        return value;
    }

    T top() {
        if (length <= 0)
            throw "empty stack";
        return head->value;
    }

    void print() {
        Node* current = head;
        while (current) {
            cout << current->value << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main(int argc, char const *argv[])
{
    Stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    cout << s.pop() << endl;

    s.print();


    return 0;
}

