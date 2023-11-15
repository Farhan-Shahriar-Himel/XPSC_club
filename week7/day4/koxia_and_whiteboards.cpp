#include<bits/stdc++.h>
using namespace std;
#define int long long

void __() {

	int n, m; cin >> n >> m;
	vector < int > a(n), b(m);
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < m; i++) cin >> b[i];

	for (int i = 0; i < m; i++) {
		sort (a.begin(), a.end());
		a[0] = b[i];
	}

	cout << accumulate(a.begin(), a.end(), 0ll) << "\n";

}

int32_t main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	int _; cin >> _;
	while (_--) 
		__();

	return 0;

}