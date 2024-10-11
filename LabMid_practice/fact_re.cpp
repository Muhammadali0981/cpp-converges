#include <iostream>

using namespace std;



int non_tail_fact(int n){
    if (n == 0) return 1;
    else return n * non_tail_fact(n-1);
}

int tail_fact(int n, int r = 1){
    if (n == 0) return r;
    else return tail_fact(n - 1, n * r);
}

int main()
{
    cout << non_tail_fact(5) << endl;
    cout << tail_fact(5) << endl;
    return 0;
}
