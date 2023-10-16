// Problem Link: https://codeforces.com/problemset/problem/1833/B

#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> void {

			int n, k; cin >> n >> k;
			
			vector < pair < int, int > > a(n);
			vector < int > b(n), c(n);

			for (int i = 0; i < n; i++) {
				cin >> a[i].first;
				a[i].second = i;
			}

			for (int i = 0; i < n; i++) cin >> b[i];

			sort(a.begin(), a.end());
			sort(b.begin(), b.end());

			for (int i = 0; i < n; i++) c[a[i].second] = b[i];

			for (auto &el: c) cout << el << " ";
			cout << "\n";

	};

	int _; cin >> _;
	while (_--) __();

	return 0;
}