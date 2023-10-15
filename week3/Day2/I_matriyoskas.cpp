// Problem Link: https://codeforces.com/problemset/problem/1790/D

#include<bits/stdc++.h>
using namespace std;
#define int long long 

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> void {

			int n; cin >> n; int a[n];
			map < int , int > freq;

			for (int i = 0; i < n; i++) {

				cin >> a[i];
				freq[a[i]]++;
			}

			sort(a, a + n);
			int ans = 0;
			for (int i = 0; i < n; i++) {

				if (freq[a[i]]) {
					int need = a[i];
					while (freq[need]) freq[need]--, need++;
					ans++;
				}
			}

			cout << ans << "\n";
	};

	int _; cin >> _;
	while (_--) __();

	return 0;
}