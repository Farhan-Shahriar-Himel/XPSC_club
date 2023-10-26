#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> int {

			int n, m, h; cin >> n >> m >> h;
			vector < int > car(n), pwr(m);

			for (int i = 0; i < n; i++) cin >> car[i];
			for (int i = 0; i < m; i++) cin >> pwr[i];

			sort(car.begin(), car.end(), greater < int > ());
			sort (pwr.begin(), pwr.end(), greater < int > ());

			int ans = 0;
			for (int i = 0; i < min(n, m); i++) 
				ans += min(car[i], pwr[i] * h);

			return ans;
	};

	int _; cin >> _;
	while (_--) 
		cout << __() << "\n";

	return 0;
}