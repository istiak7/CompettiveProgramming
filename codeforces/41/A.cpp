#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

int main()
{
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);

    string s1,s2;
    char x[100];
    cin>>s1>>s2;
    int l=s1.length()-1;
    int i,j=0;
    for(i=l; i>=0; i--)
    {
        x[j]=s2[i];
        j++;
    }
    x[j]='\0';
    if(s1==x)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
