#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	int n, s; cin >> n >> s;

	if (n < 10) {
		cout << 0 << "\n";
		return 0;
	}

	auto isValid = [&](int x) -> bool {

			int sum = 0;
			int num = x;
			while (x) sum += x % 10, x /= 10;
			if (abs(sum - num) < s) return false;
			return true;

	};

	int l = 10, r = n, ans = -1;
	while (l <= r) {

		int mid = l + ((r - l) / 2);
		if (isValid(mid)) ans = mid, r = mid - 1;
		else l = mid + 1;

	}

	if (ans == -1) cout << 0 << "\n";
	else cout << (n - ans) + 1 << "\n";
}