#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

int main()
{
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    int n,m;
    cin>>n>>m;
  char ara[100][100];
  int i,j,cnt=0;
  for(i=0;i<n;i++)for(j=0;j<m;j++)cin>>ara[i][j];
  for(i=0;i<n;i++){for(j=0;j<m;j++)
    {
        string s={};
        s+=ara[i][j];
        s+=ara[i][j+1];
        s+=ara[i+1][j];
        s+=ara[i+1][j+1];
        sort(s.begin(),s.end());
        if(s=="acef")cnt++;
    }
  }
  cout<<cnt<<endl;
    return 0;
}
