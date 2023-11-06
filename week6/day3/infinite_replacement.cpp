#include<bits/stdc++.h>
using namespace std;
#define int long long

int __() {

	string s, t; cin >> s >> t;

	if (t == "a") 
		return 1;

	else if (count(t.begin(), t.end(), 'a') != 0) 
		return -1;

	else 
		return (1ll << s.size());

}

int32_t main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	int _; cin >> _;
	while (_--) 
		cout << __() << "\n";

	return 0;
}