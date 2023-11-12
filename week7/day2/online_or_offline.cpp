#include <bits/stdc++.h>

int32_t main() {

	std::ios_base::sync_with_stdio(NULL);
	std::cin.tie(nullptr); std::cout.tie(nullptr);

	int _; std::cin >> _;
	while (_--) {

		double online, offline; std::cin >> online >> offline;

		online = (online * 0.9);
		if (online > offline) std::cout << "DINING" << std::endl;
		else if (online < offline) std::cout << "ONLINE" << std::endl;
		else std::cout << "EITHER" << std::endl;

	}

	return 0;
}