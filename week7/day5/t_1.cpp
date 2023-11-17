//https://codeforces.com/problemset/problem/678/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {

	ios_base::sync_with_stdio(NULL); 
	cin.tie(nullptr); cout.tie(nullptr);

	int n, a, b, p, q; cin >> n >> a >> b >> p >> q;

	int diva = n / a;
	int divb = n / b;
	int lcm = (a * b) / __gcd(a, b);
	lcm = n / lcm;

	if (p > q) divb -= lcm;
	else diva -= lcm;

	cout << (diva * p) + (divb * q) << "\n";

	return 0;

}