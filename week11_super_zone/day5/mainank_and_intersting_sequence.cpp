#include <bits/stdc++.h>
using namespace std;

void __()
{
	int n, m; cin >> n >> m;

	if (n > m)
	{
		cout << "NO";
		return;
	}

	if (n & 1)
	{
		cout << "YES\n";
		for (int i = 0; i < n - 1; i++) cout << 1 << " ";
			cout << m - (n - 1);
	}
	else if (m % 2)
	{
		cout << "NO";
		return;
	}
	else
	{
		cout << "YES\n";
		for (int i = 0; i < n - 2; i++) cout << 1 << " ";
			cout << (m - (n - 2)) / 2 << " " << (m - (n - 2)) / 2;
	}
}

int32_t main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int _; cin >> _;
	while (_--)
	{
		__();
		cout << "\n";
	}

	return 0;
}