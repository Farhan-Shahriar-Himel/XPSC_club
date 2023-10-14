// Problem Link : https://codeforces.com/problemset/problem/1703/D

#include<bits/stdc++.h>
using namespace std;
#define ing long long

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> void {

			map < string , bool > check;

			int n; cin >> n; string s[n];

			for (int i = 0; i < n; i++) {
				cin >> s[i]; 
				check[s[i]] = true;
			}

			string ans = "";
			for (int i = 0; i < n; i++) {

				bool found = false;
				for (int j = 0; j < s[i].size(); j++) {

					string s1 = s[i].substr(0, j + 1);
					string s2 = s[i].substr(j + 1, s[i].size());

					if (check[s1] and check[s2]) found = true;
				}
			
				if (found) ans += '1';
				else ans += '0';
			}

			cout << ans << "\n";
	};

	int _; cin >> _;
	while (_--) __();
}