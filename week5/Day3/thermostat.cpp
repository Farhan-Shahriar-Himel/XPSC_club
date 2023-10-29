// Problem Link: https://codeforces.com/problemset/problem/1759/C

#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> void {

			int l, r, x; cin >> l >> r >> x;
			int a, b ; cin >> a >> b;

			if (a == b) cout << 0 << "\n";

			else if (abs(a - b) >= x) cout << 1 << "\n";

			else if (r - (max(a, b)) >= x or (min(a, b)) - l >= x) cout << 2 << "\n";

			else if ((r - a >= x and b - l >= x) or (r - b >= x and a - l >= x)) 
				cout << 3 << "\n";

			else cout << -1 << endl;
	};

	int _; cin >> _;
	while (_--) __();

	return 0;
}