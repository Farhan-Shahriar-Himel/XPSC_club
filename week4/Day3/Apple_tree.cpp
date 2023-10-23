// Problem Link: https://codeforces.com/problemset/problem/1843/D

#include<bits/stdc++.h>
using namespace std;
#define int long long

const int N = 2e5 + 7;
vector < int > g[N];
int leafs[N], vis[N];

void Reset(int n) {

	for (int i = 0; i <= n; i++) {
		
		g[i].clear();
		vis[i] = 0;
		leafs[i] = 0;

	}

}

void dfs(int ver) {

	vis[ver] = true;
	bool leaf = true;
	for (auto child: g[ver]) {

		if (vis[child]) continue;
		dfs(child);
		leaf = false;
		leafs[ver] += leafs[child];

	}

	if (leaf) leafs[ver] = 1;

}

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(nullptr); cout.tie(nullptr);

	auto __ = [&]() -> void {

			int n; cin >> n;

			Reset(n);

			for (int i = 0; i < n - 1; i++) {

				int x, y; cin >> x >> y;

				g[x].push_back(y);
				g[y].push_back(x);

			}

			dfs(1);

			int q; cin >> q;
			while (q--) {

				int x, y; cin >> x >> y;
				cout << leafs[x] * leafs[y] << "\n";

			}

	};

	int _; cin >> _;
	while (_--) __();

	return 0;
}