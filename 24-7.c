#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

void G3(int n);
void F1(int n) {
	if (n > 0)
		G3(n - 1);
} 
void G3(int n) {
	printf("*"); 
	if (n > 1)
		F1(n - 3);
}

void main() {
	F1(11);
}
