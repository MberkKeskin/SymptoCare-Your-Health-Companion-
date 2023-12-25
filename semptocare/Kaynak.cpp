#include <iostream>
#include <string>
#include <locale.h>
#include "Human.h"

using namespace std;

void findBodyParts(string part) {

    human human1;

    if (part == "eye") {
        string symptom1, symptom2, symptom3, symptom4;
        eye* myEye = new eye;
        symptom1 = myEye->blurredVision();
        symptom2 = myEye->eyePain();
        symptom3 = myEye->eyeSweell();
        symptom4 = myEye->nothingSymptom();

        myEye->findEyeDisaster(symptom1, symptom2, symptom3, symptom4);
        delete myEye;
    }

    else if (part == "mouth") {
        string symptom1, symptom2, symptom3, symptom4, symptom5, symptom6;
        mouth* myMouth = new mouth;
        symptom1 = myMouth->tasteDisaster();
        symptom2 = myMouth->bleedingTeeth();
        symptom3 = myMouth->toothLosse();
        symptom4 = myMouth->mouthDryness();
        symptom5 = myMouth->mouthCankerSores();
        symptom6 = myMouth->nothingSymptom();

        myMouth->findMouthDisaster(symptom1, symptom2, symptom3, symptom4, symptom5, symptom6);
        delete myMouth;
    }

    else if (part == "brain") {
        string symptom1, symptom2, symptom3, symptom4, symptom5;
        brain* myBrain = new brain;
        symptom1 = myBrain->headacheSymptom();
        symptom2 = myBrain->seizureSymptom();
        symptom3 = myBrain->memoryLossSymptom();
        symptom4 = myBrain->panicAttackSymptom();
        symptom5 = myBrain->nothingSymptom();

        myBrain->findBrainDisease(symptom1, symptom2, symptom3, symptom4, symptom5);
        delete myBrain;
    }

    else if (part == "chest") {
        string symptom1, symptom2, symptom3, symptom4, symptom5;
        chest* myChest = new chest;
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

// ACİL SERVİS PROTOKOLÜ TANIMLANACAK

int main() {
    setlocale(LC_ALL, "Turkish");
    cout << "ACİL SERVİS PROTOKOLÜ TANIMLANACAK!!!!!!!!!!!!!!!!!!!!!!!!!!!";
    user user;
    string part;

    human insan1;


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
            part = insan1.getBodyPart();
            findBodyParts(part);
        }
        else if (choiceForMenu != 2) {
            cout << "Invalid input. Please enter 1 or 2." << endl;
        }
    }

    cout << " Bizi tercih ettiginiz için tesekkür ederiz." << endl;

    return 0;
}
