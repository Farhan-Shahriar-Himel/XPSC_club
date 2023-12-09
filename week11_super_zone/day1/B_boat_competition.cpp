#include <bits/stdc++.h>
using namespace std;

int __()
{
	int n; cin >> n; 
	map < int, int > freq;

	for (int i = 0; i < n; i++) 
	{
		int x; cin >> x;
		freq[x]++;
	}

	int ans = 0;
	for (int sum = 2; sum <= 2 * n; sum++)
	{
		int cnt = 0;
		for (auto el: freq)
		{
			int need = sum - el.first;

			if (freq[need])
			{
				cnt += min(el.second, freq[need]);
			}
		}	
		cnt /= 2;
		ans = max(cnt, ans);
	}
	return ans;
}

int32_t main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	int _; cin >> _;
	while (_--)
		cout << __() << "\n";

	return 0;
}