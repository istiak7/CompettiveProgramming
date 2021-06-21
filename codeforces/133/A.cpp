#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    optimize();
    string s;
    cin>>s;
    int i=0;
    while(s[i]!='\0'){
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9'){
            cout<<"YES"<<endl;
            return 0;
        }
                i++;
    }
        cout<<"NO"<<endl;


  return 0;
}
