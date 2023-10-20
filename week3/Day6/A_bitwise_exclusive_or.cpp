// Problem Link: https://atcoder.jp/contests/abc213/tasks/abc213_a?lang=en

#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	int a, b; cin >> a >> b;

	int x = a ^ b;
	cout << x << "\n";

	return 0;
}