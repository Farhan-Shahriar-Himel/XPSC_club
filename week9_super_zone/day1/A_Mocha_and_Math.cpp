#include <bits/stdc++.h>
using namespace std;

int __()
{
    int n; cin >> n; int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    int ans = a[0];
    for (int i = 1; i < n; i++) ans &= a[i];

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