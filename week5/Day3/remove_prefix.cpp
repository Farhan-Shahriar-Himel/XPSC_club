#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> int {

			int n; cin >> n; int a[n];
			map < int, int > mp;

			for (int i = 0; i < n; i++) {

				cin >> a[i];
				mp[a[i]]++;

			}

			int ans = 0;
			for (int i = 0; i < n; i++) 
				if (mp[a[i]] > 1)	
					ans = i + 1, mp[a[i]]--;

			return ans;

	};

	int _; cin >> _;
	while (_--) 
		cout << __() << "\n";

	return 0;
}