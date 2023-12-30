///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define pb push_back
#define optimize()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
#define max_size 200001
#define M 100005
#define arr array
using namespace std;
typedef vector<int> VI;
typedef vector<long long int> VLL;
typedef pair<ll, pair<ll, ll>> pi;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,
        tree_order_statistics_node_update>
        ordered_set;
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
const ll INF = 2000000000;
const ll INFLL = 9000000000000000000;
/*  vector<vector<ll> > a(n,vector<ll>(2));
        rep(i, n)cin >> a[i][0];
    pass vec in fun const vector<long long>& a
*/
int dx[] = {0, 0, +1, -1, -1, +1, -1, +1};
int dy[] = { +1, -1, 0, 0, -1, +1, +1, -1};
int d_row[] = { -1, 0, 1, 0};
int d_col[] = {0, 1, 0, -1};
const int N = 200005;

void solve() {
    int n; cin >> n;
    VLL a(n);
    ll even = 0, odd = 0;
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    int oddd = 0;
    for(int i=0;i<n;i++) {
        int ans=0;
        if (a[i] % 2 == 0)even += a[i];
        else {
            odd += a[i];
            oddd++;
        }
        if(oddd%3==1)ans=1;
        ans+=oddd/3;
        if(i==0){
            cout<<a[i]<<" ";
            continue;
        }
        cout << even + odd - ans << " ";

    }
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t ; cin >> t;
    while (t--)
        solve();
}
