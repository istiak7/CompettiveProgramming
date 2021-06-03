#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

int main()
{
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    ll n,x;
    cin>>n;
    vector<int>vect1,vect2,vect3;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        if(x==1)vect1.push_back(i+1);
        else if(x==2)vect2.push_back(i+1);
        else vect3.push_back(i+1);
    }
    int minlen=min(vect1.size(),(min(vect2.size(),vect3.size())));
    cout<<minlen<<endl;
    int i=0;
    while(minlen>0)
    {
        cout<<vect1[i]<<" "<<vect2[i]<<" "<<vect3[i]<<endl;
        i++;
        minlen--;
    }
}
