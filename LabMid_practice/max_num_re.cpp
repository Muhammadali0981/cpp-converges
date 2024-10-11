#include <iostream>

using namespace std;


int max_num(int* arr, int size, int max){
    
    if (size == 0) return max;
    if(arr[size - 1] > max) max = arr[size -1];
    
    return max_num(arr,size - 1, max);

}


int main(){

    int a[4] = {2, 1, 0, 4};
    cout << max_num(a, 4, a[0]) << endl;
    return 0;

}
