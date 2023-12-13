#include <bits/stdc++.h>
using namespace std;

string __()
{
	int n; cin >> n; int a[n];
	for (auto &el : a) cin >> el;

	auto isPossible = [&](int x) -> bool {

		int i = 0, j = n - 1;
		while (i < j)
		{
			if (a[i] == x) 
			{
				i++;
				continue;
			}
			if (a[j] == x)
			{
				j--;
				continue;
			}

			if (a[i] != a[j]) return false;

			i++, j--;
		}
		return true;
	};

	int j = n - 1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] != a[j])
		{
			if (isPossible(a[i]) or isPossible(a[j]))
				return "YES";
			else 
				return "NO";
		}
		j--;
	}

	return "YES";
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