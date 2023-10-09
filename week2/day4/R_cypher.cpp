// Problem Link: https://codeforces.com/problemset/problem/1703/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> void {

			int n; cin >> n; int a[n];
			for (int i = 0; i < n; i++) cin >> a[i];

			int k = 0;
			while (n--) {
				int x; cin >> x;
				string s; cin >> s;
				for (int i = 0; i < x; i++) {
					if (s[i] == 'D') {
						if (a[k] != 9) a[k]++;
						else a[k] = 0;
					} else {
						if (a[k] != 0) a[k]--;
						else a[k] = 9;
					}
				}
				cout << a[k++] << " ";
			}
			cout << "\n";
	};

	int _; cin >> _;
	while (_--) __();
	return 0;
}