// https://codeforces.com/problemset/problem/749/A

#include<stdio.h>

int main() {

	int n; scanf("%d", &n);

	int tws = n / 2;

	printf("%d\n", tws);
	if (n & 1) {
		for (int i = 0; i < tws - 1; i++) 
			printf("2 ");
		printf("3\n");
		return 0;
	}

	for (int i = 0; i < tws; i++) 
		printf("2 ");
	printf("\n");

	return 0;

}