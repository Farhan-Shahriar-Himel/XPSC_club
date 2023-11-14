#include <bits/stdc++.h>

int32_t main() {

	std::ios_base::sync_with_stdio(NULL);
	std::cin.tie(nullptr); std::cout.tie(nullptr);

	std::string s; std::cin >> s;
	std::map < char, int > mp;

	for (auto el: s) mp[el]++;

	std::list < char > Front, End;

	std::string odd = "";
	for (auto el: mp) {

		if (el.second & 1) {

			if (odd == "") {

				for (int i = 0; i < el.second; i++) 
					odd += el.first;

			}
			else {

				std::cout << "NO SOLUTION\n";;
				return 0;

			}

		}

		else {

			int ordhek = el.second / 2;
			for (int i = 0; i < ordhek; i++) 
				Front.push_front(el.first);

			for (int i = 0; i < ordhek; i++) 
				End.push_back(el.first);

		} 

	}

	for (auto el: Front) std::cout << el;
	std::cout << odd;
	for (auto el: End) std::cout << el;

	return 0;

}