// Problem Link : https://codeforces.com/problemset/problem/440/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sq(n) (n)*(n)

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n; cin >> n;
	set < int > st;
	for (int i = 0; i < n - 1; i++) {
		int x; cin >> x;
		st.insert(x);
	}	

	int ans = 1;
	bool found = false;
	for (auto el: st) {
		if (el != ans) {
			cout << ans << "\n";
			found = true;
			return 0;
		}
		ans++;
	}
	if (!found) cout << ans << "\n";
	return 0; 
}
