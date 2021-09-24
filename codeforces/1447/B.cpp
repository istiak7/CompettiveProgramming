///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define max_size 200005
using namespace std;
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);

/*
bool isPrime(int number){
 bool flag=true;
 for(int l= 2; l<= number / 2; l++) {
 if(number % l == 0) {
     flag = false;
     break;
    }
 }
 return flag;
} */
 int main()
 {
    optimize();
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        int ara[n][m];
        int i,j;
        int flag=1,cnt=0,sum=0,mini=101;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin>>ara[i][j];
                mini=min(mini,abs(ara[i][j]));
                if(ara[i][j]==0)flag=0;
                if(ara[i][j]<0)cnt++;
                sum+=abs(ara[i][j]);
            }
        }

        if(flag==0||cnt%2==0)
            cout<<sum<<endl;
        else
         cout<<sum  - (2*mini)<<endl;
    }

 }



