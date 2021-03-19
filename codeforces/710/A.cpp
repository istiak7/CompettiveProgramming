#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ara[200][8];

    int i,j;
    for(j=97; j<105; j++)
    {
        for(i=1; i<9; i++)
        {
            if(i==1&&j==97||i==1&&j==104)
                ara[j][i]=3;

            else if(i==1&&j!=97||i==1&&j!=104)
                ara[j][i]=5;
            else if(i==8&&j!=97&&j!=104)
                ara[j][i]=5;


            else  if(i==8&&j==104||i==8&&j==97)
                ara[j][i]=3;
            else if(j==97||j==104)
                ara[j][i]=5;
            else
                ara[j][i]=8;
        }
    }
    char a;
    int c,b;
    cin>>a>>b;
    if(a=='a')
        c=97;
    if(a=='b')
        c=98;
    if(a=='c')
        c=99;
    if(a=='d')
        c=100;
    if(a=='e')
        c=101;
    if(a=='f')
        c=102;
    if(a=='g')
        c=103;
    if(a=='h')
        c=104;


    cout<<ara[c][b];

}

