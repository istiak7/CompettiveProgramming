///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define MP make_pair
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep1(i, n) for (int i = 1; i <= n; i++)
#define per(i, n) for (int i = n - 1; i >= 0; i--)
#define per1(i, n) for (int i = n; i >= 1; i--)
#define clr_1(x) memset(x, -1, sizeof(x));
#define lb lower_bound
#define up upper_bound
#define endl '\n'
#define optimize()                 \
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
void solve()
{
   string s;cin>>s;
   int cnt=0;
   if(s.size()<8)cout<<"No"<<endl;
   else if( (s[0]>='A' && s[0]<='Z') && (s[s.size()-1]>='A' && s[s.size()-1]<='Z')  && (s[1]>'0' && s[1]<='9'))
   {

    for(int i=2;i<s.size()-1;i++)
    {
        if(s[i]>='0' && s[i]<='9')
            cnt++;
        else{cnt=0;break;}
    }
    if(cnt==5)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
   }
   else cout<<"No"<<endl;
   
}
int main()
{
    optimize();
    solve();
}