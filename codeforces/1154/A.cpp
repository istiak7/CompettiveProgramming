#include<bits/stdc++.h>
using namespace std;

int high(int a,int b,int c,int d)
{
    int m=a;
    if(b>m)m=b;
    if(c>m)m=c;
    if(d>m)m=d;
    return m;
}


int main()
{
    int x,y,z,p;
    cin>>x>>y>>z>>p;
    int highest=high( x,y,z,p);
    //  cout<<highest;
    if(highest>x)
        cout<<highest-x<<" ";
    if(highest>y)
        cout<<highest-y<<" ";
    if(highest>z)
        cout<<highest-z<<" ";
    if(highest>p)
        cout<<highest-p;
    return 0;
}
