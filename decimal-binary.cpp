#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--)
{
    int n;
    cin>>n;
    int x=(log2(n)+1);
    string bin="";
    for (int i = 1; i <= x; i++)
    {
        bin=char((n&1)+48)+bin;// we added 48 to our number because the decimal integer for character 0 is 48
        n=n>>1;
    }
    cout<<bin<<endl;
}
return 0;
}

// Happy that i made this code
