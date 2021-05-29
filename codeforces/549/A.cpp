#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

int main()
{
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    int n,m;
    cin>>n>>m;

    char ara[n+1][m+1];
    int i,j,cnt=0;
    int ara2[125]= {0};
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin>>ara[i][j];
        }
    }
    for(i=0; i<n; i++)
    {

        for(j=0; j<m; j++)
        {
            if(i!=n-1&&j!=m-1)
            {

                ara2[ ara[i][j] ]++;
                ara2[ ara[i][j+1] ]++;
                ara2[ ara[i+1][j] ]++;
                ara2[ ara[i+1][j+1] ]++;

                if(ara2[97]==1&& ara2[99]==1 && ara2[101]==1&&ara2[102]==1)cnt++;
                ara2[97]= ara2[99]=ara2[101]=ara2[102]=0;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
