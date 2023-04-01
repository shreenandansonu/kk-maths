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
 bool num= (n & (n-1))==0; 
 cout<<num<<endl;  
}
return 0;
}