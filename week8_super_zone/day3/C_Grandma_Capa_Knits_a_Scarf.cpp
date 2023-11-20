#include <bits/stdc++.h>
using namespace std;

int __()
{
    int n; cin >> n;
    string s; cin >> s;

    int ans = INT_MAX;
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        int cnt = 0, l = 0, r = n - 1;
        while (l < r)
        {
            if (s[l] == s[r]) l++, r--;
            else if (s[l] == ch) l++, cnt++;
            else if (s[r] == ch) r--, cnt++;
            else 
            {
                cnt = INT_MAX;
                break;
            }
        }
        ans = min(ans, cnt);
    }
    
    if (ans == INT_MAX) return -1;
    
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(nullptr); cout.tie(nullptr);

    int _; cin >> _;
    while (_--)
        cout << __() << "\n";

    return 0;
}