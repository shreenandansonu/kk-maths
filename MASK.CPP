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
 int bit;
 cin>>bit;
 int a=1<<(bit-1);
 int c= n&a;
 if(c==0) cout<<0<<endl;
 else cout<<1<<endl;

}
return 0;
}