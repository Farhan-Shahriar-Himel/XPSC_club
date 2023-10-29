// Problem Link: https://codeforces.com/problemset/problem/1744/A

#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> string {

			int n; cin >> n; int a[n];

			for (int i = 0; i < n; i++) cin >> a[i];

			string s; cin >> s;

			for (int i = 0; i < n; i++) {

				int num = a[i];
				char ch = s[i];

				for (int j = 0; j < n; j++) {
					if (a[j] == num and s[j] != ch) {
						return "NO";
					}
				}
			}

			return "YES";
	};

	int _; cin >> _;
	while(_--) cout << __() << "\n";

	return 0;
}