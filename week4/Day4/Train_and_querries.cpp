#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> string {

			int n, q; cin >> n >> q;
			map < int , pair < int, int > > mp;

			for (int i = 1; i <= n; i++) {

				int x; cin >> x;
				if (mp[x].first == 0) mp[x].first = i;
				mp[x].second = i;

			}

			while (q--) {

				int x, y; cin >> x >> y;

				if (mp[x].first != 0 and mp[x].first < mp[y].second) 
					cout << "YES\n";

				else cout << "NO\n";

			}
			
	};

	int _; cin >> _;
	while (_--) __();

	return 0;
}