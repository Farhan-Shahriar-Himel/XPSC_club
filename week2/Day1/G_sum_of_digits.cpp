// Problem Link: https://codeforces.com/problemset/problem/102/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long

string make(string s) {
	int sum = 0;
	for (int i = 0; i < s.size(); i++) 
		sum += s[i] - '0';

	return to_string(sum);
}

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	string s; cin >> s;
	int cnt = 0;
	while (s.size() != 1) {

		s = make(s);
		cnt++;
	}

	cout << cnt << "\n";

	return 0;
}