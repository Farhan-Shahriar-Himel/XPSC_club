#include <bits/stdc++.h>
using namespace std;

void __()
{
	int n, m; cin >> n >> m; 

	string grid[n];
	vector < int > row(n), col(m);
	
	for (auto &el: grid) cin >> el;


	for (int i = 0; i < n; i++)
	{
		int u = 0;
		for (auto el: grid[i])
			if (el == 'U')
				u++;

		if (u % 2)
		{
			cout << -1 << "\n";
			return;
		}

		row[i] = u;
	}

	for (int i = 0; i < m; i++)
	{
		int l = 0;
		for (int j = 0; j < n; j++)
			if (grid[j][i] == 'L')
				l++;

		if (l % 2)
		{
			cout << -1 << "\n";
			return;
		}

		col[i] = l;
	}

	for (int i = 0; i < n; i++)
	{
		int x = row[i];
		if (!x) continue;
		x /= 2;

		for (int j = 0; j < m; j++)
		{
			if (grid[i][j] == 'U')
			{
				if (x)
				{
					grid[i][j] = 'W';
					grid[i + 1][j] = 'B';
					x--;
				}
				else
				{
					grid[i][j] = 'B';
					grid[i + 1][j] = 'W';
				}
			}
		}
	}

	for (int i = 0; i < m; i++)
	{
		int x = col[i];
		if (!x) continue;
		x /= 2;

		for (int j = 0; j < n; j++)
		{
			if (grid[j][i] == 'L')
			{
				if (x)
				{
					grid[j][i] = 'W';
					grid[j][i + 1] = 'B';
					x--;
				}
				else
				{
					grid[j][i] = 'B';
					grid[j][i + 1] = 'W';
				}
			}
		}
	}

	for (auto &el: grid) cout << el << "\n";
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