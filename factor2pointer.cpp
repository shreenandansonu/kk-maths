/*This code explains how we can find if a number is prime or not using two pointer method.*/
#include <bits/stdc++.h>
using namespace std;
int ispair(int product){
    int i=1,j=product;
    while(i<=j){//we have used = to handel conditions like squares where i*i==i*j gives us product
        if(i*j==product){ 
            cout<<i<<" "<<j<<endl;
            i++;j--;// we need to increase or decrease the value of i and j or the loop won't stop
        }
        else if(i*j>product) j--;
        else i++;
    }

}
int main()
{
int t;
cin >> t;

while(t--)
{
 int product;
 cin>>product;
 ispair(product);     
}
return 0;
}