#include <bits/stdc++.h>
using namespace std;

int main(){
	int t ; cin >> t ;
	while(t--){
		string s ; cin >> s ;
		if(s[0] == '0')
			cout << "0" << endl;
		else {
			int ans = 0 ;
			if(s[0] == '?')ans += 9 ;
			if(s[0] !='?') ans = 1 ;
			for(int i =1;i<s.size();i++ ){
				if (s[i]=='?') ans*=10;
			}
			cout << ans << endl ; 
		}
	
	}
}