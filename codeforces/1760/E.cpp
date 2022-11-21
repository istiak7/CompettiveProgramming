///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define MP make_pair
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep1(i, n) for (int i = 1; i <= n; i++)
#define per(i, n) for (int i = n - 1; i >= 0; i--)
#define per1(i, n) for (int i = n; i >= 1; i--)
#define clr_1(x) memset(x, -1, sizeof(x))
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).begin(), (v).end()
#define lb lower_bound
#define up upper_bound
#define endl '\n'
#define optimize()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
#define max_size 200001
using namespace std;
typedef vector<int> VI;
typedef vector<long long int> VLL;
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
string fact[] = {"", "", "2", "3", "322", "5", "53", "7", "7222", "7332"};
const int M = 1e5 + 123;
const ll INF = 2000000000;
const ll INFLL = 9000000000000000000;

int dx[] = {0, 0, +1, -1, -1, +1, -1, +1};
int dy[] = {+1, -1, 0, 0, -1, +1, +1, -1};
const int mx = 2e5 + 123;
const int m = 998244353;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        VLL v(n), a(n), b(n), c(n), d(n), e(n);
        ll mx = 0, sum1 = 0, sum2 = 0, sum3 = 0;
        ll zero = 0, one = 0, flag = 0;
        rep(i, n)
        {
            cin >> v[i];
            d[i] = v[i];
            e[i] = v[i];
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (v[i] == 0)
            {
                zero++;
            }
            if (v[i] == 1)
            {
                a[i] = zero;
                sum1 += a[i];
            }
        }
        zero=0;
        for (int i = 0; i < n; i++)
        {
            if (d[i] == 0)
            {
                d[i] = 1;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (d[i] == 0)
            {
                zero++;
            }
            if (d[i] == 1)
            {
                a[i] = zero;
                sum2 += a[i];
            }
        }
zero=0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (e[i] == 1)
            {
                e[i] = 0;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (e[i] == 0)
            {
                zero++;
            }
            if (e[i] == 1)
            {
                a[i] = zero;
                sum3 += a[i];
            }
        }
        cout << max(sum1, max(sum2, sum3)) << endl;
    }
}