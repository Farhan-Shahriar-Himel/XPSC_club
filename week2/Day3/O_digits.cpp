// Problem Link: https://atcoder.jp/contests/abc156/tasks/abc156_b?lang=en

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	int n, k; cin >> n >> k;
	int cnt = 0;
	while (n) cnt++, n /= k;
	cout << cnt << "\n";
	return 0;
}