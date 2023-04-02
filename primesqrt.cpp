#include <bits/stdc++.h>
using namespace std;
string prime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return "not prime";
        }
    }
    return "prime";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout<<prime(n)<<endl;
    }
    return 0;
}