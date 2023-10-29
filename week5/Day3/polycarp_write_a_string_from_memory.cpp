#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> int {

			string s; cin >> s;
			
			set < char > st;
			int ans = 1;
			bool ok = false;
			for (int i = 0; i < s.size(); i++) {

				st.insert(s[i]);
				ok = true;
				if (st.size() > 3) {
					ans++;
					st.clear();
					st.insert(s[i]);
					ok = false;
				}

			}

			return ans;
	};

	int _; cin >> _;
	while (_--) 
		cout << __() << "\n";

	return 0;
}