/*
    Name: Muhammmad Ali
    Date: 09/09/2024
    Desc: Stack
*/


#include <iostream>

using namespace std;

template <typename T>
class Stack {
    T* data;
    unsigned length, capacity;

    void shrink() {
        T* new_data = new T[length];
        for (int i = 0; i < length; ++i)
            new_data[i] = data[i];
        delete data;
        data = new_data;
        capacity = length;
    }

    void grow() {
        capacity *= 2;
        T* new_data = new T[capacity];
        for (int i = 0; i < length; ++i)
            new_data[i] = data[i];
        delete data;
        data = new_data;
    }
public:
    Stack(): data(new T[1]), length(0), capacity(1) {}

    void push(T value) {
        if (length >= capacity)
            grow();
        data[length++] = value;
    }

    void pop() {
        if (length <= 0.5*capacity)
            shrink();
        length--;
    }

    T top() {
        if (length <= 0)
            throw "empty stack";
        return data[length-1];
    }

    void print() {
        for (int i = length-1; i >= 0; --i)
            cout << data[i] << " ";
        cout << endl;
    }
};

int main(int argc, char const *argv[])
{
    Stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    s.print();

    return 0;
}

