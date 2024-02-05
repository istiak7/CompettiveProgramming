#include<bits/stdc++.h>
using namespace std;
#define VLL vector<long long int>
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t  ; cin >> t ;
    while (t--) {
        int n , k , m ; cin >> n >> k >> m ;
        string s ; cin >> s ;
        bitset<27>mark;
        int cnt = 0 , ans = 0 ;
        string r = "";
        for (auto x : s) {
            if (!mark[x - 96]) {
                cnt++;
                mark[x - 96] = true;
                if (cnt == k) {
                    mark.reset();
                    cnt = 0 ;
                    ans++ , r += x;
                }
            }
        }
        if (ans >= n)cout << "YES" << '\n';
        else {
            cout << "NO"<<'\n';
            for (int i = 1 ; i <= k ; i++) {
                if (!mark[i]) {
                    r += char(i + 96);
                    while (r.size() < n)
                        r += 'a';
                        break;
                }
            }
            cout << r << '\n';
        }
    }
}
