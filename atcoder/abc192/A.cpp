#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    for(int i=0;i<=100000;i+=100){
        if(x>=i&&x<i+100){
            cout<<(i+100)-x<<endl;
            break;
        }
    }
    return 0;
}
