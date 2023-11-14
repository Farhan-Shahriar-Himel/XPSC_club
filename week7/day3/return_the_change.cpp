#include <bits/stdc++.h>

int32_t main() {

	std::ios_base::sync_with_stdio(NULL);
	std::cin.tie(nullptr); std::cout.tie(nullptr);

	int _; std::cin >> _;
	while (_--) {

		int n; std::cin >> n;
		int cst;
		if (n % 10 >= 5) cst = 10 * ((n / 10) + 1);
		else cst = 10 * (n / 10);

		std::cout << 100 - cst << "\n";

	}

	return 0;
	
}