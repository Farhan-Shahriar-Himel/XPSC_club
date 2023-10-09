// Problem Link :

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> void {

			string s[8];
			for (int i = 0; i < 8; i++) cin >> s[i];

			for (int i = 1; i < 7; i++) {
				for (int j = 1; j < 7; j++) {
					if (s[i][j] == '#') {
						if (
							s[i-1][j-1] == '#' and s[i-1][j+1] == '#'
							and s[i+1][j-1] == '#' and s[i+1][j+1] == '#'
							) {
							cout << i + 1 << " " << j + 1 << "\n";
						}
					}
				}
			}

	};

	int _; cin >> _;
	while (_--) __();
	return 0;
}