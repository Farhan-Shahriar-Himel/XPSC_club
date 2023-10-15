// Problem Link: https://codeforces.com/problemset/problem/1790/C

#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> void {

		int n; cin >> n;
		vector < pair < int, int > > vp(n + 1);

		for (int i = 0; i <= n; i++) vp[i].first = INT_MIN, vp[i].second = INT_MAX;

		for (int i = 1; i <= n; i++) {

			for (int j = 1; j <= n - 1; j++) {
				
				int x; cin >> x;

				int mx = max(j, vp[x].first);
				int mn = min(j, vp[x].second);

				vp[x].first = mx;
				vp[x].second = mn;

			}
		}

		
		vector < int > ans(n + 1);
		for (int i = 1; i <= n; i++) {

			int ind = -1;

			if (vp[i].first == INT_MIN and vp[i].second == INT_MAX) continue;

			if (vp[i].second == vp[i].first and vp[i].first != 1) ind = vp[i].first + 1;
			else ind = vp[i].first;
			
			ans[ind] = i;
		}

		for (int i = 1; i <= n; i++) cout << ans[i] << " ";
		cout << "\n";
	};

	int _; cin >> _;
	while (_--) __();

	return 0;
}