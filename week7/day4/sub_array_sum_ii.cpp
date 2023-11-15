#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(0); cout.tie(0);

    int n, k; cin >> n >> k;
    unordered_map < int, int > gp;

   	int a[n]; for (auto &el: a) cin >> el;

   	gp[0] = 1;
   	int ans = 0, sum = 0;
   	for (auto el: a) {

   		sum += el;
   		if (gp[sum - k])
   			ans += gp[sum - k];
   		gp[sum]++;

   	}

   	cout << ans << "\n";

    return 0;
} 