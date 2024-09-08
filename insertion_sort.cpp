/*
    Name: Muhammmad Ali
    Date: 05/09/2024
    Desc: Insertion sort
*/

#include <iostream>

using namespace std;

void print_rec(int array[5], int i = 0) {
    if (i >= 5) return;
    cout << array[i] << endl;
    return print_rec(array, i+1);
}

int main()
{
    int array[5] = {9,6,4,2,10};

    // for (int i = 1; i < 5; i++)
    // {
    //     int j = i;
    //     while (j >= 0 && array[j-1] > array[j]) {
    //         swap(array[j-1], array[j]);
    //         j--;
    //     }
    // }

    for (int i = 1; i < 5; ++i) {
        int temp = array[i];
        int j = i-1;
        while (j >= 0 && array[j] > temp) {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = temp;
    }

    print_rec(array);
    
    return 0;
}
