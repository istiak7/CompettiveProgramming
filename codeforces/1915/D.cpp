#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        stack<string>q;
        for (int i = 0; i < n; ) {
            string ss = "";
            if ((s[i] != 'a' && s[i] != 'e') && s[i + 1] == 'a' || s[i + 1] == 'e') {
                ss += s[i];
                ss += s[i + 1];
                q.push(ss);
                i += 2;
            }
            else {
                ss = q.top();
                q.pop();
                ss += s[i];
                q.push(ss);
                i += 1;

            }
        }
        vector<string>vs;
        while (!q.empty()) {
            vs.push_back(q.top());
            q.pop();
        }
        for (int i = vs.size() - 1; i >= 0; i--) {
            cout << vs[i];
            if (i > 0)cout << ".";
        }
        cout << '\n';
    }
}