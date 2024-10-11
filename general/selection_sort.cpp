/*
    Name: Muhammmad Ali
    Date: 05/09/2024
    Desc: Selection sort
*/

#include <iostream>

using namespace std;

int main()
{
    int array[5] = {9,6,4,2,10};

    for (int i = 0; i < 5; i++)
    {
        bool flag = true;
        int min_i = i;
        for (int j = i+1; j < 5; j++) {
            if (array[j] < array[min_i]) {
                min_i = j;
                flag = false;
            }
        }
        if (flag) break;
        if (min_i != i){
            swap(array[min_i], array[i]);
        }
            
    }

    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << endl;
    }
    
    return 0;
}
