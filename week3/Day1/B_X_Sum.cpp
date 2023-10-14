// Problem link: https://codeforces.com/problemset/problem/1676/D

#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> void {

			int n, m; cin >> n >> m; int a[n][m];

			for (int i = 0; i < n; i++) 
				for (int j = 0; j < m; j++) 
					cin >> a[i][j];

			int ans = 0;

			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {

					int x = i - 1, y = j - 1;
					int tmp = a[i][j];
					while (x >= 0 and y >= 0) tmp += a[x][y], x--, y--;

					x = i - 1, y = j + 1;
					while (x >= 0 and y < m) tmp += a[x][y], x--, y++;

					x = i + 1, y = j - 1;
					while (x < n and y >= 0) tmp += a[x][y], x++, y--;

					x = i + 1, y = j + 1;
					while (x < n and y < m) tmp += a[x][y], x++, y++;

					ans = max(tmp, ans);
					
				}
			}

			cout << ans << "\n";

	};

	int _; cin >> _;
	while (_--) __();

	return 0;
}