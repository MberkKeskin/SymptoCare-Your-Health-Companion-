#include <iostream>
#include <string>
#include <locale.h>
#include "Human.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");

	user user;

	int choiceForMenu = 0;
	bool choiceForEmergency;

	cout << " Welcome to SymptoCare!" << endl;

	cout << " Do you have an emergency situation?" << endl;
	cin >> choiceForEmergency;

	if (choiceForEmergency) {
		cout << "En kisa zamanda acil servise müracaat ediniz.";
	}
	else {
		while (choiceForMenu != 2) {

			cout << " 1.Enter Patient information" << endl;
			cout << " 2.Exit" << endl;

			cout << " Enter what do you want" << endl;
			cin >> choiceForMenu;

			if (choiceForMenu == 1) { //HASTALARIN BILGILERINI GIRDIGI KISIM
				user.getInfo();
			}

		}


	}

	cout << " Bizi tercih ettiginiz için tesekkurler." << endl;



	return 0;

}
