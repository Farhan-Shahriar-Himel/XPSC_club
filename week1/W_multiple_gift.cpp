// Problem Link: https://atcoder.jp/contests/abc083/tasks/arc088_a?lang=en

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sq(n) (n)*(n)

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	ll n, k; cin >> n >> k;
	ll cnt = 0;
	while (n <= k) {
		n *= 2;
		cnt++;
	}
	cout << cnt << "\n";
	return 0;
}
