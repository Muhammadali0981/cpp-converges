/*
    Name: Muhammmad Ali
    Date: 09/09/2024
    Desc: String reversal
*/

#include <iostream>
#include <sstream>

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

    bool empty(){
        return (length <= 0);
    }
};

int main(int argc, char const *argv[])
{
    Stack<char> s;
    s.push('h');
    s.push('e');
    s.push('l');
    s.push('l');
    stringstream ss;

    while (!s.empty())
        ss << s.pop();
    cout << ss.str() << endl;

    return 0;
}