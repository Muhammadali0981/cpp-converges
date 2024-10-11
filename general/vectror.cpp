#include <iostream>
#include <vector>

using namespace std;


int main()
{
    vector<int> one(10, 1);

    for(int num: one){//num:one picks thing from the vector automatically 
        cout << num+1 << endl;
    }
    return 0;
}
