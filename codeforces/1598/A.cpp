///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define max_size 200005
using namespace std;
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);

int main(){
    int t;cin>>t;
    while(t--){
        int n,flag=0;
        cin>>n;
        string s1,s2;cin>>s1>>s2;
        for(int i=1;i<n-1;i++){
            if(s1[i]=='1'&&s2[i]=='1')flag=1;
        }
        if(flag==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}



