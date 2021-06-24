#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d,flag=0;
        cin>>n>>d;
        int ara[n],ara2[n];
        int i,fuck=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&ara[i]);
            if(ara[i]>d)
            {
                fuck=1;
            }
        }
        if(fuck==0)
        {
            cout<<"YES"<<endl;
            flag=1;
        }
        else
        {

            int sum,j,flag=0;
            for(i=0; i<n; i++)
            {
                for(j=0; j<n; j++)
                {
                    if(i!=j)
                    {
                        sum=ara[i]+ara[j];
                        // printf("%d ",sum);
                        if(sum<=d)
                        {
                            cout<<"YES"<<endl;
                            flag=1;
                            break;
                        }
                    }
                }
                if(flag==1)break;
            }
            if(flag==0)
                cout<<"NO"<<endl;
        }
    }
}
