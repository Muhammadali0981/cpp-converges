#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main()
{
    vector<int> nums{4, 5, 8, 1, 2, 0};
    vector<int> ex;

     
    for(int num:nums){
        ex.push_back(num);
    }


    cout << "unsorted" << endl;    
    for(int num:nums){
        cout << num << endl;
    }

    cout << "sorted" << endl;
    sort(ex.begin(), ex.end()); 
    for(int num:ex){
        cout << num << endl;
    }

    return 0;
}
