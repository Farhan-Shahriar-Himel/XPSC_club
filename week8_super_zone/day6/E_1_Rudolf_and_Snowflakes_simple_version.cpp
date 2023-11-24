#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(nullptr); cout.tie(nullptr);

    int N = 1e6;
    map < int, int > mp;
    for (int i = 2; i <= N; i++)
    {
        int tot = 1, sum = 1, cnt = 1;
        while (tot <= N)
        {
            if (cnt > 2) 
                mp[sum] = true;   
            tot *= i;
            sum += tot;
            cnt++;      
        }
    }

    auto __ = [&]() -> string {

        int n; cin >> n;

        if (mp[n])
            return "YES";
        else 
            return "NO";

    };

    int _; cin >> _;
    while (_--)
        cout << __() << '\n';

    return 0;
}