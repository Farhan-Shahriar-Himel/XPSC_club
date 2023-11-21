#include <bits/stdc++.h>
using namespace std;

string __()
{
    int n; cin >> n; int a[n], b[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    sort(a, a + n); sort(b, b + n);

    for (int i = 0; i < n; i++)
    {
        if (b[i] - a[i] > 1 or a[i] > b[i])
        {
            return "NO";
        }

    }

    return "YES";
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