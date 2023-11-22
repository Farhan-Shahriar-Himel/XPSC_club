#include <bits/stdc++.h>
using namespace std;

int __()
{
    int n; cin >> n; 
    vector < int > a(n + 7), extra;
    map < int , bool > vis;

    for (int i = 1; i <= n; i++)
    {
        int x; cin >> x;
        if (x > n or vis[x]) extra.push_back(x);
        else 
        {
            a[x] = x;
            vis[x] = 1;
        }
    }

    sort(extra.begin(), extra.end(), greater < int > ());
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 0)
        {
            int el = extra.back();
            extra.pop_back();
            a[i] = el;
        }
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) 
    {
        if (a[i] != i)
        {
            int rem = (a[i] - 1) / 2;
            if (i > rem) return -1;
            ans++;
        }
    }
    return ans;
}

int32_t main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(nullptr); cout.tie(nullptr);

    int _; cin >> _;
    while (_--)
        cout << __() << "\n";

    return 0;
}