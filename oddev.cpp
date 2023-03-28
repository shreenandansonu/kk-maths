#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--)
{
 int x;
 cin>>x;
 if(x&1==1){
    cout<<"ODD"<<endl;
 }   
 else cout<<"EVEN"<<endl;
}
return 0;
}