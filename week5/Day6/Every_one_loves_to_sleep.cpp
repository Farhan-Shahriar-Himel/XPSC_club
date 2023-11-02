#include<bits/stdc++.h>
using namespace std;
#define int long long

void __() {

	int n, H, M; cin >> n >> H >> M; int a[n];

	int T = (H * 60) + M;

	bool found = false;
	int ans = 0;
	for (int i = 0; i < n; i++) {

		int h, m; cin >> h >> m;
		int tm = (h * 60) + m;
		a[i] = tm;

	}
	sort(a, a + n);

	for (int i = 0; i < n; i++) {

		if (a[i] >= T) {
			found = true, ans = a[i] - T;
			break;
		}
		
	}

	if (!found) ans = ((24 * 60) - T) + a[0];

	cout << ans / 60 << " " << ans % 60 << "\n";

}

int32_t main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	int _; cin >> _;
	while (_--) __();

	return 0;
}