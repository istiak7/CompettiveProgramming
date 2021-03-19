#include <bits/stdc++.h>
using namespace std;
int main()
{

	string s;
	cin >> s;

	if(s[0] == 'a' || s[0] == 'h')
	{
		if(s[1] == '8' || s[1] == '1')
		{
			cout << 3;
		}
		else
		{
			cout << 5;
		}
	}
	else
	{
		if(s[1] == '8' || s[1] == '1')
		{
			cout << 5;
		}
		else
			cout << 8;
	}
    return 0;
}

