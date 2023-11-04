#include<bits/stdc++.h>
using namespace std;

string __() {

	int n; cin >> n; int a[n], b[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) cin >> b[i];

	int diff = INT_MAX;
	for (int i = 0; i < n; i++) {
		if (b[i] == 0) continue;
		if (a[i] < b[i]) return "NO";
		diff = min(diff, a[i] - b[i]);
	}

	for (int i = 0; i < n; i++) {
		if (b[i] == 0) {
			int x = abs(b[i] - a[i]);
			if (x > diff) return "NO";
		}
		else if (a[i] - b[i] != diff) return "NO";
	}

	return "YES";

}

int32_t main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	int _; cin >> _;
	while (_--)
		cout << __() << "\n";

	return 0;
	
}