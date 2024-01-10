#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 100005 ;
int n , k , a[N];
ll dp[N];
ll ans = N ;
ll min_steps(int i) {
	if ( i == n ) return 0 ;
	if (dp[i] != -1)return dp[i];
	ll ans = 1e9;
	for ( int j = i + 1  ; j <= i + k ; j++) {
		if (j <= n)
			ans = min(ans, min_steps(j) + abs(a[i] - a[j]));
	}
	dp[i] = ans ;
	return ans ;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	memset(dp, -1, sizeof dp);
	cin >> n >> k ;
	for (int i = 1 ; i <= n ; i++)
		cin >> a[i];
	cout << min_steps(1) << '\n';
}