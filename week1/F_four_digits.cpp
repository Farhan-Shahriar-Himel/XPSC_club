// Problem Link: https://atcoder.jp/contests/abc222/tasks/abc222_a?lang=en

#include<bits/stdc++.h>
using namespace std;

int main() {
	string s; cin >> s;

	reverse(s.begin(), s.end());

	while (s.size() != 4) s += '0';

	reverse(s.begin(), s.end());

	cout << s << endl;
	return 0;
}
