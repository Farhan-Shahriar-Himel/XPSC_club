#include <bits/stdc++.h>
using namespace std;

string __()
{
	int n, k; cin >> n >> k;
	string s; cin >> s;

	if (k % 2 == 0)
	{
		sort(s.begin(), s.end());
		return s;
	}

	map < char, map < int, int > > freq;

	string ans = "";

	for (int i = 0; i < n; i++) freq[s[i]][i % 2]++;

	for (int i = 0; i < n; i++)
	{
		for (char ch = 'a'; ch <= 'z'; ch++)
		{
			int &x = freq[ch][i % 2];
			if (x)
			{
				x--;
				ans += ch;	
				break;
			}
		}
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