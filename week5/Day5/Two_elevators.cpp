#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> int {

		int a, b, c; cin >> a >> b >> c;
		int t1 = a - 1;
		int t2 = abs(b - c) + (c - 1);

		if (t1 < t2) return 1;
		else if (t2 < t1) return 2;
		return 3;

	};

	int _; cin >> _;
	while (_--) 
		cout << __() << "\n";

	return 0;

}