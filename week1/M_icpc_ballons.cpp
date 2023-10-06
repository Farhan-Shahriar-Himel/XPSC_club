//Problem Linke: https://codeforces.com/problemset/problem/1703/B

#include<bits/stdc++.h>
using namespace std;
#define sq(n) (n)*(n)

int main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> void {

			int n; cin >> n;
			string s; cin >> s;

			map < char, bool > check;
			int ans = 0;

			for (auto ch: s) {
				if (check[ch]) ans++;
				else ans += 2, check[ch] = 1;
			}

			cout << ans << "\n";
	};

	int _; cin >> _;
	while(_--) __();
	return 0;
}