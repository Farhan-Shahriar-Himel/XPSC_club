#include <bits/stdc++.h>
using namespace std;

void __()
{
    int n; cin >> n; int a[n], b[n];

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    vector < int > mn, mx;

    int ind = 0;
    for (int i = 0; i < n; i++)
    {
        while (ind < n and a[i] > b[ind]) ind++;
        mn.push_back(b[ind] - a[i]);
    }

    ind = n - 1;
    for (int i = n - 1; i >= 0; i--)
    {
        mx.push_back(b[ind] - a[i]);
        if (a[i] > b[i - 1]) ind = i - 1;
    }

    for (auto el: mn) cout << el << " ";
    cout << "\n";
    reverse(mx.begin(), mx.end());
    for (auto el: mx) cout << el << " ";
}

int32_t main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(nullptr); cout.tie(nullptr);

    int _; cin >> _;
    while (_--)
    {
        __();
        cout << "\n";
    }
}