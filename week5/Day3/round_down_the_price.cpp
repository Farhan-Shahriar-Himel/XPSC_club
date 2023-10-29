#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> int {

			int n; cin >> n;

			auto Len = [&](int n) {

				int cnt = 0;
				while (n) cnt++, n /= 10;
				return cnt;

			};

			int len = Len(n);

			string rnd = "1";
			while (rnd.size() < len) rnd += '0';

			int num = stoi(rnd);

			return n - num;
	};

	int _; cin >> _;
	while (_--) 
		cout << __() << "\n";

	return 0;
}