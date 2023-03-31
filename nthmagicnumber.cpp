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
 int x= (log2(n))+1,sum=0,base=5;
 for (int i = 1; i <= x; i++)
 {  
    
    sum+=((n&1)*base);
    n=n>>1;
    base*=5;
 }
 cout<<sum<<endl;
    
}
return 0;
}