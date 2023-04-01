#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--)
{
 int n,t=0;
 cin>>n;
 while (n>0)
 {
    n=(n&(n-1));
    t++;
 }
 cout<<t<<endl;
    
}
return 0;
}