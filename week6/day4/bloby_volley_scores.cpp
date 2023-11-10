#include<bits/stdc++.h>
using namespace std;

void __() {

	int n; scanf("%d", &n);
	string s; cin >> s;

	int alice = 0, bob = 0;

	if (s[0] == 'A') alice++;

	for (int i = 0; i < n - 1; i++) {

		if (s[i] == 'A' and s[i + 1] == 'A') alice++;
		else if (s[i] == 'B' and s[i + 1] == 'B') bob++;

	}

	printf("%d %d\n", alice, bob);

}

int32_t main() {

	int t; scanf("%d", &t);
	while (t--)
		__();

	return 0;
}