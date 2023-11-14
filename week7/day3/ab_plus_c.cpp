#include <bits/stdc++.h>
#define int long long

int32_t main() {

	std::ios_base::sync_with_stdio(NULL);
	std::cin.tie(nullptr); std::cout.tie(nullptr);

	int _; std::cin >> _;
	while (_--) {

		int x; std::cin >> x;
	    if(x > 1) {
	       if(x <= 1e6)
	       std::cout << 1 << " " << 1 << " " << x - 1 << std::endl;
	       else if(x > 1e6 && x % 1000000!=0)
	       std::cout << 1000000 << " " << x / 1000000 << " " << x % 1000000 << std::endl;
	       else
	       std::cout << 1000000 << " " << x / 1000000 - 1 << " " << 1000000 << std::endl;
	    }
	    else
	    std::cout << -1 << std::endl;
			
	}

	return 0;

}