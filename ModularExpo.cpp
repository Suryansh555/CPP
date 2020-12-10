#include<iostream>
using namespace std;
const int mod = 1000000007;
 
int modular_expo(int a, int n)
{
    if (n == 0)
        return 1;
 
    if (n % 2 == 0)
    {
        //n is even
        long long half_ans = modular_expo(a, n / 2);
        return (half_ans * half_ans) % mod;
    }
 
    else
    {
        // n is odd
        long long half_ans = modular_expo(a, n / 2);
 
        half_ans = (half_ans * half_ans) % mod; //(a^n/2)*(a^n/2)
        half_ans = (half_ans * a) % mod;    //(a^n/2)*(a^n/2)*a
 
        return half_ans;
    }
}
 
int main()
{
    cout << modular_expo(10, 10);
    return 0;
}