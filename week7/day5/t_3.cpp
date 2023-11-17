// https://codeforces.com/problemset/problem/1051/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	int l, r; cin >> l >> r;
	vector < int > even, odd;

	cout << "YES\n";

	for (int i = l; i <= r; i++) {
		if (i & 1) 
			odd.push_back(i);
		else 
			even.push_back(i);
	}

	int n = (r - l + 1) / 2;
	for (int i = 0; i < n; i++) 
		cout << even[i] << " " << odd[i] << endl;

	return 0;

}