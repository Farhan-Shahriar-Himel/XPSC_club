// Problem Link: https://atcoder.jp/contests/abc209/tasks/abc209_a?lang=en

#include<bits/stdc++.h>
using namespace std;

int main() {
	int a, b; cin >> a >> b;
	if (a > b) cout << 0 << endl;
	else cout << (b - a) + 1 << endl;
	return 0;
}
