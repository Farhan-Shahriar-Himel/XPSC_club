// Problem Link: https://codeforces.com/problemset/problem/26/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	vector < bool > isPrime(3007, 1);

	isPrime[0] = isPrime[1] = false;
	for (int i = 2; i <= 3000; i++) {
		if (!isPrime[i]) continue;
		for (int j = i * 2; j <= 3000; j += i) {
			isPrime[j] = false;
		}
	}

	int n; cin >> n;
	int ans = 0, cnt = 0;
	for (int i = 6; i <= n; i++) {
		cnt = 0;
		for (int j = 1; j <= i; j++) {
			if(i % j == 0 and isPrime[j])
				cnt++;
		}
		if (cnt == 2) ans++;
	}
	cout << ans << "\n";
	return 0;
}