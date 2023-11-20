#include <bits/stdc++.h>
using namespace std;

string __() 
{
    int n; cin >> n; int a[n + 1];
    for (int i = 1; i <= n; i++) cin >> a[i];

    for (int i = 1; i <= n; i++)
    {
        int j = i + 1;
        bool ok = false;
        while (j != 1)
        {
            if (a[i] % j != 0)
            {
                ok = true;
                break;
            }
            j--;
        }
        if (!ok) return "NO";
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