#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long int k;
    cin>>n;
    while(n--)
    {
        cin>>k;
        if(k%4==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
