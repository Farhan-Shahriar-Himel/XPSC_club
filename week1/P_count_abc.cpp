// Problem Link: https://atcoder.jp/contests/abc150/tasks/abc150_b?lang=en

#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	string s; cin >> s;
	int cnt = 0;
	for (int i = 0; i < n - 2; i++) {
		if (s[i] == 'A' and s[i + 1] == 'B' and s[i + 2] == 'C') 
			cnt++;
	}	

	cout << cnt << "\n";
	return 0;
}