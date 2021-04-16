#include<bits/stdc++.h>
using namespace std;
 int main()
 {
      int n,h;
      cin>>n>>h;
      int ara[n],i;
      int sum1=0,sum2=0;
 for(i=0;i<n;i++){
        cin>>ara[i];
        if(ara[i]>h){
            sum1+=2;
        }
        else
            sum2+=1;
 }
 cout<<sum1+sum2<<endl;
}