#include <stdio.h>

int main() {
	int a = 7;
	printf("%p\n", &a);
	int *p = &a;
	printf("%p\n", p);
}