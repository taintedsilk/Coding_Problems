// find lowest element in weighted tree
void dfs(ll a, ll &price)
{
    found[a] = 1;
    price = min(price, arr[a]);
    if (m.find(a) != m.end())
    {
        for (ll i = 0; i < m[a].size(); i ++)
        {
            if (!found[m[a][i]]) dfs(m[a][i], price);
        }
    }
}
