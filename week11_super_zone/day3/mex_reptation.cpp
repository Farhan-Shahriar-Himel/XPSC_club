#include <bits/stdc++.h>
using namespace std;

void __()
{
	int n, k; cin >> n >> k; int a[n];
	map < int , bool > freq;
	for (int &el: a) 
	{
		cin >> el;
		freq[el] = true;
	}

	if (k > n + 1) k %= (n + 1);

	int miss = 0;
	for (int i = 0; i <= n; i++)
	{
		if (!freq[i])
		{
			miss = i;
			break;
		}
	}

	vector < int > ans(n + 1);

	if (k) ans[k - 1] = miss;
	else 
	{
		for (auto el : a) cout << el << " ";
		return;
	}

	int i = k - 2;
	int j = n - 1;
	while (i >= 0 and j >= 0) ans[i--] = a[j--];

	i = k;
	j = 0;
	while (i < n and j < n) ans[i++] = a[j++];

	for (int i = 0; i < n; i++) cout << ans[i] << " ";
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