#include <iostream>
#include <string>

using namespace std;


string non_tail_revesre(string s){
    if(s.empty()) return "";
    
    else return non_tail_revesre(s.substr(1)) + s[0];
}


int main()
{
    cout << non_tail_revesre("ali") << endl;
    return 0;
}
