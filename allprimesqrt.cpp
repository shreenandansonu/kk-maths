#include <bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    int i = 2, j = n - 1;
    while (i <= j)
    {
        if (i * j == n)
        {
            return false;
        }
        else if (i * j > n)
            j--;
        else
            i++;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool num[n] = {false};
        for (int i = 2; i * i <= n; i++)
        { //if the number is found prime then it would 
            if(isprime(i)==true){
                int j=i;
                while(j<=n){
                    j+=i;
                    num[j]=true;
                }
            }
            else if(num[i]==false & isprime(i)==false) {
                num[i]=true;
            }
        }
        for (int i = 2; i <= n; i++)
        {
            if(num[i]==false){
                cout<<i<<", ";
            }
        }
        cout<<endl;
        
    }
    return 0;
}