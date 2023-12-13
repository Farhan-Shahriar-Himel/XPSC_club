#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); 
	cout.tie(nullptr);

	int n; cin >> n;
	int ans = 0;
	int mx = 1e6;
	for (int i = 0; i < n; i++)
	{
		int x; cin >> x;
		ans = max(ans, min(x - 1, mx - x));
	}
	cout << ans << "\n";

	return 0;
}