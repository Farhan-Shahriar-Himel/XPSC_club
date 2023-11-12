#include<bits/stdc++.h>

int32_t main() {

	std::ios_base::sync_with_stdio(NULL);
	std::cin.tie(nullptr); std::cout.tie(nullptr);

	int _; std::cin >> _;
	while (_--) {

		int n; std::cin >> n;

		std::vector < int > v(n);
		for (auto &el: v) std::cin >> el;

		sort(v.begin(), v.end(), std::greater < int >());

		int sum = v[0];
		int i = 1;
		while (v[i] == v[0]) i++;
		sum += v[i];
		
		std::cout << sum << std::endl;

	}

	return 0;

}