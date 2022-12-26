///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define MP make_pair
#define rep(i, n) for (long long int i = 0; i < n; i++)
#define rep1(i, n) for (int i = 1; i <= n; i++)
#define per(i, n) for (int i = n - 1; i >= 0; i--)
#define per1(i, n) for (int i = n; i >= 1; i--)
#define clr_1(x) memset(x, -1, sizeof(x));
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
//// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);

int drow[] = {-1, 0, 1, 0};
int dcol[] = {0, 1, 0, -1};
void solve()
{
    string s;
    cin >> s;

    int flag = 1,in = -1;
    for (int i = 0; i < s.size(); i++)
    {
        if ((s[i] - '0') % 2 == 0)
        {
            flag = 0;
        }
    }
    for (int i = 0; i < s.size() - 1; i++)
    {
        int x = (s[s.size()-1]-'0');
        if ((s[i] - '0') % 2 == 0)
        {
            if ((s[i] - '0') < x)
            {
                in = i;
                break;
            }
            in = i;
        }
    }
    if (flag == 1)
        cout << "-1" << endl;

    else
    {
        swap(s[in],s[s.size()-1]);
        cout << s << endl;
    }
}
int main()
{
    // optimize();
    // int t;
    // cin >> t;
    // while (t--)
    solve();
}