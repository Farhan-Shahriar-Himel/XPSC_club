// Problem Link: https://atcoder.jp/contests/abc162/tasks/abc162_c?lang=en

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sq(n) (n)*(n);

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;

	int sum = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			for (int k = 1; k <= n; k++) {
				sum += __gcd(i, __gcd(j, k));
			}
		}
	}
	cout << sum << "\n";
	return 0;
}