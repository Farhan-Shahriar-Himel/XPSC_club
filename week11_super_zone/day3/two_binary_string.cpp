#include<bits/stdc++.h>
using namespace std;

string __()
{
	string s, t; cin >> s >> t;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '0' and t[i] == '0' and s[i + 1] == '1' and t[i + 1] == '1')
		{
			return "YES";
		}
	}
	return "NO";
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