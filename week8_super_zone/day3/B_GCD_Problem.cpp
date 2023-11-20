#include <bits/stdc++.h>
using namespace std;
#define int long long

void __() 
{
    int n; cin >> n;
    n--;
    if (n & 1)
    {
        cout << 2 << " " << n - 2 << " " << 1 << "\n";
    }
    else
    {
        int a = (n / 2) - 1;
        int b = (n / 2) + 1;

        if ((a & 1) and (b & 1))
        {
            cout << a << " " << b << " " << 1 << "\n";
        }
        else
        {
            a--, b++;
            cout << a << " " << b << " " << 1 << '\n';
        }
    }
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