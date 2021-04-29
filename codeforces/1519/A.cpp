#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int r,b,d,a,c,div;
        cin>>r>>b>>d;
        if(d==0)
        {
            if(r==b)
                c=1;
            else
                c=0;
        }
        else if(b==r)
        {
            if(d>=0)
                c=1;
            else c=0;
        }
        else if(b==1||r==1)
        {
            if(r==1)
                a=(b-1);
            if(b==1)
                a=(r-1);
            if(a>d)
                c=0;
            else
                c=1;
        }
            else
            {
                if(r>b){
                    if(r%b!=0){
                        div=(r/b)+1;
                        if(div-1<=d)
                            c=1;
                        else c=0;
                    }
                    else
                    {
                        div=r/b;
                        if(div-1<=d) c=1;
                        else c=0;
                    }
                } if(r<b){
                    if(b%r!=0){
                        div=(b/r)+1;
                        if(div-1<=d)
                            c=1;
                        else c=0;
                    }
                       else
                    {
                        div=b/r;
                        if(div-1<=d) c=1;
                        else c=0;
                    }
                }

            }
        if(c==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
