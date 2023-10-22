#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> int {

			int n; cin >> n; int a[n];

			for (int i = 0; i < n; i++) cin >> a[i];

			sort(a, a + n);

			int j = n - 1, sum = 0;
			for (int i = 0; i < n/2; i++) sum += abs(a[i] - a[j--]);

			return sum;
	};	

	int _; cin >> _;
	while (_--) 
		cout << __() << "\n";

	return 0;
}