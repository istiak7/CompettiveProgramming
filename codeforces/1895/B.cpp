#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t ; cin >> t ;
    while (t--) {
        int n ; cin >> n ; 
        vector<long long int> v(2*n);
        for (int i = 0; i < 2*n; ++i)
        {
           cin >> v[i];
        }
        sort(v.rbegin(),v.rend());
        // for(int i = 0 ; i < v.size();i++)
        //     cout << v[i]<<" ";
        // cout << '\n';
        long long int dis = 0 ;
        for (int i = 1; i < n; ++i)
        {
            dis += v[i-1]-v[i];
        }
        for (int i = n+1; i < 2*n; ++i)
        {
            dis += v[i-1]-v[i];
        }
        cout << dis << '\n';

        for (int i = 0; i < n; ++i)
        {
            cout << v[i] <<" "<< v[i+n] << '\n';
        }
        cout << '\n';
    }
}
