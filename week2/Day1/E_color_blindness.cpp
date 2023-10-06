// Problem Link: https://codeforces.com/problemset/problem/1722/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> void {

			int n; cin >> n;
			string s1, s2; cin >> s1;
			cin >> s2;

			bool ok = true;
			for (int i = 0; i < n; i++) {
				if (s1[i] == 'B' or s1[i] == 'G') s1[i] = 'X';
				if (s2[i] == 'B' or s2[i] == 'G') s2[i] = 'X';
			}

			cout << (s1 == s2 ? "YES" : "NO") << "\n";
	};	

	int _; cin >> _;
	while (_--) __();
	return 0;
}