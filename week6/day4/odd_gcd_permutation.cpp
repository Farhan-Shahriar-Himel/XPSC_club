#include<bits/stdc++.h>
using namespace std;

void __() {

	int n; scanf("%d", &n);

	if ((n & 1)) {

		cout << -1 << endl;
		return;

	}

	for (int i = n; i > 0; i--) printf("%d ", i);

	printf("\n");

}

int32_t main() {

	int t; cin >> t;
	while (t--) 
		__();

	return 0;
}