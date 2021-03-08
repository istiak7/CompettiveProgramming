#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,j,ara[5][5];
for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        cin>>ara[i][j];
    }
}
int x,y;
for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        if(ara[i][j]==1){
            x=i;
            y=j;
        }
    }
}
int r1=abs(2-x);
int r2=abs(2-y);
cout<<r1+r2<<endl;
}
