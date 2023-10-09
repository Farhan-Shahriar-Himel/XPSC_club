// Problem Link : https://codeforces.com/problemset/problem/1676/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int convert(string a, string b) {
	int cnt = 0;
	for (int i = 0; i < a.size(); i++) {
		cnt += abs(a[i] - b[i]);
	}
	return cnt;
}

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> void {

			int n, m; cin >> n >> m;
			vector < string > vs(n);
			for (int i = 0; i < n; i++) cin >> vs[i];

			int ans = INT_MAX;
			for (auto &cmp: vs) {
				for (auto &el: vs) {
					if (&cmp == &el) continue;
					ans = min(ans, convert(cmp, el));
				}
			}
			cout << ans << "\n";
	};

	int _; cin >> _;
	while (_--) __();
	return 0;
}