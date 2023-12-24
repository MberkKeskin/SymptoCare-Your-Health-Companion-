#include <iostream>
#include <string>
#include <locale.h>
#include "Üst Bilgi.h"

using namespace std;

void findBodyParts(string part) {

    human human1;

    if (part == "eye") {
        string semptom1,semptom2,semptom3,semptom4;
        eye* myEye=new eye;
        semptom1 = myEye->blurredVision();
        semptom2 = myEye->eyePain();
        semptom3 = myEye->eyeSweell();
        semptom4 = myEye->nothingSymptom();
       
      
        myEye->findEyeDisaster(semptom1, semptom2, semptom3, semptom4);
        delete myEye;
    }

    else if (part == "mouth") {
        string semptom1, semptom2, sempton3, sempton4, sempton5, sempton6;
        mouth* myMouth = new mouth;
        semptom1 = myMouth->tasteDisaster();
        semptom2 = myMouth->bleedingTeeth();
        semptom3 = myMouth->toothLosse();
        semptom4 = myMouth->mouthDryness();
        semptom5 = myMouth->mouthCankerSores();
        semptom6 = myMouth->nothingSymptom();

        myMouth->findMouthDisaster(semptom1, semptom2, sempton3, sempton4, sempton5, sempton6);
        delete myMouth;



    }

    else if (part == "brain") {
        string semptom1, semptom2, sempton3, sempton4, sempton5, sempton6, semptom7;
        brain* myBrain = new brain;
        semptom1 = myBrain->headacheSymptom();
        semptom2 = myBrain->nauseaSymptom();
        semptom3 = myBrain->seizuresSymptom();
        semptom4 = myBrain->shakingSymptom();
        semptom5 = myBrain->memoryLossSymptom();
        semptom6 = myBrain->panicAttackSymptom();
        semptom7 = myBrain->nothingSymptom();
        myMouth->findBrainDisaster(semptom1, semptom2, sempton3, sempton4, sempton5, sempton6, semptom7);
        delete myBrain;

    }

    else if (part == "chest") {
        string semptom1, semptom2, sempton3, sempton4, sempton5;
       chest* myChest = new chest;
        semptom1 = myBrain->chestPain();
        semptom2 = myBrain->shortnessOfBreath();
        semptom3 = myBrain->cough();
        semptom4 = myBrain->fever();
        semptom5 = myBrain->nothingSymptom();
        myMouth->findBrainDisaster(semptom1, semptom2, sempton3, sempton4, sempton5);
        delete myChest;

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
    part = insan1.getBodyPart();

    findBodyParts(part);


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
