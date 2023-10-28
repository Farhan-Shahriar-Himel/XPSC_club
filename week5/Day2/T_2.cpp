#include<bits/stdc++.h>
using namespace std;

int32_t main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	int n; cin >> n; vector < int > a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a.begin(), a.end());

	int q; cin >> q;
	while (q--) {

		int x; cin >> x;
		auto tallest = upper_bound(a.begin(), a.end(), x);
		int tind = tallest - a.begin();
		auto shortest = lower_bound(a.begin(), a.end(), x);
		int sind = shortest - a.begin();

		if (shortest != a.end()) {

			if (sind != 0) cout << a[sind - 1] << " ";
			else cout << 'X' << " ";

		}
		else cout << a.back() << ' ';

		if (tallest == a.end()) cout << "X\n";
		else cout << a[tind] << "\n";
	}

	return 0;
}