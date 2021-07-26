///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int LCS(string X, string Y, int m, int n)
{
    int maxlen = 0;
    int endingIndex = m;
    int lookup[m + 1][n + 1];
    memset(lookup, 0, sizeof(lookup));

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (X[i - 1] == Y[j - 1])
            {
                lookup[i][j] = lookup[i - 1][j - 1] + 1;

                if (lookup[i][j] > maxlen)
                {
                    maxlen = lookup[i][j];
                    endingIndex = i;
                }
            }
        }
    }
    return maxlen;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string X, Y;
        cin>>X>>Y;
        int m = X.size(), n = Y.size();
        cout <<(m+n)-2* LCS(X, Y, m, n)<<endl;
    }
    return 0;
}





