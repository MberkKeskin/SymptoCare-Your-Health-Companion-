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
        string semptom1, semptom2, sempton3, sempton4, sempton5;
        brain* myBrain = new brain;
        semptom1 = myBrain->headacheSymptom();
        semptom2 = myBrain->seizuresSymptom();
        semptom3 = myBrain->memoryLossSymptom();
        semptom4 = myBrain->panicAttackSymptom();
        semptom5 = myBrain->nothingSymptom();
        
        myBrain->findBrainDisaster(semptom1, semptom2, sempton3, sempton4, sempton5);
        delete myBrain;

    }

    else if (part == "chest") {
        string semptom1, semptom2, sempton3, sempton4, sempton5;
        chest* myChest = new chest;
        semptom1 = myChest->chestPain();
        semptom2 = myChest->shortnessOfBreath();
        semptom3 = myChest->cough();
        semptom4 = myChest->fever();
        semptom5 = myChest->nothingSymptom();
        
        myChest->findChestDisease(semptom1, semptom2, sempton3, sempton4, sempton5);
        delete myChest;

    }

    else if (part == "heart") {
        string semptom1, semptom2, sempton3, sempton4, sempton5;
        heart* myHeart = new heart;
        semptom1 = myHeart->chestPpain();
        semptom2 = myHeart->shortnessOfBbreath();
        semptom3 = myHeart->palpitations();
        semptom4 = myHeart->fatigue();
        semptom5 = myHeart->nothingSymptom();
        
        myHeart->findHeartCondition(semptom1, semptom2, sempton3, sempton4, sempton5);
        delete myHeart;

    }

    else if (part == "abdomen") {
        string semptom1, semptom2, sempton3, sempton4, sempton5;
        abdomen* myAbdomen = new abdomen;
        semptom1 = myAbdomen->abdominalPain();
        semptom2 = myAbdomen->nausea();
        semptom3 = myAbdomen->vomiting();
        semptom4 = myAbdomen->bloating();
        semptom5 = myAbdomen->nothingSymptom();
        
        myAbdomen->findAbdominalCondition(semptom1, semptom2, sempton3, sempton4, sempton5);
        delete myAbdomen;


    }

    else if (part == "arms") {
        string semptom1, semptom2, sempton3, sempton4, sempton5;
        arms* myArms = new arms;
        semptom1 = myArms->armPain();
        semptom2 = myArms->armSwelling();
        semptom3 = myArms->armWeakness();
        semptom4 = myArms->armNumbness();
        semptom5 = myArms->nothingSymptom();
        
        myArms->findArmCondition(semptom1, semptom2, sempton3, sempton4, sempton5);
        delete myArms;

    }

    else if (part == "hands") {
        string semptom1, semptom2, sempton3, sempton4, sempton5;
        hands* myHands = new hands;
        semptom1 = myHands->handPain();
        semptom2 = myHands->handSwelling();
        semptom3 = myHands->handWeakness();
        semptom4 = myHands->handNumbness();
        semptom5 = myHands->nothingSymptom();
        
        myHands->findHandCondition(semptom1, semptom2, sempton3, sempton4, sempton5);
        delete myHands;


    }

    else if (part == "shoulders") {
        string semptom1, semptom2, sempton3, sempton4, sempton5;
        shoulders* myShoulders = new shoulders;
        semptom1 = myShoulders->shoulderPain();
        semptom2 = myShoulders->shoulderSwelling();
        semptom3 = myShoulders->shoulderWeakness();
        semptom4 = myShoulders->shoulderNumbness();
        semptom5 = myShoulders->nothingSymptom();
        
        myShoulders->findShoulderCondition(semptom1, semptom2, sempton3, sempton4, sempton5);
        delete myShoulders;

    }

    else if (part == "foot") {
        string semptom1, semptom2, sempton3, sempton4, sempton5;
        foot* myFoot = new foot;
        semptom1 = myFoot->footPain();
        semptom2 = myFoot->footSwelling();
        semptom3 = myFoot->footWeakness();
        semptom4 = myFoot->footNumbness();
        semptom5 = myFoot->nothingSymptom();
        
        myFoot->findFootCondition(semptom1, semptom2, sempton3, sempton4, sempton5);
        delete myFoot;

    }

    else if (part == "legs") {
        string semptom1, semptom2, sempton3, sempton4, sempton5;
        legs* myLegs = new legs;
        semptom1 = myLegs->legPain();
        semptom2 = myLegs->legSwelling();
        semptom3 = myLegs->legWeakness();
        semptom4 = myLegs->legNumbness();
        semptom5 = myLegs->nothingSymptom();
        
        myLegs->findLegCondition(semptom1, semptom2, sempton3, sempton4, sempton5);
        delete myLegs;

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
