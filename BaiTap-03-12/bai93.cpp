#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef bool bol;
typedef string str;
typedef unsigned long long ull;

#define f(start,end,change) for(long long i=start;i<end;i+= change)

struct Team
{
    ll n, o, v;
};
Team t[10];
void solve()
{
    ll k;
    cin >> k;
    str a;
    for (ll i = 0; i < k; i += 1)
    {
        cin >> a;
        stringstream ss;
        ll j = 0;
        for (; j < a.size(); j += 1)
        {
            if (a[j] != '-') ss << a[j];
            else
            {
                ss >> t[i].o;
                break;
            }
        }
        ss.clear();
        for (j += 1; j < a.size(); j += 1)
        {
            if (a[j] != '-') ss << a[j];
            else
            {
                ss >> t[i].v;
                break;
            }
        }
        ss.clear();
        for (j += 1; j < a.size(); j += 1)
        {
            ss << a[j];
        }
        ss >> t[i].n;

    }

    ll m;
    cin >> m;
    ll ovn = 0, ov = 0, vn = 0, on = 0, o = 0, v = 0, n = 0;
    for (ll i = 0; i < m; i+= 1) {
        cin >> a;
        bool to = 0, tv = 0, tn = 0;
        for (ll i = 0; i < a.size(); i += 1) {
            if (a[i] == 'O') to = 1;
            else if (a[i] == 'V') tv = 1;
            else tn = 1;
        }
        if (to && tv && tn) ovn ++;
        else if(to && tv) ov++;
        else if(to && tn) on++;
        else if(tv && tn) vn++;
        else if(to)o ++;
        else if(tv)v ++;
        else n++;
    }
    //cout << ovn << " " << ov << " " << on << " " << vn << " " << o << " " << v << " " << n << " \n";
    ll to, tv, tn;
    for (ll i = 0; i < k ; i ++) {
        ll found = false;
        for (ll a = 0; a <= ov; a ++) {
            for (ll b = 0; b <= vn; b ++) {
                for (ll c = 0; c <= on; c ++) {
                    to = max((ll)0, t[i].o -o-a-c);
                    tv = max((ll)0, t[i].v -v-(ov-a)-b);
                    tn = max((ll)0, t[i].n -n-(vn-b)-(on-c));
                    if(to+tv+tn <= ovn) {found = true;}
                }
            }
        }
        if (found) cout << "DA" << "\n";
        else cout << "NE" << "\n";

    }
}
int main()
{
    freopen("INP.txt", "r" ,stdin);
    freopen("OUT.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //long long t;
    //cin >> t;
    for (int i = 0; i < 1; i += 1)
    {
        solve();
        cout << "\n";
    }
    return 0;
}
