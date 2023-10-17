// Problem Link: https://codeforces.com/problemset/problem/1833/C

#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> void {

			int n; cin >> n; int a[n];
			for (int i = 0; i < n; i++) cin >> a[i];

			sort(a, a + n);

			if (a[0] % 2 == 1) {
				cout << "YES\n";
				return; 
			}

			for (auto &el: a) {
				if (el & 1) {
					cout << "NO\n";
					return;
				}
			}

			cout << "YES\n";
	};

	int _; cin >> _;
	while (_--) __();
}