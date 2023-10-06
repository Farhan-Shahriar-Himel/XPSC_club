// Problem Link: https://www.spoj.com/problems/INTEST/en/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sq(n) (n)*(n)

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, k; cin >> n >> k;
	int cnt = 0;

	while (n--) {
		int x; cin >> x;
		if (x % k == 0) cnt++;
	}	
	cout << cnt << "\n";
	return 0;
}
