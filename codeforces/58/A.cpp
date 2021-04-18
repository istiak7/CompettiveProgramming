#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    int a=0,b=0,c=0,d=0;
    string s;
    cin>>s;
    int l=s.size();
    for(int i=0; i<l; i++)
    {
        if(s[i]=='h'){

            a=1;
        }
      else  if(s[i]=='e'&&a==1){

            b=1;
        }
     else   if(s[i]=='l'&&b==1){

            c++;
        }

        else if(s[i]=='o'&&c>=2){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;

    return 0;
}
