#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> void {

			int n; cin >> n;

			cout << ((n & (n - 1)) == 0 ? "NO": "YES") << "\n";
	};

	int _; cin >> _;
	while (_--) __();

	return 0;
}