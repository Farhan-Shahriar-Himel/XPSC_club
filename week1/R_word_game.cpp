// Problem Linke: https://codeforces.com/problemset/problem/1722/C
 
#include<bits/stdc++.h>
using namespace std;
 
int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);
 
	auto __ = [&]() -> void {
 
			int n; cin >> n;
			vector < vector < string > > vvs;
			map < string, int > mp;
 
			for (int i = 0; i < 3; i++) {
				vector < string  > vs;
				for (int j = 0; j < n; j++) {
					string s; cin >> s;
					mp[s]++;
					vs.push_back(s);
				}
				vvs.push_back(vs);
			}
 
			for (int i = 0; i < 3; i++) {
				int pnt = 0;
				for (auto str: vvs[i]) {
					if (mp[str] == 1) pnt += 3;
					else if (mp[str] == 2) pnt += 1;
				}
				cout << pnt << " ";
			}
			cout << "\n";
	};
 
	int _; cin >> _;
	while(_--) __();
	return 0;
}