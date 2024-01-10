#include<bits/stdc++.h>
using namespace std;
const int N = 100005 ;
int n , a[N];
int dp[N];
int min_steps(int i) {
	if ( i == n ) return 0 ;
	if (dp[i] != -1)return dp[i];
	int ans = min_steps(i + 1) + abs((a[i] - a[i + 1]));
	if (i + 2 <= n)
		ans = min(ans, min_steps(i + 2) + abs((a[i] - a[i + 2]))) ;
	dp[i] = ans ;
	return ans;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	memset(dp, -1, sizeof dp);
	cin >> n ;
	for (int i = 1 ; i <= n ; i++)
		cin >> a[i];
	cout << min_steps(1) << '\n';
}