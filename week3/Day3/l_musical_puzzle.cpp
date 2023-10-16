// Problem Link : https://codeforces.com/problemset/problem/1833/A

#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> void {

			int n; cin >> n;
			string s; cin >> s;

			set < string > st;

			for (int i = 0; i < n - 1; i++) {

				string note = "";
				note += s[i];
				note += s[i + 1];

				st.insert(note);
			}

			cout << st.size() << "\n";
	};

	int _; cin >> _;
	while (_--) __();

	return 0;
}