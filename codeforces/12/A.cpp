#include<bits/stdc++.h>
using namespace std;
#define mx 300005
int main()
{
  char ara[3][3];
  int j,i;
  for(i=0;i<3;i++){
        for(j=0;j<3;j++)
    cin>>ara[i][j];
  }
  if(ara[0][0]==ara[2][2]&&ara[0][1]==ara[2][1]&&ara[0][2]==ara[2][0]&&ara[1][0]==ara[1][2]){
    cout<<"YES"<<endl;
  }
  else
    cout<<"NO"<<endl;
    return 0;
}
