#include <bits/stdc++.h>

using namespace std;



struct custom_hash
{
    static uint64_t splitmix64(uint64_t x)
    {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const
    {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};




typedef long long ll;
typedef bool bl;
typedef string str;
typedef unsigned long long ull;
typedef double db;
typedef unordered_map<ll, ll, custom_hash> llumap;
typedef unordered_set<ll, custom_hash> lluset;

#define it1 it->first
#define it2 it->second
#define f(i, n) for (ll i = 0; i < n; i += 1)
#define fu(i, start, end) for(ll i = start; i < end; i += 1)
#define fd(i, start, end) for (ll i = start; i >= end; i -= 1)
#define p(p1, p2) make_pair(p1, p2)
#define fi first
#define se second


int arr[202][202];
bl check[202][202] = {{0}};


ll n, m;
bl f = 0;
vector<ll>l1({-1, -1, -1, 0, 0, 1, 1, 1});
vector<ll>l2({-1, 0, 1, -1, 1, -1, 0, 1});

bl valid(ll r, ll c) {
    if (r <= 0 || c <= 0) return false;
    else if (r > n || c > n) return false;
    else return true;
}

void fin() {
    fu(i, 1, n + 1) fu(j, 1, m + 1) {if (arr[i][j]) return;}
   fu(i, 1, n + 1) {fu(j, 1, m + 1) {
        cout << bl[i][j] << " ";
   }
   cout << "\n";}
   f = 1;
   return;
}
void build(ll r, ll c, bl fi) {
        if (f == 1) return;
            
        check[r][c] = 1;
        
        f(i, 8) {
            arr[r + l1[i]][c + l2[i]] -= 1;
            if (arr[r + l1[i]][c + l2[i]] < 0) {
                fd(j, i, 0) {
                    arr[r + l1[i]][c + l2[i]] -= 1;
                }
                return;
            }
        }
        if (r == n && c == m) {fin(); return;}
        
        
        
        fu(j, c + 1, m + 1) build(r, j);
        
        fu(i, r + 1, n + 1) fu(j, 1, m + 1) build(i, j);
        

}
void solve()
{
    
    cin >> n >> m;
    fu(i, 1, n + 1) fu(j, 1, m + 1) cin >> arr[i][j];
    f(i, 202) {check[0][i] = 1;
     check[i][0] = 1;
     check[i][201] = 1;
     checl[201][i] = 1;}
     
     
    


}

int main()
{
    //freopen("INP.inp", "r" ,stdin);
    //freopen("OUT.out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long t = 1;

    cin >> t;
    for (int i = 0; i < t; i += 1)
    {
        solve();
        cout << "\n";
    }
    return 0;
}
