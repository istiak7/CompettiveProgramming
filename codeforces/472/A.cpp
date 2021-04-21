#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r;
    cin>>n;
    if(n%2==0){
        r=n-4;
        cout<<"4 "<<r<<endl;
    }
    else
    {
        r=n-9;
        cout<<"9 "<<r<<endl;
    }
    return 0;
}
