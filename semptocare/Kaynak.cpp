#include <iostream>
#include <string>

#include  "Üst Bilgi.h"

using namespace std;

void findBodyParts(string part) {

    human human1;

    if (part == "eye") {
        string symptom1, symptom2, symptom3, symptom4,symptom6;
        eye* myEye = new eye;
        symptom6 = myEye->getBodyPart();
        symptom1 = myEye->blurredVision();
        symptom2 = myEye->eyePain();
        symptom3 = myEye->eyeSweell();
        if ((symptom1 == "no") && (symptom2 == "no") && (symptom3 == "no")) {
            symptom4 = myEye->nothingSymptom();
        }
        myEye->findEyeDisaster(symptom1, symptom2, symptom3, symptom4);
        delete myEye;
    }

    else if (part == "mouth") {
        string symptom1, symptom2, symptom3, symptom4, symptom5, symptom6,symptom7;
        mouth* myMouth = new mouth;
        symptom7 = myMouth->getBodyPart();
        symptom1 = myMouth->tasteDisaster();
        symptom2 = myMouth->bleedingTeeth();
        symptom3 = myMouth->toothLosse();
        symptom4 = myMouth->mouthDryness();
        symptom5 = myMouth->mouthCankerSores();
        if ((symptom1 == "no") && (symptom2 == "no") && (symptom3 == "no") && (symptom4 == "no") && (symptom5 == "no")) {
            symptom6 = myMouth->nothingSymptom();
        }
        myMouth->findMouthDisaster(symptom1, symptom2, symptom3, symptom4, symptom5, symptom6);
        delete myMouth;
    }

    else if (part == "brain") {
        string symptom1, symptom2, symptom3, symptom4, symptom5,symptom6;
        brain* myBrain = new brain;
        symptom6=myBrain->getBodyPart();
        symptom1 = myBrain->headacheSymptom();
        symptom2 = myBrain->seizureSymptom();
        symptom3 = myBrain->memoryLossSymptom();
        symptom4 = myBrain->panicAttackSymptom();

        if ((symptom1 == "no") && (symptom2 == "no") && (symptom3 == "no") && (symptom4 == "no")) {
            symptom5 = myBrain->nothingSymptom();
        }
        myBrain->findBrainDisease(symptom1, symptom2, symptom3, symptom4, symptom5);
        delete myBrain;
    }

    else if (part == "chest") {
        string symptom1, symptom2, symptom3, symptom4, symptom5,symptom6;
        chest* myChest = new chest;
        symptom6=myChest->getBodyPart();
        symptom1 = myChest->chestPain();
        symptom2 = myChest->shortnessOfBreath();
        symptom3 = myChest->cough();
        symptom4 = myChest->fever();

        if ((symptom1 == "no") && (symptom2 == "no") && (symptom3 == "no") && (symptom4 == "no")) {
            symptom5 = myChest->nothingSymptom();
        }
        myChest->findChestDisease(symptom1, symptom2, symptom3, symptom4, symptom5);
        delete myChest;
    }

    else if (part == "heart") {
        string symptom1, symptom2, symptom3, symptom4, symptom5, symptom6;
        heart* myHeart = new heart;
        symptom6 = myHeart->getBodyPart();
        symptom1 = myHeart->chestPpain();
        symptom2 = myHeart->shortnessOfBbreath();
        symptom3 = myHeart->palpitations();
        symptom4 = myHeart->fatigue();

        if ((symptom1 == "no") && (symptom2 == "no") && (symptom3 == "no") && (symptom4 == "no")) {
            symptom5 = myHeart->nothingSymptom();
        }
        myHeart->findHeartCondition(symptom1, symptom2, symptom3, symptom4, symptom5);
        delete myHeart;
    }

    else if (part == "abdomen") {
        string symptom1, symptom2, symptom3, symptom4, symptom5,symptom6;
        abdomen* myAbdomen = new abdomen;
        symptom6= myAbdomen->getBodyPart();
        symptom1 = myAbdomen->abdominalPain();
        symptom2 = myAbdomen->nausea();
        symptom3 = myAbdomen->vomiting();
        symptom4 = myAbdomen->bloating();

        if ((symptom1 == "no") && (symptom2 == "no") && (symptom3 == "no") && (symptom4 == "no")) {
            symptom5 = myAbdomen->nothingSymptom();
        }
        myAbdomen->findAbdominalCondition(symptom1, symptom2, symptom3, symptom4, symptom5);
        delete myAbdomen;
    }

    else if (part == "arms") {
        string symptom1, symptom2, symptom3, symptom4, symptom5, symptom6;
        arms* myArms = new arms;
        symptom6= myArms->getBodyPart();
        symptom1 = myArms->armPain();
        symptom2 = myArms->armSwelling();
        symptom3 = myArms->armWeakness();
        symptom4 = myArms->armNumbness();

        if ((symptom1 == "no") && (symptom2 == "no") && (symptom3 == "no") && (symptom4 == "no")) {
            symptom5 = myArms->nothingSymptom();
        }
        myArms->findArmCondition(symptom1, symptom2, symptom3, symptom4, symptom5);
        delete myArms;
    }

    else if (part == "hands") {
        string symptom1, symptom2, symptom3, symptom4, symptom5,symptom6;
        hands* myHands = new hands;
        symptom6= myHands->getBodyPart();
        symptom1 = myHands->handPain();
        symptom2 = myHands->handSwelling();
        symptom3 = myHands->handWeakness();
        symptom4 = myHands->handNumbness();

        if ((symptom1 == "no") && (symptom2 == "no") && (symptom3 == "no") && (symptom4 == "no")) {
            symptom5 = myHands->nothingSymptom();
        }
        myHands->findHandCondition(symptom1, symptom2, symptom3, symptom4, symptom5);
        delete myHands;
    }

    else if (part == "shoulders") {
        string symptom1, symptom2, symptom3, symptom4, symptom5;
        shoulders* myShoulders = new shoulders;
        symptom1 = myShoulders->shoulderPain();
        symptom2 = myShoulders->shoulderSwelling();
        symptom3 = myShoulders->shoulderWeakness();
        symptom4 = myShoulders->shoulderNumbness();

        if ((symptom1 == "no") && (symptom2 == "no") && (symptom3 == "no") && (symptom4 == "no")) {
            symptom5 = myShoulders->nothingSymptom();
        }
        myShoulders->findShoulderCondition(symptom1, symptom2, symptom3, symptom4, symptom5);
        delete myShoulders;
    }

    else if (part == "foot") {
        string symptom1, symptom2, symptom3, symptom4, symptom5;
        foot* myFoot = new foot;
        symptom1 = myFoot->footPain();
        symptom2 = myFoot->footSwelling();
        symptom3 = myFoot->footWeakness();
        symptom4 = myFoot->footNumbness();

        if ((symptom1 == "no") && (symptom2 == "no") && (symptom3 == "no") && (symptom4 == "no")) {
            symptom5 = myFoot->nothingSymptom();
        }
        myFoot->findFootCondition(symptom1, symptom2, symptom3, symptom4, symptom5);
        delete myFoot;
    }

    else if (part == "legs") {
        string symptom1, symptom2, symptom3, symptom4, symptom5;
        legs* myLegs = new legs;
        symptom1 = myLegs->legPain();
        symptom2 = myLegs->legSwelling();
        symptom3 = myLegs->legWeakness();
        symptom4 = myLegs->legNumbness();

        if ((symptom1 == "no") && (symptom2 == "no") && (symptom3 == "no") && (symptom4 == "no")) {
            symptom5 = myLegs->nothingSymptom();
        }
        myLegs->findLegCondition(symptom1, symptom2, symptom3, symptom4, symptom5);
        delete myLegs;
    }

    else {
        cout << "Invalid input." << endl;
        part = human1.getBodyPart();
        findBodyParts(part);
    }
}

// ACİL SERVİS PROTOKOLÜ TANIMLANACAK

int main() {
    
    cout << "ACİL SERVİS PROTOKOLÜ TANIMLANACAK!!!!!!!!!!!!!!!!!!!!!!!!!!!";
    user user;
    string part;

    human insan1;
    part = insan1.getBodyPart();
    findBodyParts(part);
    
    /*string choiceForEmergency;
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
    */
    cout << " Bizi tercih ettiginiz için tesekkür ederiz." << endl;

    return 0;
}
