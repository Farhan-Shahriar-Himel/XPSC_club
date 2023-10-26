// Problem Link: https://www.codechef.com/problems/BOX95

#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> int {

			int n; cin >> n; vector < int > a(n);
			for (int i = 0; i < n; i++) cin >> a[i];

			sort(a.begin(), a.end(), greater < int > ());

			int xr = 0, ans = 0;

			for (auto el: a) {

				if (el > xr) xr = el, ans++;
				else xr ^= el;

			}

			return ans;
	};

	int _; cin >> _;
	while (_--)
		cout << __() << "\n";

	return 0;
}