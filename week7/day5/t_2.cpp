// https://codeforces.com/problemset/problem/1881/D

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

template <typename T>
using o_set = tree <
    T, null_type, less_equal< T >, rb_tree_tag,
    tree_order_statistics_node_update
>;

string __() {

    int n; cin >> n;
    gp_hash_table < int, int > freq;

    for (int i = 0; i < n; i++) {
        
        int x; cin >> x;
        for (int j = 2; j * j <= x; j++) 
            while (x % j == 0) 
                freq[j]++, x /= j;
        if (x > 1) freq[x]++;

    }

    for (auto el: freq)
        if (el.second % n != 0)
            return "NO";
    
    return "YES";
    
}

int32_t main() {
    
    ios_base::sync_with_stdio(NULL);
    cin.tie(nullptr); cout.tie(nullptr);

    int O_o; cin >> O_o;
    while (O_o --)
        cout << __() << "\n";

    return 0;
    
}