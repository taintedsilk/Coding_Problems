#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
using namespace std;

struct qhash
{
    static uint64_t splitmix64(uint64_t x)
    {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x)
    const
    {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

//unordered_set<double, custom_hash>s;
#define MOD 1000000007


typedef long long ll;
typedef bool bl;
typedef string str;
typedef unsigned long long ull;
typedef double db;
typedef long double ldb;
typedef unordered_map<ll, ll, qhash> llumap;
typedef map<ll, ll> llmap;

#define it1 it->first
#define it2 it->second
#define fi first
#define se second
#define mp(p1, p2) make_pair(p1, p2)
#define f(i, n) for (ll i = 0; i < n; i += 1)
#define F(i, n, inc) for (ll i = 0; i < n; i += inc)
#define fu(i, start, end) for (int i = start; i < end; i += 1)
#define Fu(i, start, end, inc) for (int i = start; i < end; i += inc)
#define fd(i, start, end) for (int i = start; i >= end; i -= 1)
#define Fd(i, start, end, inc) for (int i = start; i >= end; i -= inc)
#define itr iterator
#define BIT(var,pos) ((var) & (1<<(pos)))


vector<str>get_line(const str &a)
{
    vector<str>v;
    v.push_back("");
    f(i, a.size())
    {
        if (isalpha(a[i]))
            v.back().push_back(a[i]);
        else if (v.back().size())

            v.push_back("");

    }


    //f(i, v.size()) cout << v[i] << " ";

    return v;
}
vector<vector<int>>ans;
gp_hash_table<ll, vector<ll>, qhash>mp, mp2;
bl visited[100001], visited2[100001];
stack<ll>s;
void dfs(ll i)
{
    if (!visited[i])
    {
        visited[i] = 1;
        f(j, mp[i].size())
        {
            dfs(mp[i][j]);
        }
        s.push(i);
    }

}
void dfs2(ll i)
{
    if (!visited2[i])
    {
        visited2[i] = 1;
        ans.back().push_back(i);
        f(j, mp2[i].size())
        {
            dfs2(mp2[i][j]);
        }

    }
    //cout << 1;
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    fill(visited, visited + n + 1, 0);
    fill(visited2, visited2 + n + 1, 0);
    ll a, b;
    f(i, m)
    {
        cin >> a >> b;
        mp[a].push_back(b);
        mp2[b].push_back(a);
    }
    fu(i,1, n + 1)
    {
        dfs(i);

    }
    //vector<vector<int>>ans;
    while(s.size())
    {
        ll top = s.top();
        //cout << top << " ";
        s.pop();
        if (!visited2[top])
        {
            vector<int>temp;
            ans.push_back(temp);
            dfs2(top);
        }

    }
    //cout << "\n";
    f(i, ans.size()) {

        f(j, ans[i].size())

    }

}










int main()
{
    //freopen("TALENT.INP", "r" ,stdin);
    //freopen("TALENT.OUT", "w", stdout);
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
