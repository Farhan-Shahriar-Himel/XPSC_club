// Problem Link: https://codeforces.com/problemset/problem/1669/B

#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> void {

			int n; cin >> n;
			map < int , int > mp;
			int ans = -1;
			for (int i = 0; i < n; i++) {
				int x; cin >> x;
				mp[x]++;
				if (mp[x] >= 3) ans = x;
			}
			cout << ans << "\n";
	};

	int _; cin >> _;
	while (_--) __();

}