#include<bits/stdc++.h>

int32_t main() {

	std::ios_base::sync_with_stdio(NULL);
	std::cin.tie(nullptr); std::cout.tie(nullptr);

	int _; std::cin >> _;
	while (_--) {

		int a, b, c, d; std::cin >> a >> b >> c >> d;

		int tot = a + b + c + d;
		int mx = std::max({a, b, c, d});

		if (mx > (tot - mx)) std::cout << "YES" << std::endl;
		else std::cout << "NO" << std::endl;

	}
}