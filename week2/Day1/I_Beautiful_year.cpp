// Problem Link: https://codeforces.com/problemset/problem/271/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int cnt_dig(int n) {
	int cnt = 0;
	while (n != 0) {
		int rem = n % 10;
		cnt++;
		n /= 10;
	}
	return cnt;
}

bool ok(int x) {
	set < int > st;
	int cnt = cnt_dig(x);
	while (x != 0) {
		int rem = x % 10;
		st.insert(rem);
		x /= 10;
	}
	return st.size() == cnt;
}

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	int n; cin >> n;
	n++;
	while (n != 0) {
		if (ok(n)) {
			cout << n << "\n";
			break;
		}
		n++;
	}
	return 0;
}