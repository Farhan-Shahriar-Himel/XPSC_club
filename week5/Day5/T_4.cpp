#include<bits/stdc++.h>
using namespace std;
#define int long long

bool isValid(int x, int a[], int n, int k) {

	int cnt = k - 1, sum = 0;
	for (int i = 0; i < n; i++) {

		if (a[i] > x) return false;

		if (sum + a[i] > x) {
			cnt--;
			sum = a[i];
		} else sum += a[i];

		if (cnt < 0) return false;

	}

	if (sum > x) return false;
	return true;

}

int __(int n, int k) {

	int a[n]; for (int i = 0; i < n; i++) cin >> a[i];

	int l = 0, r = 1e10 + 7, ans = 0;
	while (l <= r) {

		int mid = l + (r - l) / 2;
		if (isValid(mid, a, n, k)) ans = mid, r = mid - 1;
		else l = mid + 1;

	}	
	return ans;

}

int32_t main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	int n, k;
	while (cin >> n >> k) 
		cout << __(n, k) << "\n";

	return 0;

}