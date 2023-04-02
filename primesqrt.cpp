/*Sieve of Eratosthenes*/
/*
Using the Sieve of Eratosthenes
Decide on a range of numbers you wish to test and lay them out on square grid. Just like in the first method, you will need to find the square root to decide how wide to make the grid: your work will be shorter if the grid is as close to a perfect square as is possible.

For example, to test all the numbers from 1 to 25 for primes, make the following 5x5 grid:

1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25

Cross out 1 with an X, because 1 is never considered prime by mathematicians for technical reasons.

Circle 2, because 2 is a prime. Now, cross out with an X every number which can be evenly divided by 2. So, cross out 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24. These numbers cannot be prime because they can be divided by a number other than 1 and themselves; namely 2.

Circle 3, and repeat the previous step, crossing out all the multiples of 3 which aren't already crossed out.

Skip 4, because it is crossed out and circle the next number which has not been crossed out (5). It is a prime number. Continue until all the numbers on your chart are either circled or crossed out. If you made your chart perfectly square, that should occur about the time you finish the first row.
*/
#include <bits/stdc++.h>
using namespace std;
string prime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return "not prime";
        }
    }
    return "prime";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout<<prime(n)<<endl;
    }
    return 0;
}