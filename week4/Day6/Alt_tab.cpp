#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	int n; cin >> n;
	vector < string > tabs(n);

	for (int i = 0; i < n; i++) cin >> tabs[i];
	reverse(tabs.begin(), tabs.end());

	map < string, bool > check;
	
	string ans;
	for (auto el: tabs) {
		
		if (check[el]) continue;
		check[el] = true;
		int n = el.size();
		string tmp;
		tmp += el[n - 2];
		tmp += el.back();

		ans += tmp; 
	}

	cout << ans << "\n";
}