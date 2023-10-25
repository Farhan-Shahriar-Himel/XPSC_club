// Problem Link: https://www.codechef.com/problems/PALIXOR

#include<bits/stdc++.h>
using namespace std;
#define int long long

bool is_palindrome(int n) {
    string s = to_string(n);

    int j = s.size() - 1;
    for (int i = 0; i < s.size() / 2; i++) {
    	if (s[i] != s[j--])
    		return false;
    }
    return true;

}

int32_t main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	vector < int > palindrome;

	int lim = 1 << 15;
	for (int i = 0; i < lim; i++) 
		if (is_palindrome(i)) 
			palindrome.push_back(i);

	auto __ = [&]() -> int {

			int n; cin >> n; int a[n];
			unordered_map < int, int > present;

			for (int i = 0; i < n; i++) {

				cin >> a[i];
				present[a[i]]++;

			}

			int ans = 0;
			for (auto el: a) {

				for (auto e: palindrome) {
					
					int expected = el ^ e;
					ans += present[expected];

				}

			}

			return ((ans + n) / 2);
	};

	int _; cin >> _;
	while (_--) 
		cout << __() << "\n";

	return 0;
}