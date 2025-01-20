#include <stdio.h>

typedef struct Menu{
	const char* option;
}Menu;

typedef struct Application{
	const char* nom;
	int nb_menus;
	Menu *menus;
}Application;



void runApplication(const Application* app) {
		int i = 0;
		int choixU = 0;
		printf("Choisissez une option (0 pour quitter )");
		scanf_s("%d", &choixU);
		if (choixU == 0) {
			exit();
		}
		else if (choixU == 1) {
			printf("Vous avez choisi : %d.%s", i + 1, (*app).menus[i].option);
		}
		else if (choixU == 2) {
			printf("Vous avez choisi : %d.%s", i + 2, (*app).menus[i].option);
		}
		else if (choixU != 0 && choixU != 1 && choixU != 2) {
			printf("Choix invalide, veuillez réessayer");
		}
}

void displayMenu(const Application* app) {
	printf("--%s--\n", (*app).nom);

	for (int i = 0; i < (*app).nb_menus; i++) {
		printf("%d.%s\n", i + 1, (*app).menus[i].option);
		runApplication(app);
	};
}



int main() {
	Menu photoMenus[] = { {"Regarder une photo"}, { "Prendre une photo" } };
	Application photoApp = { {"Photos"}, {"2"}, {photoMenus} };

	displayMenu(&photoApp);
	runApplication(&photoApp);

	return 0;
}
