// Problem Link: https://codeforces.com/contest/1744/problem/B

#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> void {

			int n, q; cin >> n >> q; int a[n];
			int sum = 0, even = 0, odd = 0;
			
			for (int i = 0; i < n; i++) {

				cin >> a[i];
				sum += a[i];

				if (a[i] & 1) odd++;
				else even++;

			}

			while (q--) {

				int x, y; cin >> x >> y;

				if (x) {
					sum += odd * y;

					cout << sum << "\n";

					if (y & 1) even += odd, odd = 0;
				}
				else {
					sum += even * y;

					cout << sum << "\n";

					if (y & 1) odd += even, even = 0;
				}
			}
	};

	int _; cin >> _;
	while (_--) __();

	return 0;
}