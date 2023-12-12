#include <bits/stdc++.h>
using namespace std;
#define int long long

int __()
{
	int n; cin >> n; int a[n];
	for (int &el: a) cin >> el;

	auto inV = [&]() -> int 
	{
		int ones = 0, tot = 0;
		for (auto el: a)
		{
			if (el == 1) ones++;
			else tot += ones;
		}
		return tot;
	};

	int ans = inV();

	int ind = -1;
	for (int i = 0; i < n; i++) 
	{
		if (a[i] == 0)
		{
			a[i] = 1;
			ind = i;
			break;
		}
	}

	ans = max(ans, inV());

	if (ind != -1) a[ind] = 0;

	for (int i = n - 1; i >= 0; i--) 
	{
		if (a[i] == 1)
		{
			a[i] = 0;
			break;
		}
	}

	ans = max(ans, inV());

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