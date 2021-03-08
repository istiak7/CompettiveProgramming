#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,ara[5][5],x,y;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            cin>>ara[i][j];
            if(ara[i][j]==1)
                x=i,y=j;
        }
    }
    cout<<abs(2-x)+abs(2-y)<<endl;
}
