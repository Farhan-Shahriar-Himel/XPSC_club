// Problem Link: https://codeforces.com/problemset/problem/1800/D

#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> void {

			int n; cin >> n;
			string s; cin >> s;

			int cnt = 0;

			for (int i = 0; i < n - 2; i++) {
				if (s[i] == s[i + 2])
					cnt++;
			}

			cout << n - 1 - cnt << "\n";
	};

	int _; cin >> _;
	while (_--) __();

	return 0;
}