// Problem Link: https://codeforces.com/problemset/problem/1772/B

#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> void {

			int mx = INT_MIN, mn = INT_MAX;
			int x1, y1, x2, y2;

			for (int i = 0; i < 2; i++) {
				for (int j = 0; j < 2; j++) {
					
					int val; cin >> val;

					if (val > mx) {
						mx = val;
						x1 = i, y1 = j;
					} 

					if (val < mn) {
						mn = val;
						x2 = i, y2 = j;
					}
				}
			}

			cout << (x1 + x2 == y1 + y2 ? "YES": "NO") << "\n";
	};

	int _; cin >> _;
	while (_--) __();

	return 0;
}