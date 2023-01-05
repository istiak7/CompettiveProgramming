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

int A_mod_B(string N, int a)
{
    int len = N.size();
 
    int ans = 0;
    for (int i = 0; i < len; i++)
        ans = (ans * 10 + (int)N[i] - '0') % a;
 
    return ans % a;
}
 
int findMod(string N)
{
    int mod = A_mod_B(N, 4);
 
    int ans = (1 + pow(2, mod) + pow(3, mod)
               + pow(4, mod));
 
    return (ans % 5);
}
 
int main()
{
    string n;cin>>n;
    cout << findMod(n) << endl;
}