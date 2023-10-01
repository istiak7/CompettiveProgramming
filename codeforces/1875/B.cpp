#include <bits/stdc++.h>
using namespace std;
void __print(int x) { cerr << x; }
void __print(long x) { cerr << x; }
void __print(long long x) { cerr << x; }
void __print(unsigned x) { cerr << x; }
void __print(unsigned long x) { cerr << x; }
void __print(unsigned long long x) { cerr << x; }
void __print(float x) { cerr << x; }
void __print(double x) { cerr << x; }
void __print(long double x) { cerr << x; }
void __print(char x) { cerr << '\'' << x << '\''; }
void __print(const char *x) { cerr << '\"' << x << '\"'; }
void __print(const string &x) { cerr << '\"' << x << '\"'; }
void __print(bool x) { cerr << (x ? "true" : "false"); }
 
template <typename T, typename V>
void __print(const pair<T, V> &x)
{
    cerr << '{';
    __print(x.first);
    cerr << ',';
    __print(x.second);
    cerr << '}';
}
template <typename T>
void __print(const T &x)
{
    int f = 0;
    cerr << '{';
    for (auto &i : x)
        cerr << (f++ ? "," : ""), __print(i);
    cerr << "}";
}
void _print() { cerr << "]\n"; }
template <typename T, typename... V>
void _print(T t, V... v)
{
    __print(t);
    if (sizeof...(v))
        cerr << ", ";
    _print(v...);
}
#ifndef ONLINE_JUDGE
#define debug(x...)               \
    cerr << "[" << #x << "] = ["; \
    _print(x)
#else
#define debug(x...)
#endif
#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
#define ull unsigned long long int
#define vll vector<ll>
#define vss vector<string>
#define vpp vector<pair<ll, ll>>
#define vpc vector<pair<ll, char>>
#define mll map<ll, ll>
#define mcc map<char, ll>
#define sll set<ll>
#define pb push_back
#define pob pop_back
#define gcd(x,y) __gcd(x,y)
#define all(x) x.begin(), x.end()
#define sorta(v) sort(all(v))
#define sortd(v) sort(all(v), greater<ll>())
#define add(v) accumulate(all(v))
#define pi M_PI
#define in insert
#define rmv erase
#define ff first
#define ss second
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
#define yes cout << "Yes" << '\n'
#define no cout << "No" << '\n'
#define nl cout << '\n'
#define _TERMINATED_ return 0

void run_case(){
    ll n, m, k; cin >> n >> m >> k;
    ll arr[n], brr[m];
    ll sum1 = 0, sum2 = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum1 += arr[i];
    }
    for(int i = 0; i < m; i++){
        cin >> brr[i];
        sum2 += brr[i];
    }
    sort(arr, arr+n);
    sort(brr, brr+m);

    int x = 5,cnt = 0;
    if(k % 2 == 0 ) x = 4 ;
       while(cnt < x){
        cnt++;
        if(cnt % 2 != 0 && arr[0] < brr[m-1]){
            sum1 -= arr[0];
            sum1 += brr[m-1];
            sum2 -= brr[m-1];
            sum2 += arr[0];

            swap(arr[0], brr[m-1]);
            sort(arr, arr+n);
            sort(brr, brr+m);
        }
        if(cnt % 2 == 0 && brr[0] < arr[n-1]){
            sum2 -= brr[0];
            sum2 += arr[n-1];
            sum1 -= arr[n-1];
            sum1 += brr[0];

            swap(brr[0], arr[n-1]);
            sort(arr, arr+n);
            sort(brr, brr+m);
        }
        if(cnt == x){
            break;
        }


    //     debug(sum1, sum2, cnt);
    // }
    // // debug(p.second);
    // sorta(v);
    // ll y = sum1;
    // // debug(y);
    // for(int i = 0; i < v.size(); i++){
    //     if(v[i] == mxsum1){
    //         if(i - 1 >= 0 && v[i-1] != mxsum1){
    //             y = v[i-1];
    //         }
    //         break;
    //     }
    // }
    // // debug(y);
    // if((p.second % 2 == 0 && k % 2 == 0) || (p.second % 2 != 0 && k % 2 != 0)){
    //     cout << mxsum1 << '\n';
    // }
    // else{
    //     cout << y << '\n';
    // }
    // return;
    }
    cout << sum1 << endl;
}
 
int32_t main()
{
    NEED_FOR_SPEED;
    int t = 1;
    cin >> t;
    while(t--){
        run_case();
    }
    _TERMINATED_;
}
// 3 5 2559324209
// 815814666 815814666 7188995
// 192030645 230900474 309067469 7188995 2190953541