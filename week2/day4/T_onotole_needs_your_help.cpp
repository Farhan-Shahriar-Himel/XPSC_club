// Problem Link: https://www.spoj.com/problems/OLOLO/en/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sq(n) (n)*(n);

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	map < int, int > mp;
	while(n--) {
		int x; cin >> x;
		mp[x]++;
	}
	for (auto el: mp) {
		if (el.second == 1) {
			cout << el.first << "\n";
			return 0;
		}
	}
	return 0;
}