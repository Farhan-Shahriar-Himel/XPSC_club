#include<bits/stdc++.h>
using namespace std;

int32_t main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> int {

			int n, h; cin >> n >> h; int a[n];
			for (int i = 0; i < n; i++) cin >> a[i];

			auto isValid = [&](int x) -> bool {

					int hp = h;
					for (auto el: a) {
						if (el > x)
							hp -= el;
						if (hp <= 0) return false;
					}
					return true;

			};

			int l = 0, r = 1e6, ans = 0;
			while (l <= r) {

				int mid = l + ((r - l) / 2);
				if (isValid(mid)) ans = mid, r = mid - 1;
				else l = mid + 1;

			}

			return ans;
	};
 
	int _; cin >> _;
	while (_--) 
		cout << __() << "\n";

	return 0;
}