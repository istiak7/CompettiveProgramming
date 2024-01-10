#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int NN = 105 ;
ll w[NN] , v[NN] ;
ll N , W ;
ll dp[NN][100005];
ll knapsack(int i , ll weight) {
   if ( i == N + 1)return 0 ;
   if (dp[i][weight] != -1)return dp[i][weight];
   long long int ans = knapsack(i + 1 , weight);
   if (weight + w[i] <= W)
      ans = max(ans, knapsack(i + 1 , weight + w[i]) + v[i]) ;
   dp[i][weight] = ans ;
   return ans ;
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   memset(dp, -1, sizeof dp);
   cin >> N >> W ;
   for (int i = 1 ; i <= N ; i++) {
      cin >> w[i] >> v[i] ;
   }
   cout << knapsack(1 , 0) << endl ;
}