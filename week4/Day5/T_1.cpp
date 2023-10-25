//Problem Link: https://codeforces.com/problemset/problem/1097/B

#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> string {


			int n; cin >> n; int a[n];
			for (int i = 0; i < n; i++) cin >> a[i];

			int lim = 1 << n;

			for (int i = 0; i < lim; i++) {

				int sum = 0;
				for (int j = 0; j < n; j++) {

					int mask = 1 << j;
					if ((i & mask)) sum += a[j];
					else sum -= a[j];

				}
				if (sum % 360 == 0) return "YES";

			}

			return "NO";

	};

	cout << __() << "\n";
}