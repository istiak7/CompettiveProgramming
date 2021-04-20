#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char ara[n+1][n+1];
    int i,j,c=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i%2==0){
                if(j%2==0){
                    ara[i][j]='C';
                    c++;
                }
                else ara[i][j]='.';
            }
            if(i%2!=0){
                if(j%2!=0){
                    ara[i][j]='C';
                    c++;
                }
                else ara[i][j]='.';
            }
        }
    }
    cout<<c<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<ara[i][j];
        }
        cout<<endl;
    }
    return 0;
}
