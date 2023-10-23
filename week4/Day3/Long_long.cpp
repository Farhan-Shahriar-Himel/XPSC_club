// Problem Link: https://codeforces.com/problemset/problem/1843/B

#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> void {

			int n; cin >> n;
			vector < int > v;

			for (int i = 0; i < n; i++) {

				int x; cin >> x;
				if (x) v.push_back(x);
			}

			int ans = 0, sum = 0;
			bool running = false;
			for (auto el: v) {

				if (el > 0) running = false; 
				else if (el < 0 and !running) ans++, running = true;

				sum += abs(el);
			}

			cout << sum << " " << ans << "\n";
	};

	int _; cin >> _;
	while (_--) __();

	return 0;
}