// Problem Link: https://codeforces.com/problemset/problem/1800/B

#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> void {

			int n, k; cin >> n >> k;
			string s; cin >> s;

			map < char , int > cnt;

			for (auto ch: s) {cnt[ch]++;}

			int ans = 0;
			for (char ch = 'a'; ch <= 'z'; ch++) {
				int mn = min(cnt[ch], cnt[ch - 32]);
				ans += mn;
				cnt[ch] -= mn;
				cnt[ch - 32] -= mn;
			}

			for (char ch = 'a'; ch <= 'z'; ch++) {
				int remain = max(cnt[ch], cnt[ch - 32]);
				int x = min(k, remain / 2);
				ans += x;
				k -= x;
			}

			cout << ans << '\n';
	};

	int _; cin >> _;
	while (_--) __();

	return 0;
}