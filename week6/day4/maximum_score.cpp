#include<bits/stdc++.h>
using namespace std;

int __() {

	int n; 
	scanf("%d", &n);

	int a[n]; for (int i = 0; i < n; i++) scanf("%d", &a[i]);

	int diff[n];
	diff[0] = abs(a[1] - a[0]);
	diff[n - 1] = abs(a[n - 1] - a[n - 2]);

	int ans = min(diff[0], diff[n - 1]);

	for (int i = 1; i <= n - 2; i++) {

		int d1 = abs(a[i + 1] - a[i]);
		int d2 = abs(a[i] - a[i - 1]);
		diff[i] = max(d1, d2);
		ans = min(ans, diff[i]);

	}

	return ans;

}

int32_t main() {

	int t; 
	scanf("%d", &t);

	while (t--)
		printf("%d\n", __());

	return 0;
}