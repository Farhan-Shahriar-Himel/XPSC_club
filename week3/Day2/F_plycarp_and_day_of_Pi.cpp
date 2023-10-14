// Problem Link: https://codeforces.com/problemset/problem/1790/A

#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> void {

			string pi = "31415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
			string s; cin >> s;

			for (int i = 0; i <= s.size(); i++) {

				if (i == s.size() or s[i] != pi[i]) {

					cout << i << "\n";
					return;
				}

			}
	};

	int _ = 1; 
	cin >> _;
	while (_--) __();

	return 0;
}