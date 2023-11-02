#include<bits/stdc++.h>
using namespace std;

bool  cmp(pair < char, int > a, pair < char, int > b) {return a.first > b.first;}

void __() {

	string s; cin >> s;
	bool asc = true;
	if (s[0] > s.back()) swap(s[0], s.back()), asc = false;
	int dist = s.back() - s[0];

	vector < pair < char, int > > vs;

	for (int i = 0; i < s.size(); i++) vs.push_back({s[i], i + 1});

	if (asc) sort(vs.begin() + 1, vs.begin() + (vs.size() - 1));
	else sort(vs.begin() + 1, vs.begin() + (vs.size() - 1), cmp);

	vector < int > ind;
	for (int i = 0; i < vs.size(); i++) 
		if (vs[i].first >= s[0] and vs[i].first <= s.back())
			ind.push_back(vs[i].second);

	cout << dist << " " << ind.size() << "\n";
	for (auto el: ind) cout << el << " ";
	cout << "\n";

}

int32_t main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	int _; cin >> _;
	while (_--) __();

	return 0;
}