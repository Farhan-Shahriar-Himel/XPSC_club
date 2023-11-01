#include<bits/stdc++.h>
using namespace std;
#define int long long

int __() {

	int n; cin >> n; int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];

	bool ok = false;
	int sum = 0, ans = 0, res = n;
	for (int i = 1; i <= n; i++) {
		
		int j, sum = 0;
		for (j = 0; j < i; j++) sum += a[j];

		int tmp = 0, cnt = 0;
		ans = i;
		ok = false;
		while (j < n) {

			tmp += a[j];
			j++, cnt++;
			if (tmp > sum) break;
			if (tmp == sum and j == n) ok = true;
			if (tmp == sum) ans = max(cnt, ans), tmp = 0, cnt = 0;

		}

		if (ok) res = min(res, ans);

	}
	return res;

}

int32_t main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	int _; cin >> _;
	while(_--) 
		cout << __() << "\n";

	return 0;

}