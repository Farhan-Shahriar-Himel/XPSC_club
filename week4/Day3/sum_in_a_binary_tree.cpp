#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> int {

			int n; cin >> n;

			int sum = 0;
			while (n) sum += n, n /= 2;

			return sum;
	};

	int _; cin >> _;
	while (_--)
		cout << __() << "\n";

	return 0;
}
