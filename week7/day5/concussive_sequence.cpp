#include <bits/stdc++.h>
using namespace std;

bool ok(vector < int > v) {

	for (int i = 1; i < v.size() - 1; i++) {

		if (v[i - 1] > v[i] and v[i] < v[i + 1]) 
			continue;
		if (v[i - 1] < v[i] and v[i] > v[i + 1])
			continue;
		return false;

	}

	return true;

}

void __() {

	int n; cin >> n; int a[n]; for (auto &el: a) cin >> el;
	sort(a, a + n); 

	vector < int > ans; 
	int r = (n - 1) / 2, i = r, l = 0;
	while (l < r or i < n) {

		ans.push_back(a[i++]);
		if (l < r) 
			ans.push_back(a[l++]);

	} 

	if (ok(ans)) {
		for (auto el: ans) cout << el << " "; 
			return;
	}

	ans.clear();
	reverse(a, a + n);
	i = 0, l = (n / 2), r = (n / 2);
	while (i < r or l < n) {

		ans.push_back(a[l++]);
		if (i < r) ans.push_back(a[i++]);

	}

	if (ok(ans)) {
		for (auto el: ans) cout << el << " ";
			return;
	}

	cout << -1;

}

int32_t main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	int _; cin >> _;
	while (_--) {
		__();
		cout << "\n";
	}

	return 0;

}