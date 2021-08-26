///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define max_size 200005
using namespace std;
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
int main()
{
   int n,i;
   cin>>n;
   int ara[n];
   for(i=0;i<n;i++)cin>>ara[i];
  	int ans = 0;
	for (int i = 1; i < n - 1; ++i) {
		if (ara[i] == 0 && ara[i - 1]==1 && ara[i + 1] == 1) {
			ans++;
			ara[i + 1] = 0;
		}
	}
	cout<<ans;
}




