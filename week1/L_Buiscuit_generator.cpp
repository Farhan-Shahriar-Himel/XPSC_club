//Problem Link: https://atcoder.jp/contests/abc125/tasks/abc125_a?lang=en

#include<bits/stdc++.h>
using namespace std;

int main() {
	int a, b, t; cin >> a >> b >> t;

	int ans = 0;
	int i = 2, time = a;
	while (time <= t) {
		ans += b;
		time = i * a;
		i++;
	}
	cout << ans << "\n";
	return 0;
}