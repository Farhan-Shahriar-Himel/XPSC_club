#include <bits/stdc++.h>

int32_t main() {

	std::ios_base::sync_with_stdio(NULL);
	std::cin.tie(nullptr); std::cout.tie(nullptr);

	int _; std::cin >> _;
	while (_--) {

		int x, y; std::cin >> x >> y;
		if (x * 2 <= y) std::cout << x * 5 << "\n";
		else std::cout << y + y + x << "\n";

	}

	return 0;

}