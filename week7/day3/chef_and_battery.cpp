#include<bits/stdc++.h>

int32_t main() {

	std::ios_base::sync_with_stdio(NULL);
	std::cin.tie(nullptr); std::cout.tie(nullptr);

	int _; std::cin >> _;
	while (_--) {

		int n; std::cin >> n;
		int cnt = 0;
		while (n != 50) {

			if (n > 50) n -= 3, cnt++;
			else n += 2, cnt++;

		}

		std::cout << cnt << std::endl;

	}
	
}