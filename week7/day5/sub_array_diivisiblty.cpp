#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	int n; cin >> n;
	int a[n]; for (auto &el: a) cin >> el;

	vector < int > pref(n + 1);
	for (int i = 1; i <= n; i++) pref[i] = pref[i - 1] + a[i - 1];

	map < int, int > mp;
	
	int ans = 0;
	for (auto el: pref) {

		int rem = el % n;
		if (rem < 0) rem += n;		
		if (mp[rem]) ans += mp[rem];
		mp[rem]++;

	}

	cout << ans << "\n";

	return 0;

}