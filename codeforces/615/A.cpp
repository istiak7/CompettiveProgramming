#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,xi;
    cin>>n>>m;
    int ara[m+1];
    for(int i=1;i<=m;i++){
        ara[i]=0;
    }
    while(n--){
        cin>>xi;
        int ara2[xi];
        for(int i=0;i<xi;i++){
            cin>>ara2[i];
            ara[ara2[i]]++;
        }
    }
    for(int i=1;i<=m;i++){
        if(ara[i]==0){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
