#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

int main()
{
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
  int n,c1=0,c2=0,c3=0;
  int flag1,flag2,flag3;
  cin>>n;
  int ara[n];
   int i=0;
   for(i=0;i<n;i++){
       cin>>ara[i];
       if(ara[i]==1)c1++;
       else if(ara[i]==2)c2++;
       else if(ara[i]==3)c3++;
   }
   int mi=min(c3,(min(c1,c2)));
   cout<<mi<<endl;
   while(mi--){
  flag1=flag2=flag3=0;
      for(i=0;i<n;i++){

            if(ara[i]==1&&flag1==0){
                    ara[i]=0;
                cout<<i+1<<" ";
                flag1=1;
            }
            else if(ara[i]==2&&flag2==0){
                ara[i]=0;
                cout<<i+1<<" ";
                flag2=1;
            }
            else if(ara[i]==3&&flag3==0){
                ara[i]=0;
                cout<<i+1<<" ";
                flag3=1;
            }

       }
       cout<<endl;
   }
}
