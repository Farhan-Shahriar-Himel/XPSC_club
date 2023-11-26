#include <bits/stdc++.h>
using namespace std;

vector < vector < char > > permutations;
vector < char > permut;
map < char , bool > vis;

void make(int n, int k)
{
    if (permutations.size() == k) return;

    if (permut.size() == n)
    {
        permutations.push_back(permut);
        return;
    }

    for (char ch = 'A'; ch < char('A' + n); ch++)
    {
        if (vis[ch]) continue;
        vis[ch] = 1;
        permut.push_back(ch);
        make(n, k);
        vis[ch] = 0;
        permut.pop_back();
    }
}

void __()
{
    int n, k; cin >> n >> k;

    make(n, k);

    for (auto ele: permutations)
    {
        for (auto el : ele)
        {
            cout << el;
        }
        cout << "\n";
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(nullptr); cout.tie(nullptr);

    int _; cin >> _;
    int ind = 0;
    while (_--)
    {
        permutations.clear();
        permut.clear();
        cout << "Case " << ++ind << ":\n";
        __();
    }
    
    return 0;
}