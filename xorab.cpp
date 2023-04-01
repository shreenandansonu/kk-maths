#include <bits/stdc++.h>
using namespace std;
int xoring(int a){
        int m = a % 4;
        switch (m)
        {
        case 1:
            return 1 ;
            break;
        case 2:
            return a + 1 ;
            break;
        case 3:
            return 0 ;
            break;
        default:
            return a ;
            break;
        }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        cout<<(xoring(b)^xoring(a))<<endl;
    }
    return 0;
}