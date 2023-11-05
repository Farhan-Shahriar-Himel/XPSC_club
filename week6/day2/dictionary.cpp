#include<bits/stdc++.h>
using namespace std;

int32_t main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	map < string , int > ind;
	int i = 1;
	for (char ch = 'a'; ch <= 'z'; ch++) {
		for (char c = 'a'; c <= 'z'; c++) {
			if (c == ch) continue;
			string s;
			s += ch;
			s += c;
			ind[s] = i++;
		}
	}

	auto __ = [&]() -> int {

		string s; cin >> s;
		return ind[s];

	};


	int _; cin >> _;
	while (_--) 
		cout << __() << "\n";

	return 0;
}