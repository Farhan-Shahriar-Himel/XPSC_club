#include <bits/stdc++.h>
using namespace std;

int __()
{
	int n; cin >> n; int pos[n + 7];
	for (int i = 1; i <= n; i++)
	{
		int x; cin >> x;
		pos[x] = i;
	}

	int ans = 0;
	for (int i = 2; i <= n; i++)
	{
		if (pos[i - 1] > pos[i])
		{
			ans++;
		}
	}
	return ans;
}

int32_t main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int _; cin >> _;
	while (_--)
		cout << __() << "\n";

	return 0;
}