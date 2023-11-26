#include <bits/stdc++.h>
using namespace std;
#define int long long

int __()
{
    int n; cin >> n; int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    vector < bool > vis(n);
    int ans = 0;
    for (int i = 31; i >= 0; i--)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++) 
        {
            if ((a[j] & (1 << i)) and !vis[j])
            {
                cnt++;
                vis[j] = true;
            }
        }
        ans += (cnt * (cnt - 1)) / 2;
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