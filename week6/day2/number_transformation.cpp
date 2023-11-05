#include<bits/stdc++.h>
using namespace std;

int32_t main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> void {

			int x, y; cin >> x >> y;
			if (y % x) cout << 0 << " " << 0 << endl;
			else cout << 1 << " " << y / x << endl;
			
	};

	int _; cin >> _;
	while (_--) 
		__();

	return 0;
}