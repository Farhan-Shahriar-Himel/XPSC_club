#include<bits/stdc++.h>
using namespace std;

int32_t main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> int {

			int n, c; cin >> n >> c; int a[n];
			for (int i = 0; i < n; i++) cin >> a[i];
			sort(a, a + n);

			auto is_possible = [&](int x) -> bool {

					int last = -1, cws = c;
					for (int i = 0; i < n; i++) {

							if (last == -1 or a[i] - last >= x) cws--, last = a[i];
							if (!cws) return true;
					}
					return false;

			};

			int l = 0, r = 1e9, ans = -1;
			while (l <= r) {

					int mid = l + (r - l) / 2;
					if (is_possible(mid)) ans = mid, l = mid + 1;
					else r = mid - 1;

			}
			return ans;

	};

	int O_o; cin >> O_o;
	while (O_o --) 
		cout << __() << "\n";

	return 0;
}