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
    int t;
    cin>>t;
    while(t--)
    {
        int n;char c;cin>>n>>c;
        int x=(n/2);
        string s;cin>>s;
        int f1=0,f2=0;
       for(int i=0;i<n;i++){
        if(i%2==0){
            if(s[i]!=c)f1=1;
        }
        else{
            if(s[i]!=c)f2=1;
        }
       }
       int flag=0;
       for(int i=x;i<=n;i++){
        if(s[i]==c){flag=i+1;break;}
       }
      if(f1==0&&f2==0)cout<<"0"<<endl;
     else if(flag!=0)cout<<"1 "<<endl<<flag<<endl;

      else{
            cout<<"2"<<endl;
        cout<<n-1<<" "<<n<<endl;
      }

    }
}
