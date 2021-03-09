#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[4];
    int i,c=0;
    for(i=0;i<4;i++){
        cin>>ara[i];
    }
    int siz=sizeof(ara)/sizeof(ara[0]);
    sort(ara,ara+siz);
    int c1=0,c2=0,c3=0;
   for(i=3; i>=2; i--) {
        if(ara[i] < ara[i-1]+ara[i-2]) c1++;
        else if(ara[i] == ara[i-1]+ara[i-2]) c2++;
        else c3++;
    }
       if(c1>0) cout<<"TRIANGLE";
    else if(c2>0) cout<<"SEGMENT";
    else cout<<"IMPOSSIBLE"<<endl;
}
