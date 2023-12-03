#include <bits/stdc++.h>
using namespace std;
#define int long long

int __()
{
    int n; cin >> n;
    int l = 1, r = 2e9, ans = 0;
    while (l <= r)
    {
        int mid = (r + l) / 2ll;
        
        if (mid * (mid - 1) / 2ll <= n)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    int rest = n - (ans * (ans - 1)) / 2;

    return rest + ans;
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