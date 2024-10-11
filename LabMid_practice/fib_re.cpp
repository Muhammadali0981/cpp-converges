#include <iostream>

using namespace std;



int non_tail_fib(int n){

    if (n <= 2) return n-1;
    else return non_tail_fib(n - 1) + non_tail_fib(n - 2);

}

int tail_fib(int n,int a = 0,int b = 1){

    if (n == 1) return a;
    if (n == 2) return b;
    else return tail_fib(n - 1, b, a + b);

}


int main()
{
    cout << non_tail_fib(4) << endl;
    cout << tail_fib(4) << endl;
    return 0;
}
