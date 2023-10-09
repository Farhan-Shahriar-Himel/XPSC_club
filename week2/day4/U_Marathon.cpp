// Problem Link: https://codeforces.com/problemset/problem/1692/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sq(n) (n)*(n);

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	auto __ = [&]() -> void {

			int a[4], cnt = 0;
			for (int i = 0; i < 4; i++) cin >> a[i];
			for (int i = 1; i < 4; i++) 
				if (a[i] > a[0])
					cnt++;
			cout << cnt << "\n";
	};

	int _; cin >> _;
	while (_--) __();
	return 0;
}