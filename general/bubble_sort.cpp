/*
    Name: Muhammmad Ali
    Date: 05/09/2024
    Desc: Bubble sort
*/

#include <iostream>

using namespace std;

int main()
{
    int array[5] = {9,6,4,2,10};

    for (int i = 0; i < 4; i++)
    {
        bool flag = true;
        for (int j = 0; j < 4; j++)
        {
            if (array[j] > array[j+1]) {
                swap(array[j],array[j+1]);
                flag = false;
            }
        }
        if (flag) break;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << endl;
    }
    
    return 0;
}
