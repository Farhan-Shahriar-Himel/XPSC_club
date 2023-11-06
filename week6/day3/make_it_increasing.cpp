#include<bits/stdc++.h>
using namespace std;
#define int long long

int __() {

	int n; cin >> n; vector < int > a(n);
	for (int &el: a) cin >> el;

	int cnt = 0;
	for (int i = n - 2; i >= 0; i--) {
		
		while (a[i] >= a[i + 1] and a[i] > 0) a[i] /= 2, cnt++;
		if (a[i] == a[i + 1]) return -1;

	}
	return cnt;

}

int32_t main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	int _; cin >> _;
	while (_--) 
		cout << __() << "\n";

	return 0;

}