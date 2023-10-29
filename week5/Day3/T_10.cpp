#include<bits/stdc++.h>
using namespace std;
#define int long long

int __() {

	int n; cin >> n; int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);

	auto isValid = [&](int diff) -> bool {

			int i = 0;
			int x = a[i] + (2 * diff);
			while (i < n and a[i] <= x) i++;
			if (i == n) return true;

			x = a[i] + (2 * diff);
			while (i < n and a[i] <= x) i++;
			if (i == n) return true;

			x = a[i] + (2 * diff);
			while (i < n and a[i] <= x) i++;
			if (i == n) return true;

			return false;

	};

	int l = 0, r = 1e9, ans;
	while (l <= r) {

		int mid = l + (r - l) / 2;
		if (isValid(mid)) ans = mid, r = mid - 1;
		else l = mid + 1;

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