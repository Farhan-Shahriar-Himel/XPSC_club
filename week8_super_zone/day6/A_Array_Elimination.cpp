#include <bits/stdc++.h>
using namespace std;

int __() 
{
    int n; cin >> n; int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];    

    vector < int > bits(32);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 32; j++)
        {
            if (a[i] & (1 << j))
            {
                bits[j]++;
            }
        }
    }

    cout << 1 << " ";
    for (int i = 2; i <= n; i++)
    {
        bool print = true;
        for (int j = 0; j < 32; j++)
        {
            if (bits[j] % i)
            {
                print = false;
                break;
            }
        }
        if (print) cout << i << " ";
    }
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

    return 0;
}