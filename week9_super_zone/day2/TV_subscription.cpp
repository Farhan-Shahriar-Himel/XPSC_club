#include <bits/stdc++.h>
using namespace std;
#define int long long

int __() {

	int n, k, d; cin >> n >> k >> d; int a[n];
	for (int &el: a) cin >> el;

	int j = 0;
	queue < int > lst;
	map < int, int > vis;
	int shows = 0, ans = INT_MAX;

	while (j < n) {

		lst.push(a[j]);

		if (!vis[a[j]]) shows++;

		vis[a[j]]++;

		if (lst.size() == d) {

			ans = min(ans, shows);
			int pop = lst.front();
			lst.pop();
			vis[pop]--;
			if (!vis[pop]) shows--;

		}

		j++;

	}

	return ans;

}

int32_t main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int _; cin >> _;
	while (_--)
		cout << __() << "\n";

	return 0;
}