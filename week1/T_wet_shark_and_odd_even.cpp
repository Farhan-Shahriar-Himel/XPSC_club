// Problem Link: https://codeforces.com/problemset/problem/621/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sq(n) (n)*(n);

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	vector < ll > od;
	ll sum = 0;
	for (int i = 0; i < n; i++) {
		ll x; cin >> x;
		if (x & 1) od.push_back(x);
		else sum += x;
	}
	sort(od.begin(), od.end(), greater < int >());
	if (od.size() & 1) od.pop_back();
	for (auto el: od) sum += el;

	cout << sum << "\n";
	return 0;
}