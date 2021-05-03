#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("d:\\code\\in.txt","rt",stdin);
    // freopen("d:\\code\\out.txt","rt",stdout);

        int n;
        cin>>n;
        int i,ara[n];
        double net=0,d1;
        for(i=0;i<n;i++){
            cin>>ara[i];
             d1=ara[i]/100.0;
             net+=d1;
        }
        double p=net*100;
        double per=p/n;
       printf("%.12lf",per);

    return 0;
}
