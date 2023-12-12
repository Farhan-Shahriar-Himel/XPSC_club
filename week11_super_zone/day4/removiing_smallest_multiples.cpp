#include <bits/stdc++.h>
using namespace std;
#define int long long

int __()
{
	int n; cin >> n;
	string s; cin >> s;

	vector < int > remove(n + 1), removed(n + 1);

	for (int i = 0; i < n; i++)
		if (s[i] == '0')
			remove[i + 1] = 1;

	int cst = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j <= n; j += i)
		{
			if (removed[j]) continue;
			if (!remove[j]) break;
			cst += i;
			removed[j] = 1;
		}
	}
	return cst;
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