#include <iostream>



using namespace std;


int* sort(int* arr){

    bool sorted;
    for (int i = 0; i < 5; i++)
    {   
        sorted = true;
        for(int j = 0; j < 4; j++){
            if (arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
            sorted = false;

        }

        if (sorted) break;
    }
    
    return arr;
}

int main(int argc, char const *argv[])
{
    int arr[5] = {20,18,21,2,4};
    sort(arr);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    
    return 0;
}
