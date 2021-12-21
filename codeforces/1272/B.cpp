///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define MP make_pair
#define endl '\n'
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define max_size 1000001
using namespace std;
typedef vector<int> VI;
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);

/*bool isprime(ll n ){
       for(ll i=2;i*i<=n;i++){
        if(n%i==0)return false;
       }
       return true;
}
*/

int main()
{
   int t;cin>>t;
   while(t--){
    string s;cin>>s;
    int L=0,R=0,U=0,D=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='L')L++;
        else if(s[i]=='R')R++;
        else if(s[i]=='U')U++;
        else D++;
    }
    int LR=min(L,R)*2;
    int UD=min(U,D)*2;
    if(LR==0&&UD!=0)UD=2;
    if(LR!=0&&UD==0)LR=2;
    cout<<LR+UD<<endl;
    for(int i=0;i<LR/2;i++)cout<<"L";
    for(int i=0;i<UD/2;i++)cout<<"U";
    for(int i=0;i<LR/2;i++)cout<<"R";
    for(int i=0;i<UD/2;i++)cout<<"D";
    cout<<'\n';
   }
}
