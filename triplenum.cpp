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
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int sum=0;
    for (int j = 0; j < n; j++)
    {
        sum^=a[j];
    }
    cout<<sum<<endl;    
       
}
return 0;
}