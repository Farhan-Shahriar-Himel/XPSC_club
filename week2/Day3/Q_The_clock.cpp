// Problem Link: https://codeforces.com/problemset/problem/1692/D

#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool check (int h, int m) {

	return (m % 10 == h / 10 && m / 10 == h % 10);
}

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> void {

			int HH, MM, step;
			char cln;
			cin >> HH >> cln >> MM >> step;

			int H = HH, M = MM;

			int cnt = 0;
			if (check(HH, MM)) cnt++;

			MM += step;
			HH += MM / 60;
			MM %= 60, HH %= 24;
			
			while (HH != H or MM != M) {
				
				if (check(HH, MM)) cnt++;

				MM += step;
				HH += MM / 60;
				MM %= 60, HH %= 24;
				
			}
			cout << cnt << "\n";
	};	

	int _; cin >> _;
	while (_--) __();
	return 0;
}
