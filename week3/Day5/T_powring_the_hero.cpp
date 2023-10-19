// problem link: https://codeforces.com/contest/1800/problem/C2

#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> void {

		priority_queue < int > pq;

		int n; cin >> n;

		int pwr = 0;

		for (int i = 0; i < n; i++) {

			int x; cin >> x;
			if (x == 0 and !pq.empty()) {

				pwr += pq.top();
				pq.pop();
			}

			else {

				pq.push(x);
			}
		}
		cout << pwr << "\n";
	};

	int _; cin >> _;
	while (_--) __();

	return 0;
}