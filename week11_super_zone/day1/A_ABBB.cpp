#include <bits/stdc++.h>
using namespace std;

int __()
{
	string s; cin >> s;
	int n = s.size();

	int a = 0, b = 0, del = 0;

	for (auto ch: s)
	{
		if (ch == 'A') a++;

		else if (ch == 'B')
		{
			if (a) del += 2, a--;

			else if (b)
			{
				del += 2, b--;
			}

			else b++;
		}
	}

	return (n - del);
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