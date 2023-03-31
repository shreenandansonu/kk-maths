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
    int sum=0,base=5;
    while(n>0){
        sum+=(n&1)*base;
        base*=5;
        n=n>>1;
    }
    cout<<sum<<endl;
}
return 0;
}