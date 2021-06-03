#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

int main()
{
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);

  int n,a,b;
  cin>>n>>a>>b;
  int ara[n];
  for(int  i=0;i<n;i++)cin>>ara[i];
  sort(ara,ara+n);
  cout<<ara[n-a]-ara[n-a-1]<<endl;
    return 0;
}
