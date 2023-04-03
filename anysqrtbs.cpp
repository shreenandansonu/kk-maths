#include <bits/stdc++.h>
using namespace std;
double squareroot(int n,int p){
    int low=0,up=n,mid;
    double root=0.0;
    while(low<=up){
        mid=low + (-low+up)/2;
        if(mid*mid==n){
            return mid;
        }
        else if(mid*mid>n) up=mid-1;
        else low=mid+1;
        
    }
    root=low;
    double incr=0.1;
    for (int  i = 0; i < p; i++)
    {
        while(root*root<=n){
            root+=incr;
        }
        root-=incr;
        incr/=10;

    }
    
    return root;
}
int main()
{
int t;
cin >> t;
while(t--)
{
 int n,p;
 cin>>n>>p;
 cout<<squareroot(n,p)<<endl;   
}
return 0;
}