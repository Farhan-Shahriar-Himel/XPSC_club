#include<bits/stdc++.h>
using namespace std;

int __()
{
    int n; cin >> n; 
    map < int, int > freq;

    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        freq[x]++;
    }

    vector < int > freqs;
    for (auto el: freq)
    {
        freqs.push_back(el.second);
    }

    sort(freqs.begin(), freqs.end());

    int ans = INT_MAX;
    for (int i = 0; i < freqs.size(); i++)
    {
        int gtc = freqs.size() - i;
        int asc = freqs[i] * gtc;
        int nr = n - asc;
        ans = min(ans, nr);
    }

    return ans;
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