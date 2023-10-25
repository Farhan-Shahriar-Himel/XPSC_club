//Problem Link: https://codeforces.com/problemset/problem/467/B

#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> int {

			int n, m, k; cin >> n >> m >> k;
			int a[m + 1];

			for (int i = 0; i < m + 1; i++) cin >> a[i];

			int fedor = a[m], ans = 0;
			for (int i = 0; i < m; i++) {

				int dif = 0;
				for (int j = 0; j < n; j++) {

					int mask = 1 << j;
					dif += ((a[i] & mask) != (fedor & mask));
					
				}
				ans += (dif <= k);

			}
			return ans;

	};

	cout << __() << "\n";
}