#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,result=0,x,y;
     int mx=0;
       cin>>n;
  while(n--){
    cin>>x>>y;
    result=result+y-x;
        if(result>mx)
        {
            mx=result;
        }
    }
    cout<<mx<<endl;
    return 0;
}
