// Problem Link: https://codeforces.com/problemset/problem/1722/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> void {

			int n; cin >> n;
			string name = "Timru";
			string s; cin >> s;
	
			sort(s.begin(), s.end());

			cout << (name == s ? "YES" : "NO") << "\n";
	};

	int _; cin >> _;
	while (_--) __();
	return 0;
}