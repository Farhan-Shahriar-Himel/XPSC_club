#include<bits/stdc++.h>
using namespace std;

void __() {

	int n; scanf("%d", &n);
	string s; cin >> s;

	map < char, int > mp;
	for (auto el: s) mp[el]++;

	int od = 0;
	for (auto el: mp)
		if (el.second & 1)
			od++;

	if ((n % 2 == 0 and od) or (n % 2 == 1 and od > 1))
		printf("0");
	else {
		if (n % 2 == 0 or (n % 2 == 1 and mp.size() > 1))
			printf("1");
		else printf("2");
	}

	printf("\n");

}

int32_t main() {

	int _; scanf("%d", &_);
	while (_--)
		__();

	return 0;
}