#include<bits/stdc++.h>
using namespace std;
int fun (int a,int b)
{

   int r=a+b;
   if(r>=15&&b>=8){
    return 1;
   }
   else if(r>=10&&b>=3)
    return 2;
   else if(r>=3)
    return 3;
   else
    return 4;

}
int main()
{
      int a,b;
   cin>>a>>b;
    int re=fun(a,b);
    printf("%d\n",re);
}
