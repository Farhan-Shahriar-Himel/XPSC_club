#include<bits/stdc++.h>
using namespace std;
#define int long long

string __() {

	int n; cin >> n;
	string s; cin >> s;

	reverse(s.begin(), s.end());
	string ans = "";
	for (int i = 0; i < n; i++) {

		if (s[i] == '0') {

			string tmp;
			tmp += s[i + 2];
			tmp += s[i + 1];
			int x= stoi(tmp);
			char ch = 96 + x;
			ans += ch;
			i += 2;

		}

		else {

			int x = s[i] - '0';
			char ch = 96 + x;
			ans += ch;

		}
	}

	reverse(ans.begin(), ans.end());
	return ans;

}

int32_t main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	int _; cin >> _;
	while (_--) 
		cout << __() << "\n";

	return 0;
}