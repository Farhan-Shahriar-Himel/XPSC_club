// Problem Link: https://atcoder.jp/contests/abc172/tasks/abc172_b?lang=en

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	string s, t; cin >> s;
	cin >> t;

	int cnt = 0;
	for (int i = 0; i < s.size(); i++) 
		if (s[i] != t[i])
			cnt++;

	cout << cnt << "\n";
	return 0;
}