#include <bits/stdc++.h>
using namespace std;
#define int long long

int __()
{
    int n, k; cin >> n >> k; 
    vector < int > pos, neg; 
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        if (x < 0)
            neg.push_back(abs(x));
        else 
            pos.push_back(x);
    }

    sort(pos.begin(), pos.end(), greater < int > ());
    sort(neg.begin(), neg.end(), greater < int > ());

    int distance = 0;
    for (int i = 0; i < pos.size(); i += k)
        distance += pos[i] * 2;

    for (int i = 0; i < neg.size(); i += k)
        distance += neg[i] * 2;

    if (neg.size() and pos.size())
        distance -= max(neg[0], pos[0]);
    else if (pos.size())
        distance -= pos[0];
    else
        distance -= neg[0]; 

    return distance;
}

int32_t main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(nullptr); cout.tie(nullptr);

    int _; cin >> _;
    while (_--)
        cout << __() << '\n';

    return 0;
}