#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> void {

			int k, n; cin >> k >> n;

			vector < int > ans;

			int shuru = 1, diff = 1;

			for (int i = 1; i <= k; i++) {

				ans.push_back(shuru);

				int nxt = shuru + diff;
				int rakha_jabe = n - nxt;
				int rakhte_parbo = k - i - 1;

				if (rakha_jabe >= rakhte_parbo) shuru += diff;
				else shuru++;

				diff++;
			}

			for (auto &el: ans) cout << el << " ";
			cout << "\n";
	};

	int _; cin >> _;
	while (_--) __();

	return 0;
}