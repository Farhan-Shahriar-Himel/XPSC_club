//Problem Link: https://atcoder.jp/contests/abc199/tasks/abc199_a?lang=en

#include<bits/stdc++.h>
using namespace std;
#define sq(n) (n)*(n)

int main() {
	int a, b, c; cin >> a >> b >> c;
	cout << (sq(a) + sq(b) < sq(c) ? "Yes" : "No") << "\n";
	return 0;
}
