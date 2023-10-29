#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	map < char, int > mp;

	mp['S'] = 1;
	mp['M'] = 2;
	mp['L'] = 3;

	auto __ = [&]() -> string {

			string s1, s2;
			cin >> s1 >> s2;

			if (mp[s1.back()] < mp[s2.back()]) 
				return "<";

			if (mp[s1.back()] > mp[s2.back()])
				return ">";

			if (mp[s1.back()] == mp[s2.back()]) {

				if (s1.back() == 'S') {

					if (s1.size() < s2.size()) return ">";
					else if (s1.size() > s2.size()) return "<";
					return "=";
				}

				else {
					
					if (s1.size() < s2.size()) return "<";
					else if (s1.size() > s2.size()) return ">";
					return "=";
				}
			}
	};

	int _; cin >> _;
	while (_--) 
		cout << __() << "\n";

	return 0;
}