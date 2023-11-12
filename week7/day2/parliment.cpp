#include <bits/stdc++.h>
using namespace std;

int main() {
	
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	int _; cin >> _;
	while (_--) {

		int a, b;
	    cin >> a >> b;
	    int c = b * 2;
	    if(c >= a) cout << "YES\n";
        else cout << "NO\n";

	}
	return 0;
}