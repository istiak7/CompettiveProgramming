///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
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
    int t;cin>>t;while(t--){
      string x1;ll p1;cin>>x1>>p1;
      string x2;ll p2;cin>>x2>>p2;

    ll l1 = x1.size();ll l2 = x2.size();
    ll x =min(l1,l2);
    l1=l1+p1;l2=l2+p2;

    //cout<<l1<<" "<<l2<<endl;
        if(l1>l2)cout<<">"<<endl;
        else if(l1<l2)cout<<"<"<<endl;
        else{
                int c=0;

                for(int i=0;i<x;i++){
                    if(x1[i]>x2[i]){cout<<">"<<endl;c=1;break;}
                    else if(x1[i]<x2[i]){cout<<"<"<<endl;c=1;break;}
                }

                if(x1.size()>x2.size()&&c!=1){
                  for(int i=x2.size();i<x1.size();i++)
                          {
                              if(x1[i]!='0'){cout<<">"<<endl;c=1;break;}
                          }
                }
                if(x1.size()<x2.size()&&c!=1){
                        for(int i=x1.size();i<x2.size();i++)
                     {
                              if(x2[i]!='0'){cout<<"<"<<endl;c=1;break;}
                     }
                }
            if(c==0)cout<<"="<<endl;
        }
    }
}


