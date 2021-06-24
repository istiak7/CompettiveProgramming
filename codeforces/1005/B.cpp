#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    string s1,s2;
    cin>>s1>>s2;
    int i,cnt=0;
    int lens2=s2.size()-1;
    for(i=s1.size()-1; i>=0; i--)
    {

        if(s1[i]==s2[lens2])
        {
            cnt++;
        }
        else break;
        lens2--;
    }
    cout<<(s1.size()-cnt)+(s2.size()-cnt)<<endl;
    return 0;
}
