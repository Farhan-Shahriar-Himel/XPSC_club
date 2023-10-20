// Problem Link: https://codeforces.com/problemset/problem/1421/A

#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> void {

			int a, b; 
			cin >> a >> b;

			int ans = a ^ b;
			cout << ans << "\n";
	};

	int _; cin >> _;
	while (_--) __();

	return 0;
}