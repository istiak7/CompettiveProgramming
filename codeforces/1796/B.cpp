///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
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
#define SORT(v) sort((v).begin(), (v).end())
#define lb lower_bound
#define up upper_bound
#define endl '\n'
#define optimize()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
#define max_size 200001
#define M 100005
using namespace std;
typedef vector<int> VI;
typedef vector<long long int> VLL;

using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    ordered_set;
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
string fact[] = {"", "", "2", "3", "322", "5", "53", "7", "7222", "7332"};
const ll INF = 2000000000;
const ll INFLL = 9000000000000000000;

int dx[] = {0, 0, +1, -1, -1, +1, -1, +1};
int dy[] = {+1, -1, 0, 0, -1, +1, +1, -1};
const int mx = 2e5 + 123;
string LCSubStr(string X, string Y)
{
    // Find length of both the strings.
    int m = X.length();
    int n = Y.length();

    // Variable to store length of longest
    // common substring.
    int result = 0;

    // Variable to store ending point of
    // longest common substring in X.
    int end;

    // Matrix to store result of two
    // consecutive rows at a time.
    int len[2][n + 1];

    // Variable to represent which row of
    // matrix is current row.
    int currRow = 0;

    // For a particular value of i and j,
    // len[currRow][j] stores length of longest
    // common substring in string X[0..i] and Y[0..j].
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
            {
                len[currRow][j] = 0;
            }
            else if (X[i - 1] == Y[j - 1])
            {
                len[currRow][j] = len[1 - currRow][j - 1] + 1;
                if (len[currRow][j] > result)
                {
                    result = len[currRow][j];
                    end = i - 1;
                }
            }
            else
            {
                len[currRow][j] = 0;
            }
        }

        // Make current row as previous row and
        // previous row as new current row.
        currRow = 1 - currRow;
    }

    // If there is no common substring, print -1.
    if (result == 0)
    {
        return "-1";
    }

    // Longest common substring is from index
    // end - result + 1 to index end in X.
    return X.substr(end - result + 1, result);
}
int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        string s1;
        string s2;
        cin >> s1 >> s2;
        string ans = LCSubStr(s1, s2);
        if (ans== "-1")
            cout << "NO" << endl;
        else if (ans.size()== 1)
        {
            if (s1[0] == s2[0])
            {
                cout << "YES" << endl;
                cout << s1[0] << "*" << endl;
            }
            else if (s1[s1.size() - 1] == s2[s2.size() - 1])
            {
                cout << "YES" << endl;
                cout << "*" << s2[s2.size()-1] << endl;
            }
            else
                cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << "*" << ans << "*" << endl;
        }
    }
}