#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,r;
   cin>>n;
   if(n%2==0)
    r=n/2;
   else
    r=-((n+1)/2);
    cout<<r<<endl;
    return 0;
}
