#include <bits/stdc++.h>
using namespace std;
const int m = 998244353;
int main()
{
    long long int a, b, c, d, e, f, aa, bb;
    cin >> a >> b >> c >> d >> e >> f;
    aa = ((a % m) * (b % m)) % m;
    aa = (aa * (c % m)) % m;
    bb = ((d % m) * (e % m)) % m;
    bb = (bb * (f % m)) % m;
    long long int ans = (aa - bb + m) % m;
    cout << ans << '\n';
}