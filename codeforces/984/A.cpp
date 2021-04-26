#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,ans;
   cin>>t;
   int ara[t];
   for(int i=0;i<t;i++){
    cin>>ara[i];
   }

   int siz=sizeof(ara)/sizeof(ara[0]);
   sort(ara,ara+t);
   if(t%2==0){
    ans=(t/2)-1;
   }
   else
    ans=t/2;
    cout<<ara[ans]<<endl;
    return 0;
}
