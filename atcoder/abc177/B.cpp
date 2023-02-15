#include <bits/stdc++.h>
#define M 105
using namespace std;

int main()
{
    string s, t ;
    cin >> s >> t ;
    int ans  = 12345677;
    for(int i=0;i<=s.size()-t.size();i++){
        int cnt = 0 ;
        for(int j=0;j<t.size();j++){
            if(t[j]!=s[i+j]){
                cnt++;
            }
        }
        ans  = min(ans,cnt) ;
    }
    cout << ans << endl ;
}