#include<bits/stdc++.h>
using namespace std;

int32_t main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> void {

		int n; cin >> n;
		int b = (n + 2) / 3 + 1;
		int a = (n + 1) / 3;
		int c = n - (b + a);

		cout << a << " " << b << " " << c << endl;

	};

	int _; cin >> _;
	while (_--) __();

	return 0;

}