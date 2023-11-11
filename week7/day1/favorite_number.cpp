#include<stdio.h>

void __() {

	int n; 
	scanf("%d", &n);

	if (n % 7 == 0 and n % 2 == 0) printf("Alice\n");
	else if (n % 9 == 0 and (n & 1)) printf("Bob\n");
	else printf("Charlie\n");

}

int main() {

	int _; scanf("%d", &_);
	while (_--) __();

}