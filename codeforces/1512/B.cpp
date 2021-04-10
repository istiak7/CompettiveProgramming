#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int t,c=0,p,q,r,s;
        cin>>t;
        int i,j;
        char ara[t][t];
        for(i=0; i<t; i++)
        {
            for(j=0; j<t; j++)
            {
                cin>>ara[i][j];
                if(ara[i][j]=='*')
                {
                    c++;
                    if(c==1)
                    {
                        p=i,q=j;
                    }
                    if(c==2)
                    {
                        r=i,s=j;
                    }
                }
            }
        }

        for(i=0; i<t; i++)
        {
            for(j=0; j<t; j++)
            {
//same raw
                if(p==r)
                {
                    if(p<t-1)
                    {
                        ara[p+1][q]='*';
                        ara[r+1][s]='*';
                    }
                    if(p==t-1)
                    {
                        ara[p-1][q]='*';
                        ara[r-1][s]='*';
                    }
                }
                //same collum
                else if(q==s)
                {
                    if(q<t-1)
                    {
                        ara[p][q+1]='*';
                        ara[r][s+1]='*';
                    }
                    if(q==t-1)
                    {
                        ara[p][q-1]='*';
                        ara[r][s-1]='*';
                    }
                }
                // else
                else
                {
                    ara[p][s]='*';
                    ara[r][q]='*';
                }


            }
        }
        for(i=0; i<t; i++)
        {
            for(j=0; j<t; j++)
            {
                cout<<ara[i][j];
            }
            cout<<endl;
        }

    }

    return 0;
}
