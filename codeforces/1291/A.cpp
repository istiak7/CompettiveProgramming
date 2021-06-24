#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    ll T;
    cin>>T;
    while(T--)
    {
        //  optimize();
        ll n,i;
        cin>>n;
        string s;
        cin>>s;
        string s2;
        ll cnt=0;
        for(i=0;i<n;i++){
            if(s[i]=='1'||s[i]=='3'||s[i]=='5'||s[i]=='7'||s[i]=='9'){cnt++;
            s2+=s[i];
            }

            if(cnt==2)break;
        }
        if(cnt==2){
            cout<<s2<<endl;
        }
        else cout<<-1<<endl;
    }
    return 0;
}
