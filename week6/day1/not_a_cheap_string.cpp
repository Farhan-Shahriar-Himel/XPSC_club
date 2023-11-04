#include<bits/stdc++.h>
using namespace std;

void __() {

	string s; cin >> s;
	int p; cin >> p;
	int n = s.size();

	string sc = s;
	sort(sc.begin(), sc.end());
	
	int cst = 0;
	for (auto el: sc) cst += (el - 'a') + 1;

	map < char, int > check;
	for (int i = n - 1; i >= 0; i--) {
		if (cst > p) {
			cst -= (sc[i] - 'a') + 1;
			check[sc[i]]++;
		}
	}

	for (auto el: s) {
		if (check[el]) check[el]--;
		else cout << el;
	}
	cout << endl;
}

int32_t main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	int _; cin >> _;
	while (_--) __();

	return 0;

}