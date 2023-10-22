//Problem Link : https://codeforces.com/problemset/problem/1744/C

#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> int {

			int n; char ch; string s;
			cin >> n >> ch >> s;

			if (ch == 'g') return 0;

			bool strt = 0;
			int l_r = -1, ans = 0, cnt = 0, mn_g = -1;

			for (int i = 0; i < n; i++) {

				if (s[i] == 'g' and mn_g == -1) mn_g = i;
 				
				if (s[i] == ch) strt = 1;
				if(s[i] == 'g') {

					ans = max(ans, cnt);
					strt = false;
					cnt = 0;
				}

				if (strt) cnt++;
			}

			for (int i = n - 1; i >= 0; i--) {

				if (s[i] == ch) l_r = i;
				if (s[i] == 'g') break;
			} 

			if (l_r == -1) return ans;
			
			return max(ans, (n - l_r) + mn_g);
	};

	int _; cin >> _;
	while (_--) 
		cout << __() << "\n";

	return 0;
}