// Problem Link : https://codeforces.com/problemset/problem/1714/C

#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> void {

			int n; cin >> n;

			int dig = min(n, 9ll), sum = 0;
			vector < int > v;

			while (sum < n and dig != 0) {

				v.push_back(dig);
				sum += dig--;
				int diff = n - sum;

				if (diff < dig) dig = diff;
			}

			reverse(v.begin(), v.end());

			for (auto el: v) cout << el;
			cout << "\n";
	};

	int _; cin >> _;
	while (_--) __();

	return 0;
}