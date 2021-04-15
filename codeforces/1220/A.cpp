#include<bits/stdc++.h>
using namespace std;
int main()
{
  int l;
  cin>>l;
  string str;
  cin>>str;
  for(int i=0;i<l;i++){
    if(str[i]=='n')
        cout<<'1'<<" ";
  }
  for(int i=0;i<l;i++){
    if(str[i]=='z')
        cout<<'0'<<" ";
  }
    return 0;
}
