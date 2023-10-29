#include<bits/stdc++.h>
using namespace std;
#define int long long

int __() {

	int n, w; cin >> n >> w; int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];

	auto isValid = [&](int h) -> bool {

			int unit = 0;
			for (auto el: a) 
				if (el < h)
					unit += h - el;

			return unit <= w;

	};

	int l = 0, r = 1e10 + 7, ans;
	while (l <= r) {

		int mid = l + ((r - l) / 2);
		if (isValid(mid)) ans = mid, l = mid + 1;
		else r = mid - 1;

	}

	return ans;
}

int32_t main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	int _; cin >> _;
	while (_--) 
		cout << __() << "\n";

	return 0;
}