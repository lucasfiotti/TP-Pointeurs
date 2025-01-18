#include <stdio.h>

int main() {
	typedef struct {
		const char* option;
	}Menu;

	typedef struct {
		const char* nom;
		int nb_menus;
		Menu* menus;
	}Application;

}