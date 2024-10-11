#include <iostream>



using namespace std;


int* sort(int* arr){

    for (int i = 1; i < 5; i++)
    {   
        int j = i - 1;
        int key = arr[i];
        while (j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;

        }
        arr[j+1] = key;
        
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
