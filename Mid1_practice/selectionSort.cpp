#include<iostream>


using namespace std;

int* sort(int* arr){

    for (int i = 0; i < 5; i++) {
        int min_i = i;
        for (int j = min_i; j < 5; ++j) {
            if (arr[min_i] > arr[j])
                min_i = j;
        }
        swap(arr[min_i], arr[i]);
    }
    return arr;
}


int main(int argc, char const *argv[])
{
    int arr[5] = {10,1,7,9,3};
    sort(arr);
    for (int i = 0; i < 5; ++i)
        cout << arr[i] << " ";

    return 0;
}


