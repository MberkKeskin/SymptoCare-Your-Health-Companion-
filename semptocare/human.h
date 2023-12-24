
#pragma once
#include <iostream>
#include <limits>
#include <string>

using namespace std;

class human {
private:
	string bodyPart;

public:
	string getBodyPart() {
		cout << "What's your problem area?" << endl;
		getline(cin, bodyPart);
		return bodyPart;
	}
};

class head : public human {

};

class eye : public head, public human {

private:
	string symptomForBlurredVision, symptomForEyePain, symptomForEyeSwell, symptom;

public:

	string blurredVision() {
		cout << " Do you have blurred vision? (yes/no) " << endl;
		cin >> symptomForBlurredVision;
		return symptomForBlurredVision;
	}

	string eyePain() {
		cout << " Do you have eye pain? (yes/no) " << endl;
		cin >> symptomForEyePain;
		return symptomForEyePain;
	}



	string eyeSweell() {
		cout << " Do you have eye sweel? (yes/no) " << endl;
		cin >> symptomForEyeSwell;
		return symptomForEyeSwell;
	}

	string nothingSymptom() {
		cout << " Do you have other symptom? (yes/no) " << endl;
		cin >> symptom;
		return symptom;
	}

	void findEyeDisaster(string semptomBluredVision, string semptomeyePain, string semptomEyeSwell, string symptom) {
		if ((semptomBluredVision == "yes" || semptomBluredVision == "Yes" || semptomBluredVision == "YES") && (semptomeyePain == "yes" || semptomeyePain == "YES" || semptomeyePain == "Yes")) {
			cout << " You have Glokom disease " << endl;
			//ABİ NORMALDE BURAYI TEXT FİLE RAPOR OLARAK YAPCAZ BEN SADECE GEÇİÇİ YAZDIM
		}
		else if (semptomBluredVision == "yes" && semptomeyePain == "yes") {
			cout << " You have katarakt disease " << endl;
			//ABİ NORMALDE BURAYI TEXT FİLE RAPOR OLARAK YAPCAZ BEN SADECE GEÇİÇİ YAZDIM
		}
		else if (semptomEyeSwell == "yes") {
			cout << " You have Alerjic Konjonktivit disease " << endl;
			//ABİ NORMALDE BURAYI TEXT FİLE RAPOR OLARAK YAPCAZ BEN SADECE GEÇİÇİ YAZDIM
		}
		else if (symptom == "yes") {
			cout << " If you have other symptoms please go to doctor again " << endl;

		}
		else if (symptom == "no") {
			cout << "Please enter true department. Eye department might be the wrong department for you " << endl;
		}

	}

};

class mouth : public head, public human {
private:
	string symptomTasteDiasater, symptomBleedingTeeth, symptomForToothLoss, symptomMouthDryness, symptomMouthCankerSores, symptom;

public:

	string tasteDisaster() {
		cout << " Do you have taste loss? (yes/no) " << endl;
		cin >> symptomTasteDiasater;
		return symptomTasteDiasater;
	}

	string bleedingTeeth() {
		cout << " Do you have bleeding teeth? (yes/no) " << endl;
		cin >> symptomBleedingTeeth;
		return symptomBleedingTeeth;
	}

	string toothLosse() {
		cout << " Do you have any tooth loss? (yes/no) " << endl;
		cin >> symptomForToothLoss;
		return symptomForToothLoss;
	}

	string mouthDryness() {
		cout << " Do you have mouth dryness ? (yes/no) " << endl;
		cin >> symptomMouthDryness;
		return symptomMouthDryness;
	}

	string mouthCankerSores() {
		cout << " Do you have mouthCankerSores ? (yes/no) " << endl;
		cin >> symptomMouthCankerSores;
		return symptomMouthCankerSores;
	}

	string nothingSymptom() {
		cout << " Do you have other Symptoms ? (yes/no) " << endl;
		cin >> symptom;
		return symptom;
	}

	void findMouthDisaster(string semptomTasteDisaster, string semptomBleddingTeeth, string semptomToothLose, string semptomDryness, string symptomCankerSores, string symptom) {
		if ((semptomTasteDisaster == "yes" || semptomTasteDisaster == "Yes" || semptomTasteDisaster == "YES") && (semptomBleddingTeeth == "YES" || semptomBleddingTeeth == "Yes" || semptomBleddingTeeth == "yes")) {
			cout << "You have tongue cancer";
		}
		else if (symptomCankerSores == "yes" || symptomCankerSores == "YES" || symptomCankerSores == "Yes") {
			cout << "You have cankerSores";
		}
		else if ((semptomDryness == "yes" || semptomDryness == "Yes" || semptomDryness == "YES") && (semptomToothLose == "yes" || semptomToothLose == "Yes" || semptomToothLose == "YES")) {
			cout << "You have frengi";
		}

		else if ((semptomBleddingTeeth == "yes" || semptomBleddingTeeth == "Yes" || semptomBleddingTeeth == "YES") && (semptomToothLose == "yes" || semptomToothLose == "Yes" || semptomToothLose == "YES")) {
			cout << "Immediately apply to a dentist.";
		}

		else if (symptom == "yes" || symptom == "Yes" || symptom == "YES") {
			cout << " You have other mouth disaster " << endl;
		}

		else if (symptom == "no" || symptom == "No" || symptom == "NO") {
			cout << "Please enter true department" << endl;
		}
	}
};

class brain : public head, public human {
private:
	string headache, nausea, seizures, shaking, memoryLoss, panicAttack, symptom;

public: 
	string headacheSymptom() {
		cout << "Do you have strong headaches? (yes/no)" << endl;
		cin >> headache;
		return headache;
	}

	string nauseaSymptom() {
		cout << "Do you have nausea? (yes/no)" << endl;
		cin >> nausea;
		return nausea;
	}

	string seizureSymptom() {
		cout << "Do you have seizures very often? (yes/no)" << endl;
		cin >> seizures;
		return seizures;
	}

	string shakingSymptom() {
		cout << "Does your body shake more than an average person? (yes/no)" << endl;
		cin >> shaking;
		return shaking;
	}

	string memoryLossSymptom() {
		cout << "Do you have memory loss? (yes/no)" << endl;
		cin >> memoryLoss;
		return memoryLoss;
	}

	string panicAttackSymptom() {
		cout << "Do you have panic attacks frequently? (yes/no)" << endl;
		cin >> panicAttack;
		return panicAttack;
	}

	string nothingSymptom() {
		cout << "Do you have any other symptoms? (yes/no)" << endl;
		cin >> symptom;
		return symptom;
	}
};

class body : public human {

};

class chest : public body, public human {

};

class heart : public body, public human {

};

class abdomen : public body, public human {

};

class limb : public human {

};

class arms : public limb, public human {

};

class hands : public limb, public human {

};

class shoulders : public limb, public human {

};

class foot : public limb, public human {

};

class legs : public limb, public human {

};

class user {
private:
	string name, habit, genderSelection;
	int age, activityRate;
	long long int TCKimlik;
	float weight, height;
	bool smoking, drinking, allergic, medication, gender;

public:
	void getInfo() {
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		while (true) {
			cout << "Your name: ";
			if (getline(cin, name)) {
				break;
			}
			else {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Invalid input. Please enter a valid name." << endl;
			}
		}

		cout << "Your TC kimlik: ";
		while (!(cin >> TCKimlik)) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input. Please enter a valid TC kimlik." << endl;
		}

		cout << "Your age: ";
		while (!(cin >> age)) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input. Please enter a valid age." << endl;
		}

		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		while (true) {
			cout << "What is your gender (male/female)" << endl;
			getline(cin, genderSelection);

			if (genderSelection == "male" || genderSelection == "female") {
				gender = (genderSelection == "male");
				break;
			}
			else {
				cout << "Invalid input. Please enter 'male' or 'female'." << endl;
			}
		}

		cout << "Rate your weekly physical activity rate on a scale of 1-5.(1 being the less, 5 being the most)" << endl;
		while (!(cin >> activityRate) || activityRate < 1 || activityRate > 5) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input. Please enter a valid activity rate between 1 and 5." << endl;
		}

		cout << "Your height: ";
		while (!(cin >> height)) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input. Please enter a valid height" << endl;
		}

		cout << "Your weight: ";
		while (!(cin >> weight)) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input. Please enter a valid weight" << endl;
		}

		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		while (true) {
			cout << "Are you a smoker? (yes/no): ";
			getline(cin, habit);
			if (habit == "yes" || habit == "no") {
				smoking = (habit == "yes");
				break;
			}
			else {
				cout << "Invalid input. Please enter 'yes' or 'no'." << endl;
			}
		}

		while (true) {
			cout << "Do you drink occasionally? (yes/no): ";
			getline(cin, habit);
			if (habit == "yes" || habit == "no") {
				drinking = (habit == "yes");
				break;
			}
			else {
				cout << "Invalid input. Please enter 'yes' or 'no'." << endl;
			}
		}

		while (true) {
			cout << "Are you an allergic person? (yes/no): ";
			getline(cin, habit);
			if (habit == "yes" || habit == "no") {
				allergic = (habit == "yes");
				break;
			}
			else {
				cout << "Invalid input. Please enter 'yes' or 'no'." << endl;
			}
		}

		while (true) {
			cout << "Are you taking any medications (yes/no): ";
			getline(cin, habit);
			if (habit == "yes" || habit == "no") {
				medication = (habit == "yes");
				break;
			}
			else {
				cout << "Invalid input. Please enter 'yes' or 'no'." << endl;
			}
		}
	}
};
