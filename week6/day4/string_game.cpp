#include<bits/stdc++.h>
using namespace std;

void __() {

	int n; cin >> n;
	string s; cin >> s;
	int cnt = 0;

	stack < char > st;

	for (auto ch: s) {

		if (!st.empty() and st.top() != ch) {
			st.pop(); cnt++;
		}
		else st.push(ch);
	}

	if (cnt & 1) cout << "Zlatan\n";
	else cout << "Ramos\n";

}

int32_t main() {

	int _; cin >> _;
	while (_--) 
		__();

	return 0;

}