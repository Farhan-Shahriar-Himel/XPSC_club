// https://www.codechef.com/problems/CHAPD?tab=statement

#include<bits/stdc++.h>
using namespace std;
#define int long long

string __() {

	int a, b; cin >> a >> b;
	int gcd = __gcd(a, b);

	while (b > 1) {

		if (gcd == 1) return "No";

		b /= gcd;
		gcd = __gcd(b, a);

	}

	return "Yes";

}

int32_t main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	int _; cin >> _;
	while (_--) 
		cout << __() << "\n";

	return 0;

}