#include <stdio.h>

void min_max(int tab[], int size, int *min, int *max) {

	if (size < 1)
	{
		return;
	}
		*min = tab[0];
		*max = tab[0];
		for (int i = 0; i < size; i++)
		{
			if (*min > tab[i]) {
				*min = tab[i];
			}
			if (*max < tab[i]) {
				*max = tab[i];
			}
		}
	}
int main() {
	int min = 0;
	int max = 0;
	int tableau[] = { 5, 21, 9999, -2, 1, 156, 8, 10};
	min_max(tableau, 8, &min, &max);
	printf("min = %d\nmax = %d", min, max);
	return 0;
}
