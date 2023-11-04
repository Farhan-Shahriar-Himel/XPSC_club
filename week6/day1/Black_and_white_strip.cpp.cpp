#include<bits/stdc++.h>
using namespace std;

int __() {

	int n, k; cin >> n >> k;
	string s; cin >> s;

	int i = 0, w = 0, b = 0, ans = INT_MAX;
	list < char > v;
	while (i < s.size()) {

		if (s[i] == 'W') w++;
		else b++;
		v.push_back(s[i]);

		if (v.size() == k) {
			ans = min(ans, w);
			if (v.front() == 'B') b--;
			else w--;
			v.pop_front();
		}
		i++;

	}
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