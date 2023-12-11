#include <bits/stdc++.h>
using namespace std;
#define int long long

bool isPowerOf_2(int x)
{
    if (x <= 0) return false;
    return ((x & (x - 1)) == 0);
}

void __()
{
    int n; cin >> n;
    vector < int > ans;

    ans.push_back(n);
    int m = 1;
    for (int i = 0; i <= 64; i++)
    {
        if (n & (1 << i))
        {
            n = n - m;
            ans.push_back(n);
        }

        if (isPowerOf_2(n)) break;

        m *= 2;
    }

    while (n > 1)
    {
        n /= 2;
        ans.push_back(n);
    }

    cout << ans.size() << "\n";
    for (auto el: ans) cout << el << " ";
}

int32_t main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(nullptr); 
    cout.tie(nullptr);

    int _; cin >> _;
    while (_--)
    {
        __();
        cout << '\n';
    }

    return 0;
}