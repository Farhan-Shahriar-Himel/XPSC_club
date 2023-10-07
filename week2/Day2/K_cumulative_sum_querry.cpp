//Problem Link: https://www.spoj.com/problems/CSUMQ/en/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		if (i != 0) a[i] = x + a[i - 1];
		else a[i] = x;
	}

	int q; cin >> q;
	while (q--) {
		int i, j; cin >> i >> j;
		int sum = 0;
		if (i != 0) sum = a[j] - a[i - 1];
		else sum = a[j];
		cout << sum << "\n";
	}
	return 0;
}