// Problem Link: https://codeforces.com/problemset/problem/1759/A

#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	string final;
	for (int i = 0; i < 18; i++) 
		final += "Yes";	

	auto __ = [&]() -> void {

			string s; cin >> s;

			if (final.find(s) != -1) cout << "YES\n";
			else cout << "NO\n";
	};

	int _; cin >> _;
	while (_--) __();

	return 0;
}