// Problem Link: https://codeforces.com/problemset/problem/1669/E

#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> void {

			int n; cin >> n;
			vector < string > vs(n);

			map < char , int > ff, ss;
			map < string, int > wrd;

			int ans = 0;

			for (int i = 0; i < n; i++) {

				cin >> vs[i];

				wrd[vs[i]]++;

				ff[vs[i][0]]++;
				ss[vs[i][1]]++;
			}

			for (auto str : vs) {

				int &_f = ff[str[0]];
				int &_s = ss[str[1]];
				int &_fs = wrd[str];

				ans += max(0ll, _f - _fs) + max(0ll, _s - _fs);

 				if (_f) _f--;
 				if (_s) _s--;
 				if (_fs) _fs--;
			}

			cout << ans << "\n";
	};

	int _; cin >> _;
	while (_--) __();

	return 0;
}