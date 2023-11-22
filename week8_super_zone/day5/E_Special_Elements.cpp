#include <bits/stdc++.h>
using namespace std;

int __() 
{
    int n; cin >> n; int a[n];
    vector < bool > mp(n * n + 7);

    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i++) 
    {
        int sum = a[i];
        for (int j = i + 1; j < n; j++)
        {
            sum += a[j];
            mp[sum] = 1;
        }
    }
    
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (mp[a[i]])
        {
            ans++;
        }
    }

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