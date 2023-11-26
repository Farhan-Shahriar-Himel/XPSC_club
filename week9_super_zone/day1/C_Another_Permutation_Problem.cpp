#include <bits/stdc++.h>
using namespace std;
#define int long long

int __() 
{
    int n; cin >> n;
    int ans = 0;
    for (int i = 0; i <= n; i++)
    {
        int sum = 0, mx = 0;
        for (int j = 1; j <= i; j++)
        {
            sum += j * j;
            mx = max(mx, j * j);
        }
        
        int ind = n;
        for (int j = i + 1; j <= n; j++)
        {
            sum += j * ind;
            mx = max(mx, j * ind);
            ind--;
        }
        ans = max(ans, sum - mx);
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