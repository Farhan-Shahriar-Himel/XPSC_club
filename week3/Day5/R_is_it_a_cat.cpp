// Problem Link: https://codeforces.com/problemset/problem/1800/A

#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> void {

			int n; cin >> n;
			string s; cin >> s;
			transform(s.begin(), s.end(), s.begin(), :: tolower);

			string ans;
			for (auto ch: s) {
				if (ans.size() == 0 or ans.back() != ch)
					ans += ch;
			}
			
			cout << (ans == "meow" ? "YES": "NO") << "\n";
	};

	int _; cin >> _;
	while (_--) __();

	return 0;
}