#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--)
{
 int n,count=0;
 cin>>n;   
 while (n>0)
 {
    if(n&1==1) count++;
    n>>=1;
 }
 cout<<count<<endl;
 
}
return 0;
}