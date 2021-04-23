#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,k;
    cin>>n>>k;
   long long int d1,d2,result;

    if(n&1)
    {
        d1=(n/2)+1;
        if(k<=d1)
        {
            result=k+(k-1);
        }
        else
        {
            d2=k-d1;
            result=2*d2;
        }
    }
    else
    {
        d1=n/2;
        if(k<=d1)
        {
            result=k+(k-1);
        }
        else
        {
            d2=k-d1;
            result=2*d2;
        }
    }
    cout<<result<<endl;
    return 0;
}
