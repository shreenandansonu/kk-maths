#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--)
{
 int a,b;
 cin>>a>>b;
 int power=1,base=a;
 /*here the time complexity is o(logn) and the conventional method gave us O(n)*/
 while(b>0){
    if(b&1==1){
        power*=base;
    }
    base*=base;
    b=(b>>1);

 }
 cout<<power<<endl;

}
return 0;
}