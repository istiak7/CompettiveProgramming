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
#define optimize()               \
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
ll smallestDivisor(ll n)
{
  if (n % 2 == 0)
    return 2;

  for (ll i = 3; i * i <= n; i += 2)
  {
    if (n % i == 0)
      return i;
  }

  return n;
}
int main()
{
  ll n;
  cin >> n;

  ll ans, cnt = 0;
  if (n % 2 != 0)
  {
    ans = smallestDivisor(n);
     n -= ans;
     cnt++;
  }
  cout << cnt + (n / 2) << endl;

}