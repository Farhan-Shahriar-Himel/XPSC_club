// Problem Link: https://codeforces.com/contest/1790/problem/B

#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> void {

			int n, s, r; cin >> n >> s >> r;

			vector < int > ans;

			int lost = s - r;
			ans.push_back(lost);

			int val = r / (n - 1);
			int remain = r % (n - 1);

			while (ans.size() != n) {
				if (remain > 0) ans.push_back(val + 1);
				else ans.push_back(val);
				remain--;
			}

			for (auto &el: ans) cout << el << " ";
			cout << "\n";
	};

	int _; cin >> _;
	while (_--) __();

	return 0;
}