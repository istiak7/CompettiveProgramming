///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize();
    string s;
    cin>>s;

    vector<string>v= {"00:00","01:10","02:20","03:30","04:40","05:50","10:01","11:11","12:21","13:31","14:41","15:51","20:02","21:12","22:22","23:32"};
    int i,flag=0;
    for(i=0; i<v.size(); i++)
    {
        if(s<v[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)cout<<v[i]<<endl;
    else cout<<"00:00"<<endl;
    return 0;
}

