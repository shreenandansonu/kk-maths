/*This code explains how we can find if a number is prime or not using two pointer method.*/
#include <bits/stdc++.h>
using namespace std;
string ispair(int product){
    int i=2,j=product-1;
    while(i<=j){//we have used = to handel conditions like squares where i*i==i*j gives us product
        if(i*j==product){ 
            return "not prime";
            i++;j--;// we need to increase or decrease the value of i and j or the loop won't stop
        }
        else if(i*j>product) j--;
        else i++;
    }
    return "prime";
}
int main()
{
int t;
cin >> t;

while(t--)
{
 int product=t;
 cout<<product<<" ";
 cout<<ispair(product)<<endl;     
}
return 0;
}