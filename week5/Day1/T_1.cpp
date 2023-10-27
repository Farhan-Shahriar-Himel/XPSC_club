#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(int n, int q) {

	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);

	while (q--) {
		
		int x; cin >> x;
		int ind = 0;

		int l = 0, r = n - 1;
		while (l <= r) {

			int mid = (l + r) / 2;
			if (a[mid] == x) {
				ind = mid + 1;
				r = mid - 1;
			}
			else if (a[mid] > x) r = mid - 1;
			else l = mid + 1;

		}

		if (ind) printf("%lld found at %lld\n", x, ind);
		else printf("%lld not found\n", x);

	}

}

int32_t main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	int n, q, rank = 1; cin >> n >> q;
	while (n != 0 and q != 0) {

		printf("CASE# %lld:\n", rank++);
		solve(n, q);
		cin >> n >> q;

	}

	return 0;
}