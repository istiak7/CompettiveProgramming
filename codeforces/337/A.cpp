#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int st,puz;
  cin>>st>>puz;
  int i,ara[puz];
  for(i=0;i<puz;i++){
    cin>>ara[i];
  }
 // int n=sizeof(ara)/sizeof(ara[0]);
  sort(ara,ara+puz);
 /* for(i=0;i<puz;i++){
    cout<<ara[i]<<" ";
  }
  cout<<endl;
  */
  int mi=1000000,r,c;
  for(i=0;i<puz;i++){
    c=ara[st-1],
   r=c-ara[i];
   if(r<mi){
    mi=r;
   }
   if(st-1==puz-1){
    break;
   }
   st++;
  }
cout<<mi<<endl;
    return 0;
}
