#include <bits/stdc++.h>
using namespace std;

void __()
{

    int n;
    cin >> n;
    char ch;
    cin >> ch;
    string s;
    cin >> s;

    bool ok = true;
    for (auto el : s)
        if (el != ch)
            ok = false;

    if (ok)
    {
        cout << 0 << '\n';
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        ok = true;
        for (int j = i - 1; j < n; j += i)
        {
            if (s[j] != ch)
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            cout << 1 << '\n'
                 << i << "\n";
            return;
        }
    }

    cout << 2 << "\n" << n - 1 << " " << n << '\n';
}

int32_t main()
{

    ios_base::sync_with_stdio(NULL);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int _;
    cin >> _;
    while (_--)
        __();

    return 0;
}