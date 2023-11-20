#include<bits/stdc++.h>
using namespace std;

int32_t main() 
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(nullptr); cout.tie(nullptr);

    int n; cin >> n;

    string s = "aabb";
    string ans = "";
    for (int i = 0; i < n; i++) 
    {
        ans += s[i % 4];
    }

    cout << ans << "\n";

    return 0;
}