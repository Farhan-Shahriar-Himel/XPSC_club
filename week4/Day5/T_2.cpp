// Problem Link: https://www.codechef.com/problems/CS2023_PON

#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> string {

			int n, k; cin >> n >> k;
			vector < int > v;

			for (int i = 0; i < n; i++) {
				
				int x; cin >> x;
				if ((k & x) == k) v.push_back(x);
			}

			if (v.empty()) return "NO";

			int value = v[0];

			for (auto el: v) value &= el;

			if (value == k) return "YES";

			return "NO";
	};

	int _; cin >> _;
	while (_--)
		cout << __() << "\n";

	return 0;
}