#include <iostream>
#include <string>
#include <locale.h>
#include "Human.h"

using namespace std;

void findBodyParts(string part) {

    human human1;

    if (part == "eye") {
        eye* myEye;
        myEye->arda();
        delete myEye;
    }

    else if (part == "mouth") {

    }

    else if (part == "brain") {

    }

    else if (part == "chest") {

    }

    else if (part == "heart") {

    }

    else if (part == "abdomen") {

    }

    else if (part == "arms") {

    }

    else if (part == "hands") {

    }

    else if (part == "shoulders") {

    }

    else if (part == "foot") {

    }

    else if (part == "legs") {

    }

    else {
        cout << "Invalid input." << endl;
        part = human1.getBodyPart();
    }
}

int main() {
    setlocale(LC_ALL, "Turkish");

    user user;
    string part;


    string choiceForEmergency;
    int choiceForMenu = 0;

    cout << " Welcome to SymptoCare!" << endl;

    while (true) {
        cout << " Do you have an emergency situation? (yes/no)" << endl;
        cin >> choiceForEmergency;

        if (choiceForEmergency == "yes") {
            cout << "En kisa zamanda acil servise müracaat ediniz." << endl; 
            return 0;
        }
        else if (choiceForEmergency == "no") {
            break;  
        }
        else {
            cout << "Invalid input. Please enter 'yes' or 'no'." << endl;
        }
    }

    while (choiceForMenu != 2) {
        cout << " 1. Enter Patient information" << endl;
        cout << " 2. Exit" << endl;

        cout << " Enter what do you want" << endl;
        cin >> choiceForMenu;

        if (cin.fail()) {
            cout << "Invalid input. Please enter a valid number." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (choiceForMenu == 1) {
            user.getInfo();
        }
        else if (choiceForMenu != 2) {
            cout << "Invalid input. Please enter 1 or 2." << endl;
        }
    }

    cout << " Bizi tercih ettiginiz için tesekkür ederiz." << endl;

    return 0;
}
