
#pragma once
#include <iostream>
#include <limits>
#include <string>
#include <cctype>

using namespace std;

class human {
protected:
	string bodyPart;

public:
	void convertToLowercase(string& symptom) {
		for (char& ch : symptom) {
			ch = tolower(ch);
		}
	}

	virtual string getBodyPart() {
		cout << "What's your problem area?" << endl;
		getline(cin, bodyPart);
		return bodyPart;
	}
	virtual string nothingSymptom() {
		cout << " Do you have any other symptoms? (yes/no) " << std::endl;
		string symptom;
		cin >> symptom;
		convertToLowercase(symptom);
		return symptom;
	}
};

class head : public human {
};

class eye : public head {

private:
	string symptomForBlurredVision, symptomForEyePain, symptomForEyeSwell, symptom;

public:
	string getBodyPart() override {
		cout << "What's your eye problem area?" << endl;
		getline(cin, bodyPart);
		return bodyPart;
	}

	string blurredVision() {
		cout << " Do you have blurred vision? (yes/no) " << endl;
		cin >> symptomForBlurredVision;
		human::convertToLowercase(symptomForBlurredVision);
		return symptomForBlurredVision;
	}

	string eyePain() {
		cout << " Do you have eye pain? (yes/no) " << endl;
		cin >> symptomForEyePain;
		human::convertToLowercase(symptomForEyePain);
		return symptomForEyePain;
	}

	string eyeSweell() {
		cout << " Do you have eye sweel? (yes/no) " << endl;
		cin >> symptomForEyeSwell;
		human::convertToLowercase(symptomForEyeSwell);
		return symptomForEyeSwell;
	}

	string nothingSymptom() override {
		cout << " Do you have any other Eye disease symptoms? (yes/no) " << endl;
		cin >> symptom;
		human::convertToLowercase(symptom);
		return symptom;
	}

	void findEyeDisaster(string semptomBluredVision, string semptomeyePain, string semptomEyeSwell, string symptom, string name, long long int idNumber, int age, string gender, int activite, float height, float weight, string sigara, string alcol, string medic, string alergic) {

		if ((semptomBluredVision == "yes") && (semptomeyePain == "yes") && (semptomEyeSwell == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}

			cout << "Disase area :" << bodyPart << endl;
			cout << " You have Glaucoma disease " << endl;
			//ABİ NORMALDE BURAYI TEXT FİLE RAPOR OLARAK YAPCAZ BEN SADECE GEÇİÇİ YAZDIM
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((semptomBluredVision == "yes") && (semptomeyePain == "yes") && (semptomEyeSwell == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << " You have Hipertansif Retinopati,Üveit and Optic Retinopati disease " << endl;
			//ABİ NORMALDE BURAYI TEXT FİLE RAPOR OLARAK YAPCAZ BEN SADECE GEÇİÇİ YAZDIM
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((semptomBluredVision == "no") && (semptomeyePain == "no") && (semptomEyeSwell == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}

			cout << " Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional. " << endl;
			//ABİ NORMALDE BURAYI TEXT FİLE RAPOR OLARAK YAPCAZ BEN SADECE GEÇİÇİ YAZDIM
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((semptomBluredVision == "no") && (semptomeyePain == "yes") && (semptomEyeSwell == "yes")) {

			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << " You have Orbital Selülit,Hipertansif Retinopati and cataract disease " << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((semptomBluredVision == "yes") && (semptomeyePain == "no") && (semptomEyeSwell == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << " Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional." << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((semptomBluredVision == "yes") && (semptomeyePain == "no") && (semptomEyeSwell == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << " You have Üveit,Konjonktivit and Optic Norit disease " << endl;

			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((semptomBluredVision == "no") && (semptomeyePain == "yes") && (semptomEyeSwell == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << " Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional. " << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if (symptom == "yes") {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << " If you have any other symptoms, please consult a doctor." << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if (symptom == "no") {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << "Please enter true department. Eye department might be the wrong department for you." << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << "Please enter only yes/no. Thank you. " << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;

		}


	}

};

class mouth : public head {
private:
	string symptomTasteDiasater, symptomBleedingTeeth, symptomForToothLoss, symptomMouthDryness, symptomMouthCankerSores, symptom;

public:
	string getBodyPart() override {
		cout << "What's your mouth problem area?" << endl;
		getline(cin, bodyPart);
		return bodyPart;
	}
	string tasteDisaster() {
		cout << " Do you have taste loss? (yes/no) " << endl;
		cin >> symptomTasteDiasater;
		human::convertToLowercase(symptomTasteDiasater);
		return symptomTasteDiasater;
	}

	string bleedingTeeth() {
		cout << " Do you have bleeding teeth? (yes/no) " << endl;
		cin >> symptomBleedingTeeth;
		human::convertToLowercase(symptomBleedingTeeth);
		return symptomBleedingTeeth;
	}



	string mouthDryness() {
		cout << " Do you have mouth dryness ? (yes/no) " << endl;
		cin >> symptomMouthDryness;
		human::convertToLowercase(symptomMouthDryness);
		return symptomMouthDryness;
	}

	string mouthCankerSores() {
		cout << " Do you have Canker Sores ? (yes/no) " << endl;
		cin >> symptomMouthCankerSores;
		human::convertToLowercase(symptomMouthCankerSores);
		return symptomMouthCankerSores;
	}

	string nothingSymptom() override {
		cout << " Do you have other Mouth disease Symptoms ? (yes/no) " << endl;
		cin >> symptom;
		human::convertToLowercase(symptom);
		return symptom;
	}

	void findMouthDisaster(string semptomTasteDisaster, string semptomBleddingTeeth, string semptomDryness, string symptomCankerSores, string symptom, string name, long long int idNumber, int age, string gender, int activite, float height, float weight, string sigara, string alcol, string medic, string alergic) {

		if ((semptomTasteDisaster == "yes") && (semptomBleddingTeeth == "yes") && (symptomCankerSores == "yes") && (semptomDryness == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have tongue cancer" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if ((semptomTasteDisaster == "yes") && (semptomBleddingTeeth == "yes") && (semptomDryness == "yes") && (symptomCankerSores == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Gingival Bleeding,Periodontal Disease and Periodontal disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}


		else if ((semptomTasteDisaster == "yes") && (semptomBleddingTeeth == "yes") && (semptomDryness == "no") && (symptomCankerSores == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Periodontal Disease,Taste Disorder,Xerostomia,Caries,Oral Hygiene Problems and Xerostomia disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((semptomTasteDisaster == "yes") && (semptomBleddingTeeth == "no") && (semptomDryness == "no") && (symptomCankerSores == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << "hasta yeriniz:" << bodyPart << endl;
			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((semptomTasteDisaster == "no") && (semptomBleddingTeeth == "yes") && (semptomDryness == "no") && (symptomCankerSores == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << "hasta yeriniz:" << bodyPart << endl;
			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((semptomTasteDisaster == "no") && (semptomBleddingTeeth == "no") && (semptomDryness == "yes") && (symptomCankerSores == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;

			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((semptomTasteDisaster == "no") && (semptomBleddingTeeth == "no") && (semptomDryness == "no") && (symptomCankerSores == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if ((semptomTasteDisaster == "no") && (semptomBleddingTeeth == "yes") && (semptomDryness == "yes") && (symptomCankerSores == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Canker Sores,Xerostomia, Periodontal disease and  Gum disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((semptomTasteDisaster == "no") && (semptomBleddingTeeth == "no") && (semptomDryness == "yes") && (symptomCankerSores == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Xerostomia,Gingival Bleeding,Gum Diseases and Periodontal disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if ((semptomTasteDisaster == "yes") && (semptomBleddingTeeth == "no") && (semptomDryness == "yes") && (symptomCankerSores == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Taste Disorder,Dryness,Canker Sores or Oral Lichen Planus" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((semptomTasteDisaster == "yes") && (semptomBleddingTeeth == "yes") && (semptomDryness == "no") && (symptomCankerSores == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have  Bleeding Teeth,Taste Disorder,Gingival Bleeding or mouth condition disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if (symptom == "yes") {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "If you have any other symptoms, please consult a doctor." << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if (symptom == "no") {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << "Please enter true department" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << "Please enter only yes/no. Thank you. " << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;

		}
	}
};

class brain : public head {
private:
	string headache, seizures, memoryLoss, panicAttack, symptom;

public:
	string getBodyPart() override {
		cout << "What's your brain problem area?" << endl;
		getline(cin, bodyPart);
		return bodyPart;
	}
	string headacheSymptom() {
		cout << "Do you have strong headaches? (yes/no)" << endl;
		cin >> headache;
		human::convertToLowercase(headache);
		return headache;
	}

	string seizureSymptom() {
		cout << "Do you have seizures very often? (yes/no)" << endl;
		cin >> seizures;
		human::convertToLowercase(seizures);
		return seizures;
	}

	string memoryLossSymptom() {
		cout << "Do you have memory loss? (yes/no)" << endl;
		cin >> memoryLoss;
		human::convertToLowercase(memoryLoss);
		return memoryLoss;
	}

	string panicAttackSymptom() {
		cout << "Do you have panic attacks frequently? (yes/no)" << endl;
		cin >> panicAttack;
		human::convertToLowercase(panicAttack);
		return panicAttack;
	}

	string nothingSymptom() override {
		cout << "Do you have any other Brain disease symptoms? (yes/no)" << endl;
		cin >> symptom;
		human::convertToLowercase(symptom);
		return symptom;
	}

	void findBrainDisease(string headache, string seizures, string memoryLoss, string panicAttack, string symptom, string name, long long int idNumber, int age, string gender, int activite, float height, float weight, string sigara, string alcol, string medic, string alergic) {
		if ((headache == "yes") && (seizures == "yes") && (memoryLoss == "yes") && (panicAttack == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have tongue cancer" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if ((headache == "yes") && (seizures == "yes") && (panicAttack == "yes") && (memoryLoss == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Gingival Bleeding,Periodontal Disease and Periodontal disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}


		else if ((headache == "yes") && (seizures == "yes") && (panicAttack == "no") && (memoryLoss == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Periodontal Disease,Taste Disorder,Xerostomia,Caries,Oral Hygiene Problems and Xerostomia disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((headache == "yes") && (seizures == "no") && (panicAttack == "no") && (memoryLoss == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;

			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((headache == "no") && (seizures == "yes") && (panicAttack == "no") && (memoryLoss == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;

			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((headache == "no") && (seizures == "no") && (panicAttack == "yes") && (memoryLoss == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;

			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((headache == "no") && (seizures == "no") && (panicAttack == "no") && (memoryLoss == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if ((headache == "no") && (seizures == "yes") && (panicAttack == "yes") && (memoryLoss == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Canker Sores,Xerostomia, Periodontal disease and  Gum disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((headache == "no") && (seizures == "no") && (panicAttack == "yes") && (memoryLoss == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Xerostomia,Gingival Bleeding,Gum Diseases and Periodontal disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if ((headache == "yes") && (seizures == "no") && (panicAttack == "yes") && (memoryLoss == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Taste Disorder,Dryness,Canker Sores or Oral Lichen Planus" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((headache == "yes") && (seizures == "yes") && (panicAttack == "no") && (memoryLoss == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have  Bleeding Teeth,Taste Disorder,Gingival Bleeding or mouth condition disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if (symptom == "yes") {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "If you have any other symptoms, please consult a doctor." << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if (symptom == "no") {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << "Please enter true department" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << "Please enter only yes/no. Thank you. " << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;

		}
	}
};

class body : public human {

};

class chest : public body {
private:
	string symptomChestPain, symptomShortnessOfBreath, symptomCough, symptomFever, symptom;

public:
	string getBodyPart() override {
		cout << "What's your chest problem area?" << endl;
		getline(cin, bodyPart);
		return bodyPart;
	}
	string chestPain() {
		cout << "Do you have chest pain? (yes/no)" << endl;
		cin >> symptomChestPain;
		human::convertToLowercase(symptomChestPain);
		return symptomChestPain;
	}

	string shortnessOfBreath() {
		cout << "Do you have shortness of breath? (yes/no)" << endl;
		cin >> symptomShortnessOfBreath;
		human::convertToLowercase(symptomShortnessOfBreath);
		return symptomShortnessOfBreath;
	}

	string cough() {
		cout << "Do you have a cough? (yes/no)" << endl;
		cin >> symptomCough;
		human::convertToLowercase(symptomCough);
		return symptomCough;
	}

	string fever() {
		cout << "Do you have a fever? (yes/no)" << endl;
		cin >> symptomFever;
		human::convertToLowercase(symptomFever);
		return symptomFever;
	}

	string nothingSymptom() override {
		cout << "Do you have any other Chest disease symptoms? (yes/no)" << endl;
		cin >> symptom;
		human::convertToLowercase(symptom);
		return symptom;
	}

	void findChestDisease(string chestPainSymptom, string breathSymptom, string coughSymptom, string feverSymptom, string symptom, string name, long long int idNumber, int age, string gender, int activite, float height, float weight, string sigara, string alcol, string medic, string alergic) {
		if ((chestPainSymptom == "yes") && (breathSymptom == "yes") && (coughSymptom == "yes") && (feverSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have tongue cancer" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if ((chestPainSymptom == "yes") && (breathSymptom == "yes") && (feverSymptom == "yes") && (coughSymptom == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Gingival Bleeding,Periodontal Disease and Periodontal disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}


		else if ((chestPainSymptom == "yes") && (breathSymptom == "yes") && (feverSymptom == "no") && (coughSymptom == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Periodontal Disease,Taste Disorder,Xerostomia,Caries,Oral Hygiene Problems and Xerostomia disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((chestPainSymptom == "yes") && (breathSymptom == "no") && (feverSymptom == "no") && (coughSymptom == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;

			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((chestPainSymptom == "no") && (breathSymptom == "yes") && (feverSymptom == "no") && (coughSymptom == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;

			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((chestPainSymptom == "no") && (breathSymptom == "no") && (feverSymptom == "yes") && (coughSymptom == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;

			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((chestPainSymptom == "no") && (breathSymptom == "no") && (feverSymptom == "no") && (coughSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if ((chestPainSymptom == "no") && (breathSymptom == "yes") && (feverSymptom == "yes") && (coughSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Canker Sores,Xerostomia, Periodontal disease and  Gum disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((chestPainSymptom == "no") && (breathSymptom == "no") && (feverSymptom == "yes") && (coughSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Xerostomia,Gingival Bleeding,Gum Diseases and Periodontal disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if ((chestPainSymptom == "yes") && (breathSymptom == "no") && (feverSymptom == "yes") && (coughSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Taste Disorder,Dryness,Canker Sores or Oral Lichen Planus" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((chestPainSymptom == "yes") && (breathSymptom == "yes") && (feverSymptom == "no") && (coughSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have  Bleeding Teeth,Taste Disorder,Gingival Bleeding or mouth condition disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if (symptom == "yes") {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "If you have any other symptoms, please consult a doctor." << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if (symptom == "no") {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << "Please enter true department" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << "Please enter only yes/no. Thank you. " << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;

		}
	}
};



class heart : public body {
private:
	string symptomChestPain, symptomShortnessOfBreath, symptomPalpitations, symptomFatigue, symptom;

public:
	string getBodyPart() override {
		cout << "What's your heart problem area?" << endl;
		getline(cin, bodyPart);
		return bodyPart;
	}
	string chestPpain() {
		cout << "Do you have chest pain? (yes/no)" << endl;
		cin >> symptomChestPain;
		human::convertToLowercase(symptomChestPain);
		return symptomChestPain;
	}

	string shortnessOfBbreath() {
		cout << "Do you have shortness of breath? (yes/no)" << endl;
		cin >> symptomShortnessOfBreath;
		human::convertToLowercase(symptomShortnessOfBreath);
		return symptomShortnessOfBreath;
	}

	string palpitations() {
		cout << "Do you experience palpitations? (yes/no)" << endl;
		cin >> symptomPalpitations;
		human::convertToLowercase(symptomPalpitations);
		return symptomPalpitations;
	}

	string fatigue() {
		cout << "Do you feel fatigue? (yes/no)" << endl;
		cin >> symptomFatigue;
		human::convertToLowercase(symptomFatigue);
		return symptomFatigue;
	}

	string nothingSymptom() override {
		cout << "Do you have any other Heart disease symptoms? (yes/no)" << endl;
		cin >> symptom;
		human::convertToLowercase(symptom);
		return symptom;
	}

	void findHeartCondition(string chestPainSymptom, string breathSymptom, string palpitationsSymptom, string fatigueSymptom, string symptom, string name, long long int idNumber, int age, string gender, int activite, float height, float weight, string sigara, string alcol, string medic, string alergic) {
		if ((chestPainSymptom == "yes") && (breathSymptom == "yes") && (palpitationsSymptom == "yes") && (fatigueSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "You have Myocardial Infarction " << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if ((chestPainSymptom == "yes") && (breathSymptom == "yes") && (palpitationsSymptom == "yes") && (fatigueSymptom == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "You have Angina Pektoris disease,Heart failure,Myokarit disase or Aritmiler  disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if ((chestPainSymptom == "yes") && (breathSymptom == "yes") && (palpitationsSymptom == "no") && (fatigueSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Myokardit disease,Anjina Pektoris,Aortic Stenosis or Coronary Artery Disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if ((chestPainSymptom == "yes") && (breathSymptom == "yes") && (palpitationsSymptom == "no") && (fatigueSymptom == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have likely  Perikardit ,Pulmoner Emboli, Angina Pektoris,Heart Valve Diseases or Heart failure diseases" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((chestPainSymptom == "yes") && (breathSymptom == "no") && (palpitationsSymptom == "yes") && (fatigueSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "Possible Angina Pektoris,Aritmiler,Heart Valve Diseases or Myokardit diseases" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((chestPainSymptom == "yes") && (breathSymptom == "no") && (palpitationsSymptom == "yes") && (fatigueSymptom == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "Probable Pulmoner Hipertansiyon,Perikardit,Myocardial Infarction ,Anjina Pektoris or Heart failure" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((chestPainSymptom == "yes") && (breathSymptom == "no") && (palpitationsSymptom == "no") && (fatigueSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "Likely pulmonary embolism,Anjina Pektoris,Myocardial Infarction,Coronary Artery Disease or Kardiyomiyopati." << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((chestPainSymptom == "yes") && (breathSymptom == "no") && (palpitationsSymptom == "no") && (fatigueSymptom == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if ((chestPainSymptom == "no") && (breathSymptom == "no") && (palpitationsSymptom == "yes") && (fatigueSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "You have Kardiyomiyopati,Hipertansiyon,Aritmiler,Heart failure or Heart Valve Diseases ." << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((chestPainSymptom == "no") && (breathSymptom == "no") && (palpitationsSymptom == "yes") && (fatigueSymptom == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((chestPainSymptom == "no") && (breathSymptom == "no") && (palpitationsSymptom == "no") && (fatigueSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if ((chestPainSymptom == "no") && (breathSymptom == "yes") && (palpitationsSymptom == "yes") && (fatigueSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Coronary Artery Disease,Aritmiler,Myocardial Infarction or Anjina Pektori disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if ((chestPainSymptom == "no") && (breathSymptom == "yes") && (palpitationsSymptom == "yes") && (fatigueSymptom == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You might have Coronary Artery Disease,Aritmiler,Heart Valve Diseases,Heaart Faiulre or Myokardit disease." << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if ((chestPainSymptom == "no") && (breathSymptom == "yes") && (palpitationsSymptom == "no") && (fatigueSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You might have Kardiyomiyopati,Aortic Regurgitation,Coronary Artery Disease,Heart Failure or Heart Valve Diseases." << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if ((chestPainSymptom == "no") && (breathSymptom == "yes") && (palpitationsSymptom == "no") && (fatigueSymptom == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if (symptom == "yes") {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << " You have other mouth disaster " << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if (symptom == "no") {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << "Please enter true department" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << "Please enter only yes/no. Thank you. " << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;

		}
	}

};

class abdomen : public body {
private:
	string symptomAbdominalPain, symptomNausea, symptomVomiting, symptomBloating, symptom;

public:
	string getBodyPart() override {
		cout << "What's your abdomen problem area?" << endl;
		getline(cin, bodyPart);
		return bodyPart;
	}

	string abdominalPain() {
		cout << "Do you have abdominal pain? (yes/no)" << endl;
		cin >> symptomAbdominalPain;
		human::convertToLowercase(symptomAbdominalPain);
		return symptomAbdominalPain;
	}

	string nausea() {
		cout << "Do you experience nausea? (yes/no)" << endl;
		cin >> symptomNausea;
		human::convertToLowercase(symptomNausea);
		return symptomNausea;
	}

	string vomiting() {
		cout << "Do you have vomiting? (yes/no)" << endl;
		cin >> symptomVomiting;
		human::convertToLowercase(symptomVomiting);
		return symptomVomiting;
	}

	string bloating() {
		cout << "Do you experience bloating? (yes/no)" << endl;
		cin >> symptomBloating;
		human::convertToLowercase(symptomBloating);
		return symptomBloating;
	}

	string nothingSymptom() override {
		cout << "Do you have any other Abdomen disease symptoms? (yes/no)" << endl;
		cin >> symptom;
		human::convertToLowercase(symptom);
		return symptom;
	}

	void findAbdominalCondition(string abdominalPainSymptom, string nauseaSymptom, string vomitingSymptom, string bloatingSymptom, string symptom, string name, long long int idNumber, int age, string gender, int activite, float height, float weight, string sigara, string alcol, string medic, string alergic) {

		if ((abdominalPainSymptom == "yes") && (nauseaSymptom == "yes") && (vomitingSymptom == "yes") && (bloatingSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have tongue cancer" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if ((abdominalPainSymptom == "yes") && (nauseaSymptom == "yes") && (bloatingSymptom == "yes") && (vomitingSymptom == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Gingival Bleeding,Periodontal Disease and Periodontal disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}


		else if ((abdominalPainSymptom == "yes") && (nauseaSymptom == "yes") && (bloatingSymptom == "no") && (vomitingSymptom == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Periodontal Disease,Taste Disorder,Xerostomia,Caries,Oral Hygiene Problems and Xerostomia disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((abdominalPainSymptom == "yes") && (nauseaSymptom == "no") && (bloatingSymptom == "no") && (vomitingSymptom == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;

			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((abdominalPainSymptom == "no") && (nauseaSymptom == "yes") && (bloatingSymptom == "no") && (vomitingSymptom == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;

			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((abdominalPainSymptom == "no") && (nauseaSymptom == "no") && (bloatingSymptom == "yes") && (vomitingSymptom == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;

			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((abdominalPainSymptom == "no") && (nauseaSymptom == "no") && (bloatingSymptom == "no") && (vomitingSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if ((abdominalPainSymptom == "no") && (nauseaSymptom == "yes") && (bloatingSymptom == "yes") && (vomitingSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Canker Sores,Xerostomia, Periodontal disease and  Gum disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((abdominalPainSymptom == "no") && (nauseaSymptom == "no") && (bloatingSymptom == "yes") && (vomitingSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Xerostomia,Gingival Bleeding,Gum Diseases and Periodontal disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if ((abdominalPainSymptom == "yes") && (nauseaSymptom == "no") && (bloatingSymptom == "yes") && (vomitingSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Taste Disorder,Dryness,Canker Sores or Oral Lichen Planus" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((abdominalPainSymptom == "yes") && (nauseaSymptom == "yes") && (bloatingSymptom == "no") && (vomitingSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have  Bleeding Teeth,Taste Disorder,Gingival Bleeding or mouth condition disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if (symptom == "yes") {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "If you have any other symptoms, please consult a doctor." << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if (symptom == "no") {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << "Please enter true department" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << "Please enter only yes/no. Thank you. " << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;

		}
	}

};

class limb : public human {


};

class arms : public limb {
private:
	string symptomArmPain, symptomArmSwelling, symptomArmWeakness, symptomArmNumbness, symptom;

public:
	string getBodyPart() override {
		cout << "What's your arms problem area?" << endl;
		getline(cin, bodyPart);
		return bodyPart;
	}

	string armPain() {
		cout << "Do you have pain in your arms? (yes/no)" << endl;
		cin >> symptomArmPain;
		human::convertToLowercase(symptomArmPain);
		return symptomArmPain;
	}

	string armSwelling() {
		cout << "Do you experience swelling in your arms? (yes/no)" << endl;
		cin >> symptomArmSwelling;
		human::convertToLowercase(symptomArmSwelling);
		return symptomArmSwelling;
	}

	string armWeakness() {
		cout << "Do you have weakness in your arms? (yes/no)" << endl;
		cin >> symptomArmWeakness;
		human::convertToLowercase(symptomArmWeakness);
		return symptomArmWeakness;
	}

	string armNumbness() {
		cout << "Do you experience numbness in your arms? (yes/no)" << endl;
		cin >> symptomArmNumbness;
		human::convertToLowercase(symptomArmNumbness);
		return symptomArmNumbness;
	}

	string nothingSymptom() override {
		cout << "Do you have any other Arm disease symptoms? (yes/no)" << endl;
		cin >> symptom;
		human::convertToLowercase(symptom);
		return symptom;
	}

	void findArmCondition(string armPainSymptom, string armSwellingSymptom, string armWeaknessSymptom, string armNumbnessSymptom, string symptom, string name, long long int idNumber, int age, string gender, int activite, float height, float weight, string sigara, string alcol, string medic, string alergic) {
		if ((armPainSymptom == "yes") && (armSwellingSymptom == "yes") && (armWeaknessSymptom == "yes") && (armNumbnessSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have tongue cancer" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if ((armPainSymptom == "yes") && (armSwellingSymptom == "yes") && (armNumbnessSymptom == "yes") && (armWeaknessSymptom == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Gingival Bleeding,Periodontal Disease and Periodontal disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}


		else if ((armPainSymptom == "yes") && (armSwellingSymptom == "yes") && (armNumbnessSymptom == "no") && (armWeaknessSymptom == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Periodontal Disease,Taste Disorder,Xerostomia,Caries,Oral Hygiene Problems and Xerostomia disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((armPainSymptom == "yes") && (armSwellingSymptom == "no") && (armNumbnessSymptom == "no") && (armWeaknessSymptom == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;

			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((armPainSymptom == "no") && (armSwellingSymptom == "yes") && (armNumbnessSymptom == "no") && (armWeaknessSymptom == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;

			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((armPainSymptom == "no") && (armSwellingSymptom == "no") && (armNumbnessSymptom == "yes") && (armWeaknessSymptom == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;

			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((armPainSymptom == "no") && (armSwellingSymptom == "no") && (armNumbnessSymptom == "no") && (armWeaknessSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if ((armPainSymptom == "no") && (armSwellingSymptom == "yes") && (armNumbnessSymptom == "yes") && (armWeaknessSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Canker Sores,Xerostomia, Periodontal disease and  Gum disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((armPainSymptom == "no") && (armSwellingSymptom == "no") && (armNumbnessSymptom == "yes") && (armWeaknessSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Xerostomia,Gingival Bleeding,Gum Diseases and Periodontal disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if ((armPainSymptom == "yes") && (armSwellingSymptom == "no") && (armNumbnessSymptom == "yes") && (armWeaknessSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Taste Disorder,Dryness,Canker Sores or Oral Lichen Planus" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((armPainSymptom == "yes") && (armSwellingSymptom == "yes") && (armNumbnessSymptom == "no") && (armWeaknessSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have  Bleeding Teeth,Taste Disorder,Gingival Bleeding or mouth condition disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if (symptom == "yes") {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "If you have any other symptoms, please consult a doctor." << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if (symptom == "no") {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << "Please enter true department" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << "Please enter only yes/no. Thank you. " << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;

		}
	}
};

class hands : public limb {
private:
	string symptomHandPain, symptomHandSwelling, symptomHandWeakness, symptomHandNumbness, symptom;

public:
	string getBodyPart() override {
		cout << "What's your hands problem area?" << endl;
		getline(cin, bodyPart);
		return bodyPart;
	}
	string handPain() {
		cout << "Do you have pain in your hands? (yes/no)" << endl;
		cin >> symptomHandPain;
		human::convertToLowercase(symptomHandPain);
		return symptomHandPain;
	}

	string handSwelling() {
		cout << "Do you experience swelling in your hands? (yes/no)" << endl;
		cin >> symptomHandSwelling;
		human::convertToLowercase(symptomHandSwelling);
		return symptomHandSwelling;
	}

	string handWeakness() {
		cout << "Do you have weakness in your hands? (yes/no)" << endl;
		cin >> symptomHandWeakness;
		human::convertToLowercase(symptomHandWeakness);
		return symptomHandWeakness;
	}

	string handNumbness() {
		cout << "Do you experience numbness in your hands? (yes/no)" << endl;
		cin >> symptomHandNumbness;
		human::convertToLowercase(symptomHandNumbness);
		return symptomHandNumbness;
	}

	string nothingSymptom()  override {
		cout << "Do you have any other Hand disease symptoms? (yes/no)" << endl;
		cin >> symptom;
		human::convertToLowercase(symptom);
		return symptom;
	}

	void findHandCondition(string handPainSymptom, string handSwellingSymptom, string handWeaknessSymptom, string handNumbnessSymptom, string symptom, string name, long long int idNumber, int age, string gender, int activite, float height, float weight, string sigara, string alcol, string medic, string alergic) {
		if ((handPainSymptom == "yes") && (handSwellingSymptom == "yes") && (handWeaknessSymptom == "yes") && (handNumbnessSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have tongue cancer" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if ((handPainSymptom == "yes") && (handSwellingSymptom == "yes") && (handNumbnessSymptom == "yes") && (handWeaknessSymptom == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Gingival Bleeding,Periodontal Disease and Periodontal disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}


		else if ((handPainSymptom == "yes") && (handSwellingSymptom == "yes") && (handNumbnessSymptom == "no") && (handWeaknessSymptom == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Periodontal Disease,Taste Disorder,Xerostomia,Caries,Oral Hygiene Problems and Xerostomia disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((handPainSymptom == "yes") && (handSwellingSymptom == "no") && (handNumbnessSymptom == "no") && (handWeaknessSymptom == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;

			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((handPainSymptom == "no") && (handSwellingSymptom == "yes") && (handNumbnessSymptom == "no") && (handWeaknessSymptom == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;

			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((handPainSymptom == "no") && (handSwellingSymptom == "no") && (handNumbnessSymptom == "yes") && (handWeaknessSymptom == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;

			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((handPainSymptom == "no") && (handSwellingSymptom == "no") && (handNumbnessSymptom == "no") && (handWeaknessSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if ((handPainSymptom == "no") && (handSwellingSymptom == "yes") && (handNumbnessSymptom == "yes") && (handWeaknessSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "You have Canker Sores,Xerostomia, Periodontal disease and  Gum disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((handPainSymptom == "no") && (handSwellingSymptom == "no") && (handNumbnessSymptom == "yes") && (handWeaknessSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Xerostomia,Gingival Bleeding,Gum Diseases and Periodontal disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if ((handPainSymptom == "yes") && (handSwellingSymptom == "no") && (handNumbnessSymptom == "yes") && (handWeaknessSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Taste Disorder,Dryness,Canker Sores or Oral Lichen Planus" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((handPainSymptom == "yes") && (handSwellingSymptom == "yes") && (handNumbnessSymptom == "no") && (handWeaknessSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have  Bleeding Teeth,Taste Disorder,Gingival Bleeding or mouth condition disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if (symptom == "yes") {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "If you have any other symptoms, please consult a doctor." << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if (symptom == "no") {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << "Please enter true department" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << "Please enter only yes/no. Thank you. " << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;

		}
	}
};

class shoulders : public limb {
private:
	string symptomShoulderPain, symptomShoulderSwelling, symptomShoulderWeakness, symptomShoulderNumbness, symptom;

public:
	string getBodyPart() override {
		cout << "What's your shoulder problem area?" << endl;
		getline(cin, bodyPart);
		return bodyPart;
	}
	string shoulderPain() {
		cout << "Do you have pain in your shoulders? (yes/no)" << endl;
		cin >> symptomShoulderPain;
		human::convertToLowercase(symptomShoulderPain);
		return symptomShoulderPain;
	}

	string shoulderSwelling() {
		cout << "Do you experience swelling in your shoulders? (yes/no)" << endl;
		cin >> symptomShoulderSwelling;
		human::convertToLowercase(symptomShoulderSwelling);
		return symptomShoulderSwelling;
	}

	string shoulderWeakness() {
		cout << "Do you have weakness in your shoulders? (yes/no)" << endl;
		cin >> symptomShoulderWeakness;
		human::convertToLowercase(symptomShoulderWeakness);
		return symptomShoulderWeakness;
	}

	string shoulderNumbness() {
		cout << "Do you experience numbness in your shoulders? (yes/no)" << endl;
		cin >> symptomShoulderNumbness;
		human::convertToLowercase(symptomShoulderNumbness);
		return symptomShoulderNumbness;
	}

	string nothingSymptom() override {
		cout << "Do you have any other  Shoulder disease symptoms? (yes/no)" << endl;
		cin >> symptom;
		human::convertToLowercase(symptom);
		return symptom;
	}

	void findShoulderCondition(string shoulderPainSymptom, string shoulderSwellingSymptom, string shoulderWeaknessSymptom, string shoulderNumbnessSymptom, string symptom, string name, long long int idNumber, int age, string gender, int activite, float height, float weight, string sigara, string alcol, string medic, string alergic) {
		if ((shoulderPainSymptom == "yes") && (shoulderSwellingSymptom == "yes") && (shoulderWeaknessSymptom == "yes") && (shoulderNumbnessSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "hasta yeriniz:" << bodyPart << endl;
			cout << "You have tongue cancer" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if ((shoulderPainSymptom == "yes") && (shoulderSwellingSymptom == "yes") && (shoulderNumbnessSymptom == "yes") && (shoulderWeaknessSymptom == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Gingival Bleeding,Periodontal Disease and Periodontal disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}


		else if ((shoulderPainSymptom == "yes") && (shoulderSwellingSymptom == "yes") && (shoulderNumbnessSymptom == "no") && (shoulderWeaknessSymptom == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Periodontal Disease,Taste Disorder,Xerostomia,Caries,Oral Hygiene Problems and Xerostomia disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((shoulderPainSymptom == "yes") && (shoulderSwellingSymptom == "no") && (shoulderNumbnessSymptom == "no") && (shoulderWeaknessSymptom == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;

			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((shoulderPainSymptom == "no") && (shoulderSwellingSymptom == "yes") && (shoulderNumbnessSymptom == "no") && (shoulderWeaknessSymptom == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;

			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((shoulderPainSymptom == "no") && (shoulderSwellingSymptom == "no") && (shoulderNumbnessSymptom == "yes") && (shoulderWeaknessSymptom == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;

			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((shoulderPainSymptom == "no") && (shoulderSwellingSymptom == "no") && (shoulderNumbnessSymptom == "no") && (shoulderWeaknessSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if ((shoulderPainSymptom == "no") && (shoulderSwellingSymptom == "yes") && (shoulderNumbnessSymptom == "yes") && (shoulderWeaknessSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Canker Sores,Xerostomia, Periodontal disease and  Gum disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((shoulderPainSymptom == "no") && (shoulderSwellingSymptom == "no") && (shoulderNumbnessSymptom == "yes") && (shoulderWeaknessSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Xerostomia,Gingival Bleeding,Gum Diseases and Periodontal disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if ((shoulderPainSymptom == "yes") && (shoulderSwellingSymptom == "no") && (shoulderNumbnessSymptom == "yes") && (shoulderWeaknessSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Taste Disorder,Dryness,Canker Sores or Oral Lichen Planus" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((shoulderPainSymptom == "yes") && (shoulderSwellingSymptom == "yes") && (shoulderNumbnessSymptom == "no") && (shoulderWeaknessSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have  Bleeding Teeth,Taste Disorder,Gingival Bleeding or mouth condition disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if (symptom == "yes") {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "If you have any other symptoms, please consult a doctor." << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if (symptom == "no") {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << "Please enter true department" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << "Please enter only yes/no. Thank you. " << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;

		}
	}

};

class foot : public limb {
private:
	string symptomFootPain, symptomFootSwelling, symptomFootWeakness, symptomFootNumbness, symptom;

public:
	string getBodyPart() override {
		cout << "What's your foot problem area?" << endl;
		getline(cin, bodyPart);
		return bodyPart;
	}

	string footPain() {
		cout << "Do you have pain in your feet? (yes/no)" << endl;
		cin >> symptomFootPain;
		human::convertToLowercase(symptomFootPain);
		return symptomFootPain;
	}

	string footSwelling() {
		cout << "Do you experience swelling in your feet? (yes/no)" << endl;
		cin >> symptomFootSwelling;
		human::convertToLowercase(symptomFootSwelling);
		return symptomFootSwelling;
	}

	string footWeakness() {
		cout << "Do you have weakness in your feet? (yes/no)" << endl;
		cin >> symptomFootWeakness;
		human::convertToLowercase(symptomFootWeakness);
		return symptomFootWeakness;
	}

	string footNumbness() {
		cout << "Do you experience numbness in your feet? (yes/no)" << endl;
		cin >> symptomFootNumbness;
		human::convertToLowercase(symptomFootNumbness);
		return symptomFootNumbness;
	}

	string nothingSymptom() override {
		cout << "Do you have any other Foot disease symptoms? (yes/no)" << endl;
		cin >> symptom;
		human::convertToLowercase(symptom);
		return symptom;
	}

	void findFootCondition(string footPainSymptom, string footSwellingSymptom, string footWeaknessSymptom, string footNumbnessSymptom, string symptom, string name, long long int idNumber, int age, string gender, int activite, float height, float weight, string sigara, string alcol, string medic, string alergic) {
		if ((footPainSymptom == "yes") && (footSwellingSymptom == "yes") && (footWeaknessSymptom == "yes") && (footNumbnessSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have tongue cancer" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if ((footPainSymptom == "yes") && (footSwellingSymptom == "yes") && (footNumbnessSymptom == "yes") && (footWeaknessSymptom == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Gingival Bleeding,Periodontal Disease and Periodontal disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}


		else if ((footPainSymptom == "yes") && (footSwellingSymptom == "yes") && (footNumbnessSymptom == "no") && (footWeaknessSymptom == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Periodontal Disease,Taste Disorder,Xerostomia,Caries,Oral Hygiene Problems and Xerostomia disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((footPainSymptom == "yes") && (footSwellingSymptom == "no") && (footNumbnessSymptom == "no") && (footWeaknessSymptom == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;

			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((footPainSymptom == "no") && (footSwellingSymptom == "yes") && (footNumbnessSymptom == "no") && (footWeaknessSymptom == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;

			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((footPainSymptom == "no") && (footSwellingSymptom == "no") && (footNumbnessSymptom == "yes") && (footWeaknessSymptom == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;

			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((footPainSymptom == "no") && (footSwellingSymptom == "no") && (footNumbnessSymptom == "no") && (footWeaknessSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if ((footPainSymptom == "no") && (footSwellingSymptom == "yes") && (footNumbnessSymptom == "yes") && (footWeaknessSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Canker Sores,Xerostomia, Periodontal disease and  Gum disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((footPainSymptom == "no") && (footSwellingSymptom == "no") && (footNumbnessSymptom == "yes") && (footWeaknessSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Xerostomia,Gingival Bleeding,Gum Diseases and Periodontal disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if ((footPainSymptom == "yes") && (footSwellingSymptom == "no") && (footNumbnessSymptom == "yes") && (footWeaknessSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Taste Disorder,Dryness,Canker Sores or Oral Lichen Planus" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((footPainSymptom == "yes") && (footSwellingSymptom == "yes") && (footNumbnessSymptom == "no") && (footWeaknessSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have  Bleeding Teeth,Taste Disorder,Gingival Bleeding or mouth condition disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if (symptom == "yes") {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "If you have any other symptoms, please consult a doctor." << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if (symptom == "no") {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << "Please enter true department" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << "Please enter only yes/no. Thank you. " << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;

		}
	}

};

class legs : public limb {
private:
	string symptomLegPain, symptomLegSwelling, symptomLegWeakness, symptomLegNumbness, symptom;

public:
	string getBodyPart() override {
		cout << "What's your legs problem area?" << endl;
		getline(cin, bodyPart);
		return bodyPart;
	}
	string legPain() {
		cout << "Do you have pain in your legs? (yes/no)" << endl;
		cin >> symptomLegPain;
		human::convertToLowercase(symptomLegPain);
		return symptomLegPain;
	}

	string legSwelling() {
		cout << "Do you experience swelling in your legs? (yes/no)" << endl;
		cin >> symptomLegSwelling;
		human::convertToLowercase(symptomLegSwelling);
		return symptomLegSwelling;
	}

	string legWeakness() {
		cout << "Do you have weakness in your legs? (yes/no)" << endl;
		cin >> symptomLegWeakness;
		human::convertToLowercase(symptomLegWeakness);
		return symptomLegWeakness;
	}

	string legNumbness() {
		cout << "Do you experience numbness in your legs? (yes/no)" << endl;
		cin >> symptomLegNumbness;
		human::convertToLowercase(symptomLegNumbness);
		return symptomLegNumbness;
	}

	string nothingSymptom() override {
		cout << "Do you have any   other leg disease symptoms? (yes/no)" << endl;
		cin >> symptom;
		human::convertToLowercase(symptom);
		return symptom;
	}

	void findLegCondition(string legPainSymptom, string legSwellingSymptom, string legWeaknessSymptom, string legNumbnessSymptom, string symptom, string name, long long int idNumber, int age, string gender, int activite, float height, float weight, string sigara, string alcol, string medic, string alergic) {
		if ((legPainSymptom == "yes") && (legSwellingSymptom == "yes") && (legWeaknessSymptom == "yes") && (legNumbnessSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have tongue cancer" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if ((legPainSymptom == "yes") && (legSwellingSymptom == "yes") && (legNumbnessSymptom == "yes") && (legWeaknessSymptom == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Gingival Bleeding,Periodontal Disease and Periodontal disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}


		else if ((legPainSymptom == "yes") && (legSwellingSymptom == "yes") && (legNumbnessSymptom == "no") && (legWeaknessSymptom == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Periodontal Disease,Taste Disorder,Xerostomia,Caries,Oral Hygiene Problems and Xerostomia disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((legPainSymptom == "yes") && (legSwellingSymptom == "no") && (legNumbnessSymptom == "no") && (legWeaknessSymptom == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;

			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((legPainSymptom == "no") && (legSwellingSymptom == "yes") && (legNumbnessSymptom == "no") && (legWeaknessSymptom == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;

			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((legPainSymptom == "no") && (legSwellingSymptom == "no") && (legNumbnessSymptom == "yes") && (legWeaknessSymptom == "no")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;

			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((legPainSymptom == "no") && (legSwellingSymptom == "no") && (legNumbnessSymptom == "no") && (legWeaknessSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if ((legPainSymptom == "no") && (legSwellingSymptom == "yes") && (legNumbnessSymptom == "yes") && (legWeaknessSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Canker Sores,Xerostomia, Periodontal disease and  Gum disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((legPainSymptom == "no") && (legSwellingSymptom == "no") && (legNumbnessSymptom == "yes") && (legWeaknessSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Xerostomia,Gingival Bleeding,Gum Diseases and Periodontal disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if ((legPainSymptom == "yes") && (legSwellingSymptom == "no") && (legNumbnessSymptom == "yes") && (legWeaknessSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have Taste Disorder,Dryness,Canker Sores or Oral Lichen Planus" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else if ((legPainSymptom == "yes") && (legSwellingSymptom == "yes") && (legNumbnessSymptom == "no") && (legWeaknessSymptom == "yes")) {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "You have  Bleeding Teeth,Taste Disorder,Gingival Bleeding or mouth condition disease" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if (symptom == "yes") {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << " Name: " << name << endl;
			cout << " TC Kimlik No: " << idNumber << endl;
			cout << " Age: " << age << endl;
			cout << " Gender: " << gender << endl;
			cout << " Aktity rate: " << activite << endl;
			cout << " Height: " << height << endl;
			cout << " Weight: " << weight << endl;

			if (sigara == "yes") {
				cout << " Drinking Cigarete " << endl;
			}
			else {
				cout << " Not Drinking Cigarete " << endl;
			}
			if (medic == "yes") {
				cout << " Using Apecial Medications  " << endl;
			}
			else {
				cout << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				cout << " Drinking Alcol " << endl;
			}
			else {
				cout << " Not Drinking Alcol " << endl;
			}
			if (alergic == "yes") {
				cout << " Have special Alergic " << endl;
			}
			else {
				cout << " Not Have special Alergic " << endl;
			}
			cout << "Disase area :" << bodyPart << endl;
			cout << "If you have any other symptoms, please consult a doctor." << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}

		else if (symptom == "no") {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << "Please enter true department" << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
		else {
			cout << endl;
			cout << endl;
			cout << "-------------------------------------" << endl;
			cout << "Please enter only yes/no. Thank you. " << endl;
			cout << "-------------------------------------" << endl;
			cout << endl;
			cout << endl;

		}
	}

};




class user {
private:
	string name, nameForReturn, habitForCigarette, habitForAlcol, habitForAlergic, habitForMedicane, genderSelection, smoking, drinking, allergic, medication, gender;
	int age, activityRate;
	long long int TCKimlik;
	float weight, height;


public:
	int getİDNumber() {

		return TCKimlik;;
	}
	string getName() {
		return name;
	}
	int getAge() {
		return age;
	}
	string getGender() {
		return genderSelection;
	}
	int getActivity() {
		return activityRate;
	}
	float getWeight() {
		return weight;
	}
	float getHeight() {
		return height;
	}
	string getSmoking() {
		return habitForCigarette;
	}
	string getDrinking() {
		return habitForAlcol;
	}
	string getMedication() {
		return habitForMedicane;
	}
	string getAlergic() {
		return habitForAlergic;
	}

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
			for (char& ch : genderSelection) {
				ch = tolower(ch);
			}

			if (genderSelection == "male" || genderSelection == "female") {
				if (genderSelection == "male") {
					gender = (genderSelection == "male");
					getGender();
				}

				else if (genderSelection == "female") {
					gender = (genderSelection == "female");
					getGender();
				}
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
			getline(cin, habitForCigarette);
			for (char& ch : habitForCigarette) {
				ch = tolower(ch);
			}
			if (habitForCigarette == "yes" || habitForCigarette == "no") {


				break;
			}
			else {
				cout << "Invalid input. Please enter 'yes' or 'no'." << endl;
			}

		}

		while (true) {
			cout << "Do you drink occasionally? (yes/no): ";
			getline(cin, habitForAlcol);
			for (char& ch : habitForAlcol) {
				ch = tolower(ch);
			}
			if (habitForAlcol == "yes" || habitForAlcol == "no") {

				break;
			}
			else {
				cout << "Invalid input. Please enter 'yes' or 'no'." << endl;

			}

		}

		while (true) {
			cout << "Are you an allergic person? (yes/no): ";
			getline(cin, habitForAlergic);
			for (char& ch : habitForAlergic) {
				ch = tolower(ch);
			}
			if (habitForAlergic == "yes" || habitForAlergic == "no") {

				break;
			}
			else {
				cout << "Invalid input. Please enter 'yes' or 'no'." << endl;
			}
		}

		while (true) {
			cout << "Are you taking any medications (yes/no): ";
			getline(cin, habitForMedicane);
			for (char& ch : habitForMedicane) {
				ch = tolower(ch);
			}
			if (habitForMedicane == "yes" || habitForMedicane == "no") {

				break;
			}
			else {
				cout << "Invalid input. Please enter 'yes' or 'no'." << endl;
			}
		}
	}
};
