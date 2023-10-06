// Problem Link: https://atcoder.jp/contests/abc051/tasks/abc051_b?lang=en

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	int s, k; cin >> k >> s;
	int cnt = 0;
	for (int i = 0; i <= k; i++) {
		for (int j = 0; j <= k; j++) {
			if (i + j > s) continue;
			if ((s - (i + j)) <= k) 
				cnt++;
		}
	}
	cout << cnt << "\n";
	return 0;
}