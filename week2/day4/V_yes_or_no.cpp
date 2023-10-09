// Problem Link : https://codeforces.com/problemset/problem/1703/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> void {

			string s; cin >> s;
			transform(s.begin(), s.end(), s.begin(), ::toupper);
			cout << (s == "YES" ? s : "NO") << "\n";
	};

	int _; cin >> _;
	while (_--) __();
	return 0;
}
