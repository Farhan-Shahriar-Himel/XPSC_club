// Problem Link: https://codeforces.com/problemset/problem/1722/D

#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> void {

			int n; cin >> n;
			string s; cin >> s;

			int mx = 0, chng = 0;
			vector < int > diff;
			int sum = 0;

			for (int i = 0; i < n; i++) {

				int lc = i;
				int rc = n - i - 1;

				if (s[i] == 'L') {

					mx = max(lc, rc);
					sum += mx;

					if (lc < rc) diff.push_back(rc - lc);
				}	
				else {

					mx = max(lc, rc);
					sum += mx;

					if (lc > rc) diff.push_back(lc - rc);
				}
			}


			sort(diff.begin(), diff.end(), greater < int > ());
			vector < int > ans(n, sum);

			int k = diff.size();
			for (int i = k - 2; i >= 0; i--) {

				int val = ans[i + 1] - diff.back();
				ans[i] = val;
				diff.pop_back();
				
			}

			for (auto &el: ans) cout << el << " ";
			cout << "\n";
	};

	int _; cin >> _;
	while (_--) __();

	return 0;
}