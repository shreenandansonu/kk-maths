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
 int x= (log2(n))+1,sum=0;
 for (int i = 1; i <= x; i++)
 {  
    cout<<(n&1)<<endl;
    sum+=((n&1)*(pow(5,i)));
    n=n>>1;
 }
 cout<<sum<<endl;
    
}
return 0;
}