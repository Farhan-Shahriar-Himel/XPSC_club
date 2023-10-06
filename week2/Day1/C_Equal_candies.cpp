// Problem Link: https://codeforces.com/problemset/problem/1676/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> void {

			int n; cin >> n; ll a[n], mn_ = 1e18 + 7, sum = 0;
			for (int i = 0; i < n; i++) {
				cin >> a[i];
				mn_ = min(a[i], mn_);
			}
			for (int el: a) sum += el - mn_;
			cout << sum << "\n";
	};

	int _; cin >> _;
	while (_--) __();
	return 0;
}