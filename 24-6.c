#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>


void F1(int n) {
	printf(" %d\n", n);
	if (n < 5) {
		printf(" %d", n);
		F1(n + 1);
		F1(n + 3);
	}
}

void main() {
	F1(1);
}
