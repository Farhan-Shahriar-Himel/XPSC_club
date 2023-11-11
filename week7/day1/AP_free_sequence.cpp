#include<iostream>

std::string __() {

	int n; scanf("%d", &n); int a[n];
	for (auto &el: a) scanf("%d", &el);

	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			for (int k = j + 1; k < n; k++) 
				if (a[j] - a[i] == a[k] - a[j])
					return "No";

	return "Yes";

}

int32_t main() {

	int _; scanf("%d", &_);
	while(_--) 
	std::cout << __() << "\n";

	return 0;

}