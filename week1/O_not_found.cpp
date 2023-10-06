// Problem Link: https://atcoder.jp/contests/abc071/tasks/abc071_b?lang=en

#include<bits/stdc++.h>
using namespace std;

int main() {
	string s; cin >> s;
	set < char > st(s.begin(), s.end());

	char ex = 'a';
	for (auto ch: st) {
		if (ch != ex) {
			cout << ex << "\n";
			return 0;
		} ex++;
	}
	if (ex <= 'z') cout << ex;
	else cout << "None" << "\n";
	return 0;
}