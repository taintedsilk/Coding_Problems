void showpq(
    queue<ll> gq)
{
    queue<ll> g = gq;
    while (!g.empty()) {
        cout << '\t' << g.front();
        g.pop();
    }
    cout << '\n';
}

void solve()
{
    ll n, a;
    map<ll, queue<ll>>m;
    queue<ll>q;
    set<ll>s;
    set<ll>::iterator it;
    cin >> n;
    for (ll i = 0; i < n; i += 1) {
        cin >> a;
        m[a].push(i);
        s.insert(a);
    }
    for (it = s.begin(); it != s.end(); it++) q.push(*it);
    ll prev = m[q.front()].front();
    m[q.front()].pop();
    if (m[q.front()].size() > 0) q.push(q.front());
    q.pop();
    ll current;
    while(q.size() > 0) {

        cout << prev + 1 << " " << m[q.front()].front() + 1<< "\n";
        prev = m[q.front()].front();
        m[q.front()].pop();
        if (m[q.front()].size() > 0) q.push(q.front());
        q.pop();
    }
}
