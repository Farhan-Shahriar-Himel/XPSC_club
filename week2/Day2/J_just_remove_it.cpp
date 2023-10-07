// Problem link: https://atcoder.jp/contests/abc191/tasks/abc191_b?lang=en

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	int n, k; cin >> n >> k;
	vector < int > v;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		if (x != k) v.push_back(x);
	}

	for (auto el: v) cout << el << " ";
}