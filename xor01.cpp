#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int m = n % 4;
        switch (m)
        {
        case 1:
            cout << 1 << endl;
            break;
        case 2:
            cout << n + 1 << endl;
            break;
        case 3:
            cout << 0 << endl;
            break;
        default:
            cout << n << endl;
            break;
        }
    }
    return 0;
}