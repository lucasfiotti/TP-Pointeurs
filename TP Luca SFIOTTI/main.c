#include <stdio.h>

typedef struct Menu{
	const char* option;
}Menu;

typedef struct Application{
	const char* nom;
	int nb_menus;
	Menu *menus;
}Application;

void displayMenu(const Application* app) {
	printf("--%s--\n", app->nom);

	for (int i = 0; i < app->nb_menus; i++) {
		printf("%d.%s\n", i + 1, app->menus[i].option);
	};
}

int main() {
	Menu photoMenus[] = { {"Regarder une photo"}, { "Prendre une photo" } };
	Application photoApp = { {"Photos"}, {"2"}, {photoMenus} };

	displayMenu(&photoApp);

	return 0;
}
