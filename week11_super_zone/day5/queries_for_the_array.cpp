#include <bits/stdc++.h>
using namespace std;

string __()
{
	string s; cin >> s;
	vector < char > order;

	int srted = 0, len = 0, unsrted = INT_MAX;
	for (auto el: s)
	{
		if (el == '+') len++;

		else if (el == '-') 
		{
			if (len == 0) return "NO";
			if (len == unsrted) unsrted = INT_MAX;
			len--;
			if (len < srted) srted--;
		}

		else if (el == '1')
		{
			if (unsrted <= len) return "NO";
			srted = len;
		}
		else
		{
			if (len < 2 or srted == len) return "NO";
			if (unsrted == INT_MAX) unsrted = len;
		}
	}
	return "YES";
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