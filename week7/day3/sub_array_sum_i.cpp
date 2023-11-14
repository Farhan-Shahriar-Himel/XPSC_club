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

int32_t main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(0); cout.tie(0);

    int n, k; cin >> n >> k;
    gp_hash_table < int, int > gp;

   	int a[n]; for (auto &el: a) {
   		cin >> el;
   		gp[el]++;
   	} 

   	gp[0] = 1;
   	int ans = 0, sum = 0;
   	for (auto el: a) {

   		sum += el;
   		if (gp.find(sum - k) != gp.end())
   			ans += gp[sum - k];
   		gp[sum]++;

   	}

   	cout << ans << "\n";

    return 0;
} 