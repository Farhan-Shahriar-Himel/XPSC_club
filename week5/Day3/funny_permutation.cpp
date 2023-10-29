#include<bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);
 
	auto __ = [&]() -> void {
 
			int n; cin >> n;
 
			if (n == 3) {
				cout << -1 << "\n";
				return;
			}
 
			for (int i = 3; i <= n; i++) cout << i << " ";
 
			cout << 2 << " " << 1 << endl;
	};
 
	int _; cin >> _;
	while (_--) __();
 
	return 0;
}
