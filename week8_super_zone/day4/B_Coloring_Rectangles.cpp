#include <bits/stdc++.h>
using namespace std;

int __()
{
    int n, m; cin >> n >> m;
    int x = n * m;

    if (x % 3 == 0)
        return x / 3;
    else 
        return (x / 3) + 1;
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