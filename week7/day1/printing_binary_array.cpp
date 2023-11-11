#include<stdio.h>

void __() {

	int n; scanf("%d", &n); int a[n];
	for (auto &el: a) scanf("%d", &el);

	for (auto &el: a) {
		if (el)
			printf("0 ");
		else 
			printf("1 ");
	}

	printf("\n");

}

int main() {

	int _; scanf("%d", &_);
	while (_--)
		__();

	return 0;

}