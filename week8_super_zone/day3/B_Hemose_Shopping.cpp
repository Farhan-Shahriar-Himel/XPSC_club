#include <bits/stdc++.h>
using namespace std;

void __()
{
    int n, x; cin >> n >> x;
    vector < int > v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    if (is_sorted(v.begin(), v.end()) or x <= n / 2)
    {
        cout << "YES\n";
        return;
    }

    vector < int > vc = v;
    sort(vc.begin(), vc.end());

    for (int i = 0; i < n; i++)
    {
        if (v[i] != vc[i])
        {
            if (i >= n - x and i < x)
            {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(nullptr); cout.tie(nullptr);

    int _; cin >> _;
    while (_--)
        __();

    return 0;
}