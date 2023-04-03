#include <bits/stdc++.h>
using namespace std;
int squareroot(int n){
    int low=1,up=n,mid;
    while(low<=up){
        mid=(low+up)/2;
        if(mid*mid==n){
            return mid;
        }
        else if(mid*mid>n) up=mid-1;
        else low=mid+1;
    }
    return -1;
}
int main()
{
int t;
cin >> t;
while(t--)
{
 int n;
 cin>>n;
 cout<<squareroot(n)<<endl;   
}
return 0;
}