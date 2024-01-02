#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 9;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while (t--) {
      int n, k; cin >> n >> k;
      vector<int> a(n), b(n);
      int total = 0;
      int mx = 0, ans = 0;
      for (int i = 0; i < n; i++)cin >> a[i];
      for (int i = 0; i < n; i++)cin >> b[i];
      for (int i = 0; i < min(n, k); i++) {
         mx = max(mx, b[i]);
         total += a[i];
         int rem = k - i - 1 ;
         ans = max(ans, total + mx * rem);
      }
      cout << ans << '\n';
   }

}