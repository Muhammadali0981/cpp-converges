/* 
    Name:Muhammad Ali
    date: 20/8/24
    Descrpition: finds palindrome numbers
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <stdlib.h>
using namespace std;

bool check(int num){
    if(num < 0) return false;

    string str = to_string(num);

    
    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());

    if(str == reversedStr) {
        return true;
    }
    
    return false;
}

int main(){
    int x;
    cout << "enter a number" << endl;
    cin >> x;
    cout << check(x) << endl;
}