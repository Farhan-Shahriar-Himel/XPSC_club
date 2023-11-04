#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> string {

		int a, b, c, x, y; cin >> a >> b >> c >> x >> y;
		x = max(0ll, x - a);
		y = max(0ll, y - b);

		if (x + y <= c) return "YES";
		return "NO";

	};

	int _; cin >> _;
	while (_--) 
		cout << __() << endl;

	return 0;

}