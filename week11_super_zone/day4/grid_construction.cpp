#include <bits/stdc++.h>
using namespace std;

void __()
{
	int n; cin >> n;
	int ans[2][n];

	int mx = 2 * n, mn = 1;

	int ind = 1, strt = 1;
	for (int i = 0; i < n; i++)
	{
		ans[ind][i] = strt++;
		(ind ? ind = 0: ind = 1);
	}

	strt = 2 * n;
	for (int i = 0; i < n; i += 2)
		ans[0][i] = strt, strt -= 2;

	strt = (2 * n) - 3;
	for (int i = 1; i < n; i += 2)
		ans[1][i] = strt, strt -= 2;

	ans[1][n - 1] = (2 * n) - 1;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << ans[i][j] << " ";
		}
		cout << "\n";
	}
}
int32_t main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); 
	cout.tie(nullptr);

	int _; cin >> _; 
	while (_--)
		__();

	return 0;
}