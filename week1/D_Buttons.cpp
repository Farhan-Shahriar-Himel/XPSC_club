//Problem Link: https://atcoder.jp/contests/abc124/tasks/abc124_a?lang=en

#include<bits/stdc++.h>
using namespace std;

int main() {
	int a, b; cin >> a >> b;
	if (a < b) swap(a, b);
	int ans = a;
	a--;
	ans += max(a, b);
	cout << ans << endl;
	return 0;
}
