// Efficient C++ program to 
// find n-th number made of
// even digits only
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
// function to find nth number
// made of even digits only
ll findNthEvenDigitNumber(ll n)
{
    // If n=1 return 0
    if (n == 1)
        return 0;

    // vector to store the digits 
    // when converted into base 5
    vector< ll> v;

    // Reduce n to n-1 to exclude 0
    n = n - 1;

    // Reduce n to base 5 
    // number and store digits
    while (n > 0)
    {
        // pushing the digits
        // into vector
        v.push_back(n % 5);
        n = n / 5;
    }

    // variable to represent the 
    // number after converting it 
    // to base 5. Since the digits 
    // are be in reverse order, 
    // we traverse vector from back
    ll result = 0;
    for (ll i = v.size() - 1; i >= 0; i--)
    {
        result = result * 10;
        result = result + v[i];
    }

    // return 2*result (to convert 
    // digits 0, 1, 2, 3, 4 to 
    // 0, 2, 4, 6, 8.
    return 2*result;
}

// Driver Code
int main()
{
    long long int n ; cin >> n ;
    cout << findNthEvenDigitNumber(n) 
        << endl;
    return 0;
}
