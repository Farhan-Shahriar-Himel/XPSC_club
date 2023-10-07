// Problem Link: https://atcoder.jp/contests/abc182/tasks/abc182_b?lang=en

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	int n; cin >> n; int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];

	map < int, int > gcdness;

	for (int i = 2; i <= 1000; i++) {
		for (int j = 0; j < n; j++) {
			if (a[j] % i == 0)
				gcdness[i]++;
		}
	}

	int pnt = 0, ans = 0;
	for (auto el: gcdness) {
		if (el.second > pnt) {
			pnt = el.second;
			ans = el.first;
		}
	}

	cout << ans << "\n";
}

