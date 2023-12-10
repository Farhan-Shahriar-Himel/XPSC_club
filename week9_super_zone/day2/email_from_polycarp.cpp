#include <bits/stdc++.h>
using namespace std;

string __() 
{
	string s1; cin >> s1;
	string s2; cin >> s2;

	int n = s1.size(), m = s2.size();

	if (n > m) return "NO";

	int i = 0, j = 0;
	while (i < s1.size())
	{
		while (i < n and s1[i] == s2[j])
		{
			i++, j++;
		}
		
		if (i == n and j == m) 
		{
			return "YES";
		}

		if (s1[i] != s2[j]) i--;

		bool ok = false;
		while (s1[i] == s2[j])
		{
			ok = true;
			j++;
		}

		if (!ok or (j == m and i != n - 1)) 
		{
			return "NO";
		}

		i++;
	}

	if (j == m) return "YES";

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