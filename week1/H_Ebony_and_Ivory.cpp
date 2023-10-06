// Problem Link: https://codeforces.com/problemset/problem/633/A

#include<bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	int a, b, c; cin >> a >> b >> c;

	for (int i = 0; a * i <= c; i++) {
		if ((a * i - c) % b == 0) {
			cout << "Yes" << "\n";
			return 0;
		}
	}
	cout << "No" << "\n";
	return 0;
}