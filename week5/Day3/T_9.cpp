#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	int n, m; cin >> n >> m; int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];

	auto isValid = [&](int x) -> bool {

			int wood = 0;
			for (auto el: a) 
				if (el >= x)
					wood += el - x;
			return (wood >= m);

	};

	int l = 0, r = 2e9, ans = 0;
	while (l <= r) {

		int mid = l + (r - l) / 2;
		if (isValid(mid)) ans = mid, l = mid + 1;
		else r = mid - 1;

	}

	cout << ans << endl;
}