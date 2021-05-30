#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    cout<<n/2<<endl;;
    for(i=1; i<n/2; i++)cout<<2<<" ";
    if(n%2!=0)cout<<3;
    else cout<<2;
    cout<<endl;
    return 0;
}
