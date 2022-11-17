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
vector<char> s1 = {'H', 'D', 'C', 'S'};
vector<char> s2 = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};
void solve()
{
    int t;
    cin >> t;
    vector<string> v;
    int flag=1;
    for (int i = 0; i < t; i++)
    {
        int flag1 = 0, flag2 = 0;
        string s;
        cin >> s;
        v.pb(s);
        for (int j = 0; j < s1.size(); j++)
        {
            if (s[0] == s1[j])
            {
                flag1 = 1;
            }
        }
        for (int j = 0; j < s2.size(); j++)
        {
            if (s[1] == s2[j])
            {
                flag2 = 1;
            }
        }
        if(flag1==0 || flag2==0)
            flag=0;
    }
    for (int i = 0; i < t; i++)
    {
        for(int j = i+1;j<t;j++)
        {
            if(v[i]==v[j])
                flag=0;
        }
    }
     if(flag==0)
    {
        cout<<"No"<<endl;
        return;
    }
    cout<<"Yes"<<endl;
}

int main()
{
    solve();
}