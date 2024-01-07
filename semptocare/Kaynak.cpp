#include <iostream>
#include <string>
//#include <SFML/Graphics.hpp>
//#include <SFML/Window.hpp>
#include  "Header.h"

using namespace std;

void findBodyParts(string part, string name, long long int idNumber, int age, string gender, int activite, float height, float weight, string sigara, string alcol, string medic, string alergic) {

    organ human1;

    if (part == "eye") {
        string symptom1, symptom2, symptom3, symptom4, symptom6, symptom5;
        eye* EyeOrgan = new eye;
        symptom6 = EyeOrgan->getBodyPart();
        symptom1 = EyeOrgan->blurredVision();
        symptom2 = EyeOrgan->eyePain();
        symptom3 = EyeOrgan->eyeSweell();
        if ((symptom1 == "no") && (symptom2 == "no") && (symptom3 == "no")) {
            symptom4 = EyeOrgan->nothingSymptom();
        }
        EyeOrgan->findEyeDisease(symptom1, symptom2, symptom3, symptom4, name, idNumber, age, gender, activite, height, weight, sigara, alcol, medic, alergic, symptom6);
        delete EyeOrgan;
    }

    else if (part == "mouth") {
        string symptom1, symptom2, symptom4, symptom5, symptom6, symptom7;
        mouth* mouthOrgan = new mouth;
        symptom7 = mouthOrgan->getBodyPart();
        symptom1 = mouthOrgan->tasteDisaster();
        symptom2 = mouthOrgan->bleedingTeeth();

        symptom4 = mouthOrgan->mouthDryness();
        symptom5 = mouthOrgan->mouthCankerSores();
        if ((symptom1 == "no") && (symptom2 == "no") && (symptom4 == "no") && (symptom5 == "no")) {
            symptom6 = mouthOrgan->nothingSymptom();
        }
        mouthOrgan->findMouthDisease(symptom1, symptom2, symptom4, symptom5, symptom6, name, idNumber, age, gender, activite, height, weight, sigara, alcol, medic, alergic, symptom7);
        delete mouthOrgan;
    }

    else if (part == "brain") {
        string symptom1, symptom2, symptom3, symptom4, symptom5, symptom6;
        brain* brainOrgan = new brain;
        symptom6 = brainOrgan->getBodyPart();
        symptom1 = brainOrgan->headacheSymptom();
        symptom2 = brainOrgan->seizureSymptom();
        symptom3 = brainOrgan->memoryLossSymptom();
        symptom4 = brainOrgan->panicAttackSymptom();

        if ((symptom1 == "no") && (symptom2 == "no") && (symptom3 == "no") && (symptom4 == "no")) {
            symptom5 = brainOrgan->nothingSymptom();
        }
        brainOrgan->findBrainDisease(symptom1, symptom2, symptom3, symptom4, symptom5, name, idNumber, age, gender, activite, height, weight, sigara, alcol, medic, alergic, symptom6);
        delete brainOrgan;
    }

    else if (part == "chest") {
        string symptom1, symptom2, symptom3, symptom4, symptom5, symptom6;
        chest* chestOrgan = new chest;
        symptom6 = chestOrgan->getBodyPart();
        symptom1 = chestOrgan->chestPain();
        symptom2 = chestOrgan->shortnessOfBreath();
        symptom3 = chestOrgan->cough();
        symptom4 = chestOrgan->fever();

        if ((symptom1 == "no") && (symptom2 == "no") && (symptom3 == "no") && (symptom4 == "no")) {
            symptom5 = chestOrgan->nothingSymptom();
        }
        chestOrgan->findChestDisease(symptom1, symptom2, symptom3, symptom4, symptom5, name, idNumber, age, gender, activite, height, weight, sigara, alcol, medic, alergic, symptom6);
        delete chestOrgan;
    }

    else if (part == "heart") {
        string symptom1, symptom2, symptom3, symptom4, symptom5, symptom6;
        heart* heartOrgan = new heart;
        symptom6 = heartOrgan->getBodyPart();
        symptom1 = heartOrgan->chestPpain();
        symptom2 = heartOrgan->shortnessOfBbreath();
        symptom3 = heartOrgan->palpitations();
        symptom4 = heartOrgan->fatigue();

        if ((symptom1 == "no") && (symptom2 == "no") && (symptom3 == "no") && (symptom4 == "no")) {
            symptom5 = heartOrgan->nothingSymptom();
        }
        heartOrgan->findHeartDisease(symptom1, symptom2, symptom3, symptom4, symptom5, name, idNumber, age, gender, activite, height, weight, sigara, alcol, medic, alergic, symptom6);
        delete heartOrgan;
    }

    else if (part == "abdomen") {
        string symptom1, symptom2, symptom3, symptom4, symptom5, symptom6;
        abdomen* abdomenOrgan = new abdomen;
        symptom6 = abdomenOrgan->getBodyPart();
        symptom1 = abdomenOrgan->abdominalPain();
        symptom2 = abdomenOrgan->nausea();
        symptom3 = abdomenOrgan->vomiting();
        symptom4 = abdomenOrgan->bloating();

        if ((symptom1 == "no") && (symptom2 == "no") && (symptom3 == "no") && (symptom4 == "no")) {
            symptom5 = abdomenOrgan->nothingSymptom();
        }
        abdomenOrgan->findAbdominalDisease(symptom1, symptom2, symptom3, symptom4, symptom5, name, idNumber, age, gender, activite, height, weight, sigara, alcol, medic, alergic, symptom6);
        delete abdomenOrgan;
    }

    else if (part == "arms") {
        string symptom1, symptom2, symptom3, symptom4, symptom5, symptom6;
        arms* armOrgan = new arms;
        symptom6 = armOrgan->getBodyPart();
        symptom1 = armOrgan->armPain();
        symptom2 = armOrgan->armSwelling();
        symptom3 = armOrgan->armWeakness();
        symptom4 = armOrgan->armNumbness();

        if ((symptom1 == "no") && (symptom2 == "no") && (symptom3 == "no") && (symptom4 == "no")) {
            symptom5 = armOrgan->nothingSymptom();
        }
        armOrgan->findArmDisease(symptom1, symptom2, symptom3, symptom4, symptom5, name, idNumber, age, gender, activite, height, weight, sigara, alcol, medic, alergic, symptom6);
        delete armOrgan;
    }

    else if (part == "hands") {
        string symptom1, symptom2, symptom3, symptom4, symptom5, symptom6;
        hands* handOrgan = new hands;
        symptom6 = handOrgan->getBodyPart();
        symptom1 = handOrgan->handPain();
        symptom2 = handOrgan->handSwelling();
        symptom3 = handOrgan->handWeakness();
        symptom4 = handOrgan->handNumbness();

        if ((symptom1 == "no") && (symptom2 == "no") && (symptom3 == "no") && (symptom4 == "no")) {
            symptom5 = handOrgan->nothingSymptom();
        }
        handOrgan->findHandDisease(symptom1, symptom2, symptom3, symptom4, symptom5, name, idNumber, age, gender, activite, height, weight, sigara, alcol, medic, alergic, symptom6);
        delete handOrgan;
    }

    else if (part == "shoulders") {
        string symptom1, symptom2, symptom3, symptom4, symptom5, symptom6;
        shoulders* shoulderOrgan = new shoulders;
        symptom6 = shoulderOrgan->getBodyPart();
        symptom1 = shoulderOrgan->shoulderPain();
        symptom2 = shoulderOrgan->shoulderSwelling();
        symptom3 = shoulderOrgan->shoulderWeakness();
        symptom4 = shoulderOrgan->shoulderNumbness();

        if ((symptom1 == "no") && (symptom2 == "no") && (symptom3 == "no") && (symptom4 == "no")) {
            symptom5 = shoulderOrgan->nothingSymptom();
        }
        shoulderOrgan->findShoulderDisease(symptom1, symptom2, symptom3, symptom4, symptom5, name, idNumber, age, gender, activite, height, weight, sigara, alcol, medic, alergic, symptom6);
        delete shoulderOrgan;
    }

    else if (part == "foot") {
        string symptom1, symptom2, symptom3, symptom4, symptom5, symptom6;
        foot* footOrgan = new foot;
        symptom6 = footOrgan->getBodyPart();
        symptom1 = footOrgan->footPain();
        symptom2 = footOrgan->footSwelling();
        symptom3 = footOrgan->footWeakness();
        symptom4 = footOrgan->footNumbness();

        if ((symptom1 == "no") && (symptom2 == "no") && (symptom3 == "no") && (symptom4 == "no")) {
            symptom5 = footOrgan->nothingSymptom();
        }
        footOrgan->findFootDisease(symptom1, symptom2, symptom3, symptom4, symptom5, name, idNumber, age, gender, activite, height, weight, sigara, alcol, medic, alergic, symptom6);
        delete footOrgan;
    }

    else if (part == "legs") {
        string symptom1, symptom2, symptom3, symptom4, symptom5, symptom6;
        legs* legOrgan = new legs;
        symptom6 = legOrgan->getBodyPart();
        symptom1 = legOrgan->legPain();
        symptom2 = legOrgan->legSwelling();
        symptom3 = legOrgan->legWeakness();
        symptom4 = legOrgan->legNumbness();

        if ((symptom1 == "no") && (symptom2 == "no") && (symptom3 == "no") && (symptom4 == "no")) {
            symptom5 = legOrgan->nothingSymptom();
        }
        legOrgan->findLegDisease(symptom1, symptom2, symptom3, symptom4, symptom5, name, idNumber, age, gender, activite, height, weight, sigara, alcol, medic, alergic, symptom6);
        delete legOrgan;
    }

    else {
        cout << "Invalid input." << endl;
        part = human1.getBodyPart();
        findBodyParts(part, name, idNumber, age, gender, activite, height, weight, sigara, alcol, medic, alergic);
    }
}

// ACİL SERVİS PROTOKOLÜ TANIMLANACAK

int main() {

   /* int xPosition = 0, yPosition = 0;

     sf::Event olay;
     sf::RenderWindow window;
     window.create(sf::VideoMode(800, 600), "Symptocare");
     sf::Texture kaplama;
     sf::CircleShape daire(30.f);
     daire.setPosition(350.0f, 275.0f);

     sf::RectangleShape arı1(sf::Vector2f(100.0f, 50.0f));
     arı1.setPosition(350.0f, 275.0f);
     arı1.setFillColor(sf::Color::Yellow);

     sf::RectangleShape arı2(sf::Vector2f(50.0f, 50.0f));
     arı2.setPosition(450.0f, 250.0f);
     arı2.setFillColor(sf::Color::Yellow);

     sf::CircleShape arı3(10.0f);
     arı3.setPosition(465.0f, 275.0f);
     arı3.setFillColor(sf::Color::Black);

     sf::CircleShape arı4(10.0f);
     arı4.setPosition(505.0f, 275.0f);
     arı4.setFillColor(sf::Color::Black);
     


    /*if (kaplama.loadFromFile("ressim") == false) {
         cout << "olmadi ";
     }*/
     //Üst satırlar da kod parçası resim dosyası içindi 






    cout << "ACİL SERVİS PROTOKOLÜ TANIMLANACAK!!!!!!!!!!!!!!!!!!!!!!!!!!!";
    user user;

    string part, isim, habit, gender, sigara, alkol, alergi, ilac;
    int yas, activity;
    long long int TCKimlikNo;
    float boy, kilo;
    organ insan1;



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
            isim = user.getName();
            TCKimlikNo = user.getİDNumber();
            yas = user.getAge();
            gender = user.getGender();
            activity = user.getActivity();
            boy = user.getHeight();
            kilo = user.getWeight();
            sigara = user.getSmoking();
            alkol = user.getDrinking();
            ilac = user.getMedication();
            alergi = user.getAlergic();
            part = insan1.getBodyPart();
            findBodyParts(part, isim, TCKimlikNo, yas, gender, activity, boy, kilo, sigara, alkol, ilac, alergi);

        }
        else if (choiceForMenu != 2) {
            cout << "Invalid input. Please enter 1 or 2." << endl;
        }
    }

    /*while (window.isOpen())
    {

        sf::Event olay;
        while (window.pollEvent(olay))
        {


            if (olay.type == sf::Event::Closed){
                window.close();
            }
            if (olay.type == sf::Event::MouseButtonPressed) {
                if (olay.mouseButton.button == sf::Mouse::Left) {
                    xPosition = olay.mouseButton.x;
                    yPosition = olay.mouseButton.y;
                }
            }
            if (olay.type == sf::Event::MouseMoved) {
                xPosition = olay.mouseMove.x;
                yPosition = olay.mouseMove.y;
            }

            window.clear(sf::Color::Transparent);
            window.draw(arı1);
            window.draw(arı2);
            window.draw(arı3);
            window.draw(arı4);
            window.draw(daire);
            

            window.display();
        }
    }
    */
         


        
     

    cout << " Thank you for choose us :) Get well soon ! ." << endl;


    return 0;
}
