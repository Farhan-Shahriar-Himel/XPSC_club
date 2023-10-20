// Problem Link: https://codeforces.com/contest/1759/problem/B

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define sq(n) (n)*(n)

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> void {

			int n, s; cin >> n >> s;
			int sum = 0, mx = 0;
			for (int i = 0; i < n; i++) {
				int x; cin >> x;
				sum += x;
				mx = max(mx, x);
			}

			s += sum;
			
			for (int i = mx; i <= s; i++) {
				if ((sq(i) + i) == 2 * s) {
					cout << "YES\n";
					return;
				}
			}

			cout << "NO\n";
	};

	int _; cin >> _;
	while (_--) __();

	return 0;
}