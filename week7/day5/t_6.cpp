// https://codeforces.com/problemset/problem/762/A

#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	int n, k; cin >> n >> k;

	vector < int > divisors;
	for (int i = 1; i * i <= n; i++) {

		if (n % i == 0) {

			divisors.push_back(i);
			if (n / i != i)
				divisors.push_back(n / i);

		}

	}

	sort(divisors.begin(), divisors.end());

	if (k > divisors.size())
		cout << -1 << "\n";
	else 
		cout << divisors[k - 1] << "\n";

	return 0;

}