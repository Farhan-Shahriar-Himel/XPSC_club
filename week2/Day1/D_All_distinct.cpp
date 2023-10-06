// Problem Link: https://codeforces.com/problemset/problem/1692/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> void {


			int n; cin >> n;
			set < int > st;
			for (int i = 0; i < n; i++) {
				int x; cin >> x;
				st.insert(x);
			}
			int diff = n - st.size();
			cout << (diff & 1 ? st.size() - 1 : st.size()) << "\n";
	};

	int _; cin >> _;
	while (_--) __();
	return 0;
}