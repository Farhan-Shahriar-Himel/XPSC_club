#include<bits/stdc++.h>
using namespace std;
#define int long long

void __() {

	int n; cin >> n;
	int a[n]; for (int &el: a) cin >> el;
	int b[n]; for (int &el: b) cin >> el;

	for (int i = 0; i < n; i++) {

		if (i == 0) 
			cout << abs(a[i] - b[i]) << " ";

		else if (a[i] > b[i - 1]) 
			cout << abs(a[i] - b[i]) << " ";

		else
			cout << abs(b[i] - b[i - 1]) << " ";

	}
	cout << "\n";

}

int32_t main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	int _; cin >> _;
	while (_--) 
		__();

	return 0;

}