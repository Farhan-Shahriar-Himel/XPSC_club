//Problem Link: https://codeforces.com/problemset/problem/1604/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sq(n) (n)*(n);

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	auto __ = [&]() -> void {

			int n; cin >> n;
			int ans = 0;
			for (int i = 1; i <= n; i++) {
				int x; cin >> x;
				if (x > i) {
					int need = x - i ;
					ans = max(ans, need);
				}
			}
			cout << ans << "\n";
	};

	int _; cin >> _;
	while (_--) __();
	return 0;
}