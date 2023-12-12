#include <bits/stdc++.h>
using namespace std;

int __()
{
	int n; cin >> n; int a[n], b[n], c[n];
	for (int &el: a) cin >> el;
	for (int &el: b) cin >> el;
	for (int i = 0; i < n; i++) c[i] = b[i] - a[i];

	sort(c, c + n, greater < int > ());
	
	int j = n - 1, i = 0, days = 0;
	while (i < j)
	{
		if (c[i] + c[j] >= 0) days++, j--, i++;
		else j--;
	}

	return days;
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