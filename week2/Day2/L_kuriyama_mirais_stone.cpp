// Problem Link: https://codeforces.com/contest/433/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	ll n; cin >> n;
	vector < ll > v(n + 1), pref(n + 1);

	for (int i = 1; i <= n; i++) {

		cin >> v[i];
		pref[i] = v[i] + pref[i - 1];

	}

	sort(v.begin(), v.end());
	vector < ll > pref_srt(n + 1);

	for (int i = 1; i <= n; i++)
		pref_srt[i] = v[i] + pref_srt[i - 1];


	int q; cin >> q;
	while (q--) {

		int type, l, r;
		cin >> type >> l >> r;

		if (type == 1) {

			ll ans = pref[r] - pref[l - 1];
			cout << ans << "\n";

		} else {

			ll ans = pref_srt[r] - pref_srt[l - 1];
			cout << ans << "\n";
		}	
	}
	return 0;
}