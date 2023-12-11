#include <bits/stdc++.h>
using namespace std;

string __()
{
	string s; cin >> s;
	string res = "";
	
	for (auto el: s)
	{
		if (el == '7') 
		{
			res += el;
		}
		else if (el == '9')
		{
			res += el;
		}
	}

	return res;
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