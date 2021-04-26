#include<bits/stdc++.h>
using namespace std;
int main()
{
   int ara[3];
   int i;
   for(i=0;i<3;i++){
    cin>>ara[i];
   }
   int siz=sizeof(ara)/sizeof(ara[0]);
     sort(ara,ara+3);
    cout<<ara[2]-ara[0]<<endl;
    return 0;
}
