#include <bits/stdc++.h>
#define ll long long int
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    if(n<3||n==4)cout<<-1<<endl;
    else if(n%3==0)cout<<n/3<<" "<<0<<" "<<0<<endl;
    else if(n%3==1)cout<<(n/3)-2<<" "<<0<<" "<<1<<endl;
    else cout<<(n/3)-1<<" "<<1<<" "<<0<<endl;
    }
    return 0;
}
