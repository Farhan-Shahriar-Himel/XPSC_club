// Problem Link: https://codeforces.com/problemset/problem/1744/D

#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> int {

			int n; cin >> n;
			int tws = 0;

			for (int i = 0; i < n; i++) {
				
				int x; cin >> x;

				while (x % 2 == 0) {

					tws++; 
					x /= 2;
				}
			}

			if (tws >= n) return 0;

			vector < int > v;
			int ans = 0;

			for (int i = 2; i <= n; i++) {

				int x = i, cnt = 0;

				while (x % 2 == 0) {

					cnt++;
					x /= 2;
				}

				v.push_back(cnt);

			}

			sort(v.begin(), v.end(), greater < int > ());

			for (auto el: v) {

				tws += el;
				ans++;
				if (tws >= n) return ans;
			}

			return -1;
	};

	int _; cin >> _;
	while (_--) 
		cout << __() << "\n";

	return 0;
}