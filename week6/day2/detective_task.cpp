#include<bits/stdc++.h>
using namespace std;

int __() {

	string s; cin >> s;
	int n = s.size();

	int one = 0, zero = 0, quest = 0;
	for (auto el: s) {
		if (el == '1') one++;
		else if(el == '0') zero++;
		else quest++;
	}

	if (!one and !zero) return n;

	if (!one) {
		for (int i = 0; i < n; i++) 
			if (s[i] == '0') 
				return i + 1;
	}

	int zz = n - 1;
	for (int i = n - 1; i >= 0; i--) {
		if (s[i] == '0') zz = i;
		else if (s[i] == '1') return (zz - i) + 1;
	}

} 

int32_t main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	int _; cin >> _;
	while (_--) 
		cout << __() << "\n";

	return 0;

}