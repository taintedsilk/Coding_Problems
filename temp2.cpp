#include <bits/stdc++.h>

using namespace std;

#define it1 it->first
#define it2 it->second
#define f(i, n) for (ll i = 0; i < n; i += 1)
#define fu(i, start, end) for(ll i = start; i < end; i += 1)
#define fd(i, start, end) for(ll i = start; i >= end; i-=1)
#define p(p1, p2) make_pair(p1, p2)
#define fi first
#define se second

//struct custom_hash
//{
//    static uint64_t splitmix64(uint64_t x){x += 0x9e3779b97f4a7c15;x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;x = (x ^ (x >> 27)) * 0x94d049bb133111eb;return x ^ (x >> 31);}
//    size_t operator()(uint64_t x) const{static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();return splitmix64(x + FIXED_RANDOM);}
//};
typedef long long ll;
typedef bool bl;
typedef string str;
typedef unsigned long long ull;
typedef double db;
//typedef unordered_map<ll, ll> ullmap;

ll arr[100];
ll dp[10000][10000];
str a, b;

ll bruh(ll i, ll j) {
    if (i == 0) return j;
    else if (j == 0) return i;
    else if (dp[i][j]) return dp[i][j];
    else if (a[i] == b[j]) return bruh(i - 1, j - 1);
    else return dp[i][j] = min({bruh(i - 1,j), bruh(i - 1,j - 1), bruh(i,j - 1)}) + 1;    
}




void solve()
{
    cin >> a >> b;
    cout << bruh(a.size() - 1, b.size() - 1);
    ll i = a.size() - 1, j = b.size() - 1;
    vector<pair<char, ll>>ans;
    while (i != 0 && j != 0) {
        if (dp[i][j] == dp[i - 1][j] + 1) {ans.push_back(p('I'), i); i -= 1;}
        else if (dp[i][j] == dp[i - 1][j - 1] + 1) {ans.push_back(p('R'), i); i -= 1; j -= 1;}
        else if (dp[i][j] == dp[i - 1][j - 1]) {i -= 1; j -= 1;} 
        
    }
}

int main()
{
    //freopen("card.inp", "r" ,stdin); freopen("card.out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long t = 1;

    //cin >> t;
    for (int i = 0; i < t; i += 1)
    {
        solve();
        cout << "\n";
    }
    return 0;
}
