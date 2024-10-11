#include <iostream>


using namespace std;


int digits_sum(int n, int sum = 0){
    
    if (n/10 == 0) return sum + n;
    else return digits_sum(n/10, sum + n%10);

}


int main()
{
    cout << digits_sum(123) << endl;
    return 0;
}
