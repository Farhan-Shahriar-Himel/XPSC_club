#include<bits/stdc++.h>

int32_t main() {

	std::ios_base::sync_with_stdio(NULL);
	std::cin.tie(nullptr); std::cout.tie(nullptr);

	int _; std::cin >> _;
	while (_--) {

		int n, m; std::cin >> n >> m;

		m = m * 36;
		if (n > m) std::cout << "NO" << std::endl;
		else std::cout << "YES" << std::endl;

	}

	return 0;
	
}