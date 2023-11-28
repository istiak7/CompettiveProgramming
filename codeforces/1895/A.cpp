#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t ; cin >> t ;
    while(t--){
    int x , y , k ; cin >> x >> y >> k ;
    if ( x >= y)cout << x << '\n';
    else{
        cout << y+(y-min (y,x + k)) <<'\n';
    }
}
}
