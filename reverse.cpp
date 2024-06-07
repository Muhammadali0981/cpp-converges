#include <iostream>
#include <vector>

using namespace std;

void reverseString(vector<char>& s) {
        cout << "[" ;
        for (int i=1; i < s.size()+1; i++){
            cout << "\"";
            cout << s[s.size()-i];
            cout << "\"";
            if (i != s.size()) cout << ",";
            
        }
        cout << "]" ;
}


int main(){
    vector<char> a = {'a','l', 'i'};
    reverseString(a);
}