#include <bits/stdc++.h>
using namespace std;
#define int long long

int __()
{
	int n, k; cin >> n >> k;

	int l = k / (n - 1);

	int value = l * n;

	int need = k - (l * (n - 1));

	if (need == 0) need--;
	
	value += need;

	return value;
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