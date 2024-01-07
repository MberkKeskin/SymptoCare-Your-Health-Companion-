#pragma once
#include <iostream>
#include <limits>
#include <string>
#include <cctype>
#include <fstream>
#include <filesystem>
#include <chrono>
#include <thread>

using namespace std;

class user {
private:
	string name, nameForReturn, habitForCigarette, habitForAlcohol, habitForAllergic, habitForMedication, genderSelection, smoking, drinking, allergic, medication, gender;
	int age, activityRate;
	long long int TCKimlik;
	float weight, height;

public:

	static void writeDiagnosisToFile(const long long int& idNumber, const string& alergic, const string& alcol, const string& sigara, const string& medic, const string& diagnosis, const string& areaName, const string& Username, const int& Userage, const string& UserGender, const int& UserActivite, const int& Userheight, const int& Userweight) {
		string filePath = Username + " Health Report" + ".txt";
		ofstream outputFile(filePath, ios::app);

		if (outputFile.is_open()) {
			outputFile << endl;
			outputFile << endl;
			outputFile << "-------------------------------------" << endl;
			outputFile << " Name: " << Username << endl;
			outputFile << " Turkish ID Number: " << idNumber << endl;
			outputFile << " Age: " << Userage << endl;
			outputFile << " Gender: " << UserGender << endl;
			outputFile << " Activity rate: " << UserActivite << endl;
			outputFile << " Height: " << Userheight << endl;
			outputFile << " Weight: " << Userweight << endl;

			if (sigara == "yes") {
				outputFile << "Active smoker" << endl;
			}
			else {
				outputFile << "Non-smoker" << endl;
			}
			if (medic == "yes") {
				outputFile << " Using Special Medications  " << endl;
			}
			else {
				outputFile << " Not Using special Medications " << endl;
			}
			if (alcol == "yes") {
				outputFile << "Frequent drinker" << endl;
			}
			else {
				outputFile << "Non-drinker." << endl;
			}
			if (alergic == "yes") {
				outputFile << "Allergic" << endl;
			}
			else {
				outputFile << "Non-allergic." << endl;
			}
			outputFile << diagnosis << endl;
			outputFile << "-------------------------------------" << endl;
			outputFile << endl;
			outputFile << endl;
			outputFile.close();
		}
		else {
			cout << "Dosyaya yazma hatası. Dosyanın açık olduğundan emin olun." << endl;
		}
	}
	long long int getİDNumber() {

		return TCKimlik;
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
		return habitForAlcohol;
	}
	string getMedication() {
		return habitForMedication;
	}
	string getAlergic() {
		return habitForAllergic;
	}
	void WritingConsoleInformation(const string& Username) {
		cout << endl;
		cout << endl;
		std::cout << "Your Health Report is getting ready" << endl;
		cout << endl;
		cout << "Please wait";

		for (int i = 0; i < 5; ++i) {
			cout << ".";
			cout.flush();
			this_thread::sleep_for(std::chrono::milliseconds(500));
		}
		cout << endl << endl;

		cout << " The medical report of the patient named '" << Username << "' is ready" << endl << endl;
		cout << "-> -> -> Please type your name into the search box on your computer to access the report <- <- <-" << endl << endl << endl;
		cout << "Get well soon!" << endl << endl << endl;
		cout << "-" << endl << "-" << endl << "-" << endl << "-" << endl << "-" << endl;
		cout << endl;


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

		cout << "Your Turkish ID Number: ";
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

		cout << "Your height(Please Enter cm):";
		while (!(cin >> height)) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input. Please enter a valid height" << endl;
		}

		cout << "Your weight(Please Enter Kg):";
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
			getline(cin, habitForAlcohol);
			for (char& ch : habitForAlcohol) {
				ch = tolower(ch);
			}
			if (habitForAlcohol == "yes" || habitForAlcohol == "no") {

				break;
			}
			else {
				cout << "Invalid input. Please enter 'yes' or 'no'." << endl;

			}

		}

		while (true) {
			cout << "Are you an allergic person? (yes/no): ";
			getline(cin, habitForAllergic);
			for (char& ch : habitForAllergic) {
				ch = tolower(ch);
			}
			if (habitForAllergic == "yes" || habitForAllergic == "no") {

				break;
			}
			else {
				cout << "Invalid input. Please enter 'yes' or 'no'." << endl;
			}
		}

		while (true) {
			cout << "Are you taking any medications (yes/no): ";
			getline(cin, habitForMedication);
			for (char& ch : habitForMedication) {
				ch = tolower(ch);
			}
			if (habitForMedication == "yes" || habitForMedication == "no") {

				break;
			}
			else {
				cout << "Invalid input. Please enter 'yes' or 'no'." << endl;
			}
		}
	}
};

class organ : public user {

protected:
	string bodyPart;

public:

	void convertToLowercase(string& symptom) {
		for (char& ch : symptom) {
			ch = tolower(ch);
		}
	}

	virtual string getBodyPart() {
		cout << "What's your problem area? (eye/brain/mouth/heart/chest/abdomen/arms/hands/foot/shoulders/legs)" << endl;
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
	virtual void printDiagnosis(string illness) {

		cout << "ilness area:" << illness << endl;

	}


};

class eye : public organ {


private:
	string symptomForBlurredVision, symptomForEyePain, symptomForEyeSwell, symptom, diagnosis;

public:
	string getBodyPart() override {
		cout << "What's your eye problem area?" << endl;
		getline(cin, bodyPart);
		return bodyPart;
	}

	string blurredVision() {
		cout << " Do you have blurred vision? (yes/no) " << endl;
		cin >> symptomForBlurredVision;
		organ::convertToLowercase(symptomForBlurredVision);
		return symptomForBlurredVision;
	}

	string eyePain() {
		cout << " Do you have eye pain? (yes/no) " << endl;
		cin >> symptomForEyePain;
		organ::convertToLowercase(symptomForEyePain);
		return symptomForEyePain;
	}

	string eyeSweell() {
		cout << " Do you have eye sweel? (yes/no) " << endl;
		cin >> symptomForEyeSwell;
		organ::convertToLowercase(symptomForEyeSwell);
		return symptomForEyeSwell;
	}

	string nothingSymptom() override {
		cout << " Do you have any other Eye disease symptoms? (yes/no) " << endl;
		cin >> symptom;
		organ::convertToLowercase(symptom);
		return symptom;
	}
	void writeDiagnosisToFile(const long long int& idNumber, const string& alergic, const string& alcol, const string& sigara, const string& medic, const string& diagnosis, const string& areaName, const string& Username, const int& Userage, const string& UserGender, const int& UserActivite, const int& Userheight, const int& Userweight) {
		user::writeDiagnosisToFile(idNumber, alergic, alcol, sigara, medic, diagnosis, areaName, Username, Userage, UserGender, UserActivite, Userheight, Userweight);
	}



	void findEyeDisease(string semptomBluredVision, string semptomeyePain, string semptomEyeSwell, string symptom, string name, long long int IDKimlik, int age, string gender, int activityRate, float height, float weight, string habitForCigarette, string habitForMedication, string habitForAlcohol, string habitForAllergic, string bodyPart) {

		if ((semptomBluredVision == "yes") && (semptomeyePain == "yes") && (semptomEyeSwell == "yes")) {


			WritingConsoleInformation(name);
			diagnosis = "----You have Glaucoma disease----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Eye", name, age, gender, activityRate, height, weight);


		}
		else if ((semptomBluredVision == "yes") && (semptomeyePain == "yes") && (semptomEyeSwell == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Hypertensive Retinopathy, Uveitis or Optic Retinopathy disease----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Eye", name, age, gender, activityRate, height, weight);

		}
		else if ((semptomBluredVision == "no") && (semptomeyePain == "no") && (semptomEyeSwell == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional.----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Eye", name, age, gender, activityRate, height, weight);

		}
		else if ((semptomBluredVision == "no") && (semptomeyePain == "yes") && (semptomEyeSwell == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Orbital cellulite, hypertensive retinopathy or cataract disease----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Eye", name, age, gender, activityRate, height, weight);

		}
		else if ((semptomBluredVision == "yes") && (semptomeyePain == "no") && (semptomEyeSwell == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional.----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Eye", name, age, gender, activityRate, height, weight);

		}
		else if ((semptomBluredVision == "yes") && (semptomeyePain == "no") && (semptomEyeSwell == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have uveitis, conjunctivitis or Optic Norit disease----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Eye", name, age, gender, activityRate, height, weight);

		}
		else if ((semptomBluredVision == "no") && (semptomeyePain == "yes") && (semptomEyeSwell == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional.----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Eye", name, age, gender, activityRate, height, weight);

		}
		else if (symptom == "yes") {
			WritingConsoleInformation(name);
			diagnosis = "----If you have any other symptoms, please consult a doctor.----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Eye", name, age, gender, activityRate, height, weight);



		}
		else if (symptom == "no") {
			WritingConsoleInformation(name);
			diagnosis = "----Please enter true department. Eye department might be the wrong department for you.----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Eye", name, age, gender, activityRate, height, weight);


		}

		else {
			WritingConsoleInformation(name);
			diagnosis = "Please enter only yes/no. Thank you. ";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Eye", name, age, gender, activityRate, height, weight);

		}
	}

};

class mouth : public organ {
private:
	string symptomTasteDiasater, symptomBleedingTeeth, symptomMouthDryness, symptomMouthCankerSores, symptom, diagnosis;

public:
	string getBodyPart() override {
		cout << "What's your mouth problem area?" << endl;
		getline(cin, bodyPart);
		return bodyPart;
	}
	string tasteDisaster() {
		cout << " Do you have taste loss? (yes/no) " << endl;
		cin >> symptomTasteDiasater;
		organ::convertToLowercase(symptomTasteDiasater);
		return symptomTasteDiasater;
	}

	string bleedingTeeth() {
		cout << " Do you have bleeding teeth? (yes/no) " << endl;
		cin >> symptomBleedingTeeth;
		organ::convertToLowercase(symptomBleedingTeeth);
		return symptomBleedingTeeth;
	}



	string mouthDryness() {
		cout << " Do you have mouth dryness ? (yes/no) " << endl;
		cin >> symptomMouthDryness;
		organ::convertToLowercase(symptomMouthDryness);
		return symptomMouthDryness;
	}

	string mouthCankerSores() {
		cout << " Do you have Canker Sores ? (yes/no) " << endl;
		cin >> symptomMouthCankerSores;
		organ::convertToLowercase(symptomMouthCankerSores);
		return symptomMouthCankerSores;
	}

	string nothingSymptom() override {
		cout << " Do you have other Mouth disease Symptoms ? (yes/no) " << endl;
		cin >> symptom;
		organ::convertToLowercase(symptom);
		return symptom;
	}
	void writeDiagnosisToFile(const long long int& idNumber, const string& alergic, const string& alcol, const string& sigara, const string& medic, const string& diagnosis, const string& areaName, const string& Username, const int& Userage, const string& UserGender, const int& UserActivite, const int& Userheight, const int& Userweight) {
		user::writeDiagnosisToFile(idNumber, alergic, alcol, sigara, medic, diagnosis, areaName, Username, Userage, UserGender, UserActivite, Userheight, Userweight);
	}

	void findMouthDisease(string semptomTasteDisaster, string semptomBleddingTeeth, string semptomDryness, string symptomCankerSores, string symptom, string name, long long int IDKimlik, int age, string gender, int activityRate, float height, float weight, string habitForCigarette, string habitForMedication, string habitForAlcohol, string habitForAllergic, string bodyPart) {

		if ((semptomTasteDisaster == "yes") && (semptomBleddingTeeth == "yes") && (symptomCankerSores == "yes") && (semptomDryness == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have tongue cancer----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Mouth", name, age, gender, activityRate, height, weight);
			printDiagnosis(diagnosis);
		}

		else if ((semptomTasteDisaster == "yes") && (semptomBleddingTeeth == "yes") && (semptomDryness == "yes") && (symptomCankerSores == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Gingival Bleeding,Periodontal Disease or Oral Hygiene Problems----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Mouth", name, age, gender, activityRate, height, weight);
		}
		else if ((semptomTasteDisaster == "yes") && (semptomBleddingTeeth == "yes") && (semptomDryness == "no") && (symptomCankerSores == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Periodontal Disease, Taste Disorder, Caries, Oral Hygiene Problems or Xerostomia disease----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Mouth", name, age, gender, activityRate, height, weight);
		}
		else if ((semptomTasteDisaster == "yes") && (semptomBleddingTeeth == "no") && (semptomDryness == "no") && (symptomCankerSores == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Mouth", name, age, gender, activityRate, height, weight);
		}
		else if ((semptomTasteDisaster == "no") && (semptomBleddingTeeth == "yes") && (semptomDryness == "no") && (symptomCankerSores == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Mouth", name, age, gender, activityRate, height, weight);
		}
		else if ((semptomTasteDisaster == "no") && (semptomBleddingTeeth == "no") && (semptomDryness == "yes") && (symptomCankerSores == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Mouth", name, age, gender, activityRate, height, weight);
		}
		else if ((semptomTasteDisaster == "no") && (semptomBleddingTeeth == "no") && (semptomDryness == "no") && (symptomCankerSores == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Mouth", name, age, gender, activityRate, height, weight);
		}
		else if ((semptomTasteDisaster == "no") && (semptomBleddingTeeth == "yes") && (semptomDryness == "yes") && (symptomCankerSores == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Canker Sores,Xerostomia, Periodontal disease or Gum disease----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Mouth", name, age, gender, activityRate, height, weight);
		}
		else if ((semptomTasteDisaster == "no") && (semptomBleddingTeeth == "no") && (semptomDryness == "yes") && (symptomCankerSores == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Xerostomia,Gingival Bleeding,Gum Diseases or Periodontal disease----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Mouth", name, age, gender, activityRate, height, weight);
		}

		else if ((semptomTasteDisaster == "yes") && (semptomBleddingTeeth == "no") && (semptomDryness == "yes") && (symptomCankerSores == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Taste Disorder,Dryness,Canker Sores or Oral Lichen Planus----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Mouth", name, age, gender, activityRate, height, weight);
		}
		else if ((semptomTasteDisaster == "yes") && (semptomBleddingTeeth == "yes") && (semptomDryness == "no") && (symptomCankerSores == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have  Bleeding Teeth,Taste Disorder,Gingival Bleeding or mouth condition disease----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Mouth", name, age, gender, activityRate, height, weight);
		}
		else if ((semptomTasteDisaster == "yes") && (semptomBleddingTeeth == "no") && (semptomDryness == "yes") && (symptomCankerSores == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have  Periodontal disease,Gum disease,Xerostomia,Gingival Bleeding or mouth condition disease----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Mouth", name, age, gender, activityRate, height, weight);

		}
		else if ((semptomTasteDisaster == "yes") && (semptomBleddingTeeth == "no") && (semptomDryness == "no") && (symptomCankerSores == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have  Xerostomia, Canker Sores,Xerostomia,Gingival Bleeding or mouth condition disease----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Mouth", name, age, gender, activityRate, height, weight);

		}
		else if ((semptomTasteDisaster == "no") && (semptomBleddingTeeth == "yes") && (semptomDryness == "yes") && (symptomCankerSores == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have   Periodontal disease,Xerostomia ,Dryness,Gingival Bleeding or mouth condition disease----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Mouth", name, age, gender, activityRate, height, weight);

		}
		else if ((semptomTasteDisaster == "no") && (semptomBleddingTeeth == "yes") && (semptomDryness == "no") && (symptomCankerSores == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have  Oral Hygiene Problems, Periodontal disease,Canker Sores ,Dryness or Gingival Bleeding ----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Mouth", name, age, gender, activityRate, height, weight);

		}

		else if (symptom == "yes") {
			WritingConsoleInformation(name);
			diagnosis = "---If you have any other symptoms, please consult a doctor.----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Mouth", name, age, gender, activityRate, height, weight);
		}

		else if (symptom == "no") {
			WritingConsoleInformation(name);
			diagnosis = "---Please enter true department.----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Mouth", name, age, gender, activityRate, height, weight);
		}
		else {
			WritingConsoleInformation(name);
			diagnosis = "---Please enter only yes/no. Thank you.----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Mouth", name, age, gender, activityRate, height, weight);
		}
	}
};

class brain : public organ {
private:
	string headache, seizures, memoryLoss, panicAttack, symptom, diagnosis;

public:
	string getBodyPart() override {
		cout << "What's your brain problem area?" << endl;
		getline(cin, bodyPart);
		return bodyPart;
	}
	string headacheSymptom() {
		cout << "Do you have strong headaches? (yes/no)" << endl;
		cin >> headache;
		organ::convertToLowercase(headache);
		return headache;
	}

	string seizureSymptom() {
		cout << "Do you have seizures very often? (yes/no)" << endl;
		cin >> seizures;
		organ::convertToLowercase(seizures);
		return seizures;
	}

	string memoryLossSymptom() {
		cout << "Do you have memory loss? (yes/no)" << endl;
		cin >> memoryLoss;
		organ::convertToLowercase(memoryLoss);
		return memoryLoss;
	}

	string panicAttackSymptom() {
		cout << "Do you have panic attacks frequently? (yes/no)" << endl;
		cin >> panicAttack;
		organ::convertToLowercase(panicAttack);
		return panicAttack;
	}

	string nothingSymptom() override {
		cout << "Do you have any other Brain disease symptoms? (yes/no)" << endl;
		cin >> symptom;
		organ::convertToLowercase(symptom);
		return symptom;
	}

	void writeDiagnosisToFile(const long long int& idNumber, const string& alergic, const string& alcol, const string& sigara, const string& medic, const string& diagnosis, const string& areaName, const string& Username, const int& Userage, const string& UserGender, const int& UserActivite, const int& Userheight, const int& Userweight) {
		user::writeDiagnosisToFile(idNumber, alergic, alcol, sigara, medic, diagnosis, areaName, Username, Userage, UserGender, UserActivite, Userheight, Userweight);
	}

	void findBrainDisease(string headache, string seizures, string memoryLoss, string panicAttack, string symptom, string name, long long int IDKimlik, int age, string gender, int activityRate, float height, float weight, string habitForCigarette, string habitForMedication, string habitForAlcohol, string habitForAllergic, string bodyPart) {
		if ((headache == "yes") && (seizures == "yes") && (memoryLoss == "yes") && (panicAttack == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Epilepsy disease----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Brain", name, age, gender, activityRate, height, weight);
		}
		else if ((headache == "yes") && (seizures == "yes") && (panicAttack == "yes") && (memoryLoss == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Epileptic, Migraines with Aura, Panic Disorder or Other Neurological Conditions disease----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Brain", name, age, gender, activityRate, height, weight);
		}


		else if ((headache == "yes") && (seizures == "yes") && (panicAttack == "no") && (memoryLoss == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Epileptic Seizures, Migraines, Other Neurological Conditions and Stress or Anxiety disease----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Brain", name, age, gender, activityRate, height, weight);
		}
		else if ((headache == "yes") && (seizures == "no") && (panicAttack == "no") && (memoryLoss == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Brain", name, age, gender, activityRate, height, weight);
		}
		else if ((headache == "no") && (seizures == "yes") && (panicAttack == "no") && (memoryLoss == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Brain", name, age, gender, activityRate, height, weight);
		}
		else if ((headache == "no") && (seizures == "no") && (panicAttack == "yes") && (memoryLoss == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Brain", name, age, gender, activityRate, height, weight);
		}
		else if ((headache == "no") && (seizures == "no") && (panicAttack == "no") && (memoryLoss == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Brain", name, age, gender, activityRate, height, weight);

		}

		else if ((headache == "no") && (seizures == "yes") && (panicAttack == "yes") && (memoryLoss == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Epilepsy, Panic Disorder, Transient Global Amnesia (TGA) or  Psychogenic Nonepileptic Seizures (PNES) disease----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Brain", name, age, gender, activityRate, height, weight);
		}
		else if ((headache == "no") && (seizures == "no") && (panicAttack == "yes") && (memoryLoss == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Panic Disorder, Generalized Anxiety Disorder (GAD), Dissociative Disorders, Post-Traumatic Stress Disorder (PTSD) or Other Mental Health Conditions----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Brain", name, age, gender, activityRate, height, weight);
		}

		else if ((headache == "yes") && (seizures == "no") && (panicAttack == "yes") && (memoryLoss == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Migraines with Aura, Panic Disorder, Memory-related Conditions or Stress-Related Issues----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Brain", name, age, gender, activityRate, height, weight);
		}
		else if ((headache == "yes") && (seizures == "yes") && (panicAttack == "no") && (memoryLoss == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Migraines with Aura, Panic Disorder, Memory-related Conditions or Stress-Related Issues----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Brain", name, age, gender, activityRate, height, weight);
		}
		else if ((headache == "yes") && (seizures == "no") && (panicAttack == "yes") && (memoryLoss == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Migraines with Aura,Transient Global Amnesia (TGA)Panic Disorder,Memory-related Conditions or Epileptic Seizures----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Brain", name, age, gender, activityRate, height, weight);

		}
		else if ((headache == "yes") && (seizures == "no") && (panicAttack == "no") && (memoryLoss == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Memory-related Conditions, Huntington's Disease,Narcolepsy,Encephalitis or Epileptic----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Brain", name, age, gender, activityRate, height, weight);

		}
		else if ((headache == "no") && (seizures == "yes") && (panicAttack == "yes") && (memoryLoss == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have  Cerebral Palsy,Multiple Sclerosis (MS) ,Wilson's Disease or Panic Disorder----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Brain", name, age, gender, activityRate, height, weight);

		}
		else if ((headache == "no") && (seizures == "yes") && (panicAttack == "no") && (memoryLoss == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Chiari Malformation, raumatic Brain Injury (TBI),Tourette Syndrome,Cerebral Palsy or Stroke ----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Brain", name, age, gender, activityRate, height, weight);

		}

		else if (symptom == "yes") {
			WritingConsoleInformation(name);
			diagnosis = "----If you have any other symptoms, please consult a doctor.----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Brain", name, age, gender, activityRate, height, weight);
		}

		else if (symptom == "no") {
			WritingConsoleInformation(name);
			diagnosis = "----Please enter true department.----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Brain", name, age, gender, activityRate, height, weight);
		}
		else {
			WritingConsoleInformation(name);
			diagnosis = "----Please enter only yes/no. Thank you. .----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Brain", name, age, gender, activityRate, height, weight);


		}
	}
};

class chest : public organ {
private:
	string symptomChestPain, symptomShortnessOfBreath, symptomCough, symptomFever, symptom, diagnosis;

public:
	string getBodyPart() override {
		cout << "What's your chest problem area?" << endl;
		getline(cin, bodyPart);
		return bodyPart;
	}
	string chestPain() {
		cout << "Do you have chest pain? (yes/no)" << endl;
		cin >> symptomChestPain;
		organ::convertToLowercase(symptomChestPain);
		return symptomChestPain;
	}

	string shortnessOfBreath() {
		cout << "Do you have shortness of breath? (yes/no)" << endl;
		cin >> symptomShortnessOfBreath;
		organ::convertToLowercase(symptomShortnessOfBreath);
		return symptomShortnessOfBreath;
	}

	string cough() {
		cout << "Do you have a cough? (yes/no)" << endl;
		cin >> symptomCough;
		organ::convertToLowercase(symptomCough);
		return symptomCough;
	}

	string fever() {
		cout << "Do you have a fever? (yes/no)" << endl;
		cin >> symptomFever;
		organ::convertToLowercase(symptomFever);
		return symptomFever;
	}

	string nothingSymptom() override {
		cout << "Do you have any other Chest disease symptoms? (yes/no)" << endl;
		cin >> symptom;
		organ::convertToLowercase(symptom);
		return symptom;
	}

	void writeDiagnosisToFile(const long long int& idNumber, const string& alergic, const string& alcol, const string& sigara, const string& medic, const string& diagnosis, const string& areaName, const string& Username, const int& Userage, const string& UserGender, const int& UserActivite, const int& Userheight, const int& Userweight) {
		user::writeDiagnosisToFile(idNumber, alergic, alcol, sigara, medic, diagnosis, areaName, Username, Userage, UserGender, UserActivite, Userheight, Userweight);
	}

	void findChestDisease(string chestPainSymptom, string breathSymptom, string coughSymptom, string feverSymptom, string symptom, string name, long long int IDKimlik, int age, string gender, int activityRate, float height, float weight, string habitForCigarette, string habitForMedication, string habitForAlcohol, string habitForAllergic, string bodyPart) {
		if ((chestPainSymptom == "yes") && (breathSymptom == "yes") && (coughSymptom == "yes") && (feverSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Flu (Influenza)----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Chest", name, age, gender, activityRate, height, weight);
		}
		else if ((chestPainSymptom == "yes") && (breathSymptom == "yes") && (feverSymptom == "yes") && (coughSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Pneumonia, Bronchitis, COVID-19 or Cardiac Issues----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Chest", name, age, gender, activityRate, height, weight);
		}
		else if ((chestPainSymptom == "yes") && (breathSymptom == "yes") && (feverSymptom == "no") && (coughSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Cardiac Issues, Pulmonary Embolism, Musculoskeletal Pain, Gastroesophageal Reflux Disease (GERD) or Panic Attacks----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Chest", name, age, gender, activityRate, height, weight);
		}
		else if ((chestPainSymptom == "yes") && (breathSymptom == "no") && (feverSymptom == "no") && (coughSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Chest", name, age, gender, activityRate, height, weight);
		}
		else if ((chestPainSymptom == "no") && (breathSymptom == "yes") && (feverSymptom == "no") && (coughSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Chest", name, age, gender, activityRate, height, weight);
		}
		else if ((chestPainSymptom == "no") && (breathSymptom == "no") && (feverSymptom == "yes") && (coughSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Chest", name, age, gender, activityRate, height, weight);
		}
		else if ((chestPainSymptom == "no") && (breathSymptom == "no") && (feverSymptom == "no") && (coughSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Chest", name, age, gender, activityRate, height, weight);
		}
		else if ((chestPainSymptom == "no") && (breathSymptom == "yes") && (feverSymptom == "yes") && (coughSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Respiratory Infections, Influenza (Flu), COVID-19 or Asthma Exacerbation----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Chest", name, age, gender, activityRate, height, weight);
		}
		else if ((chestPainSymptom == "no") && (breathSymptom == "no") && (feverSymptom == "yes") && (coughSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Cardiac Issues, Pulmonary Embolism, Musculoskeletal Pain, Gastroesophageal Reflux Disease (GERD) or Panic Attacks----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Chest", name, age, gender, activityRate, height, weight);
		}

		else if ((chestPainSymptom == "yes") && (breathSymptom == "no") && (feverSymptom == "yes") && (coughSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Cardiac Issues, Pulmonary Embolism, Musculoskeletal Pain, Gastroesophageal Reflux Disease (GERD) or Panic Attacks----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Chest", name, age, gender, activityRate, height, weight);
		}
		else if ((chestPainSymptom == "yes") && (breathSymptom == "yes") && (feverSymptom == "no") && (coughSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Cardiac Issues, Pulmonary Embolism, Musculoskeletal Pain, Gastroesophageal Reflux Disease (GERD) or Panic Attacks----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Chest", name, age, gender, activityRate, height, weight);
		}
		else if ((chestPainSymptom == "yes") && (breathSymptom == "no") && (feverSymptom == "yes") && (coughSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Mastitis,Fibrocystic Breast Disease,Ductal Carcinoma In Situ (DCIS)Cardiac Issues or Breast Cancer----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Chest", name, age, gender, activityRate, height, weight);

		}
		else if ((chestPainSymptom == "yes") && (breathSymptom == "no") && (feverSymptom == "no") && (coughSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Lobular Carcinoma In Situ (LCIS), Mastitis,Narcolepsy,Encephalitis or Epileptic----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Chest", name, age, gender, activityRate, height, weight);

		}
		else if ((chestPainSymptom == "no") && (breathSymptom == "yes") && (feverSymptom == "yes") && (coughSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have  Radial Scar,Paget's Disease of the Breast ,Phyllodes Tumor,Breast Cyst or Musculoskeletal Pai----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Chest", name, age, gender, activityRate, height, weight);

		}
		else if ((chestPainSymptom == "no") && (breathSymptom == "yes") && (feverSymptom == "no") && (coughSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Lobular Neoplasia,Angiosarcoma of the Breast,Phyllodes Tumor,Benign Breast Tumors or  Cardiac Issues ----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Chest", name, age, gender, activityRate, height, weight);

		}

		else if (symptom == "yes") {
			WritingConsoleInformation(name);
			diagnosis = "----If you have any other symptoms, please consult a doctor.----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Chest", name, age, gender, activityRate, height, weight);
		}

		else if (symptom == "no") {
			WritingConsoleInformation(name);
			diagnosis = "Please enter true department";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Chest", name, age, gender, activityRate, height, weight);
		}
		else {
			WritingConsoleInformation(name);
			diagnosis = "Please enter only yes/no. Thank you.";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Chest", name, age, gender, activityRate, height, weight);
		}
	}
};



class heart : public organ {
private:
	string symptomChestPain, symptomShortnessOfBreath, symptomPalpitations, symptomFatigue, symptom, diagnosis;

public:
	string getBodyPart() override {
		cout << "What's your heart problem area?" << endl;
		getline(cin, bodyPart);
		return bodyPart;
	}
	string chestPpain() {
		cout << "Do you have chest pain? (yes/no)" << endl;
		cin >> symptomChestPain;
		organ::convertToLowercase(symptomChestPain);
		return symptomChestPain;
	}

	string shortnessOfBbreath() {
		cout << "Do you have shortness of breath? (yes/no)" << endl;
		cin >> symptomShortnessOfBreath;
		organ::convertToLowercase(symptomShortnessOfBreath);
		return symptomShortnessOfBreath;
	}

	string palpitations() {
		cout << "Do you experience palpitations? (yes/no)" << endl;
		cin >> symptomPalpitations;
		organ::convertToLowercase(symptomPalpitations);
		return symptomPalpitations;
	}

	string fatigue() {
		cout << "Do you feel fatigue? (yes/no)" << endl;
		cin >> symptomFatigue;
		organ::convertToLowercase(symptomFatigue);
		return symptomFatigue;
	}

	string nothingSymptom() override {
		cout << "Do you have any other Heart disease symptoms? (yes/no)" << endl;
		cin >> symptom;
		organ::convertToLowercase(symptom);
		return symptom;
	}

	void writeDiagnosisToFile(const long long int& idNumber, const string& alergic, const string& alcol, const string& sigara, const string& medic, const string& diagnosis, const string& areaName, const string& Username, const int& Userage, const string& UserGender, const int& UserActivite, const int& Userheight, const int& Userweight) {
		user::writeDiagnosisToFile(idNumber, alergic, alcol, sigara, medic, diagnosis, areaName, Username, Userage, UserGender, UserActivite, Userheight, Userweight);
	}


	void findHeartDisease(string chestPainSymptom, string breathSymptom, string palpitationsSymptom, string fatigueSymptom, string symptom, string name, long long int IDKimlik, int age, string gender, int activityRate, float height, float weight, string habitForCigarette, string habitForMedication, string habitForAlcohol, string habitForAllergic, string bodyPart) {
		if ((chestPainSymptom == "yes") && (breathSymptom == "yes") && (palpitationsSymptom == "yes") && (fatigueSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Respiratory Issues----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Heart", name, age, gender, activityRate, height, weight);
		}
		else if ((chestPainSymptom == "yes") && (breathSymptom == "yes") && (palpitationsSymptom == "yes") && (fatigueSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Angina Pektoris disease,Heart failure,Myokarit disase or Aritmiler  disease----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Heart", name, age, gender, activityRate, height, weight);
		}

		else if ((chestPainSymptom == "yes") && (breathSymptom == "yes") && (palpitationsSymptom == "no") && (fatigueSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Myokardit disease,Anjina Pektoris,Aortic Stenosis or Coronary Artery Disease----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Heart", name, age, gender, activityRate, height, weight);
		}

		else if ((chestPainSymptom == "yes") && (breathSymptom == "yes") && (palpitationsSymptom == "no") && (fatigueSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have likely  Perikardit ,Pulmoner Emboli, Angina Pektoris,Heart Valve Diseases or Heart failure diseases----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Heart", name, age, gender, activityRate, height, weight);
		}
		else if ((chestPainSymptom == "yes") && (breathSymptom == "no") && (palpitationsSymptom == "yes") && (fatigueSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----Possible Angina Pektoris,Aritmiler,Heart Valve Diseases or Myokardit diseases----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Heart", name, age, gender, activityRate, height, weight);
		}
		else if ((chestPainSymptom == "yes") && (breathSymptom == "no") && (palpitationsSymptom == "yes") && (fatigueSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----Probable Pulmoner Hipertansiyon,Perikardit,Myocardial Infarction ,Anjina Pektoris or Heart failure----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Heart", name, age, gender, activityRate, height, weight);
		}
		else if ((chestPainSymptom == "yes") && (breathSymptom == "no") && (palpitationsSymptom == "no") && (fatigueSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----Likely pulmonary embolism,Anjina Pektoris,Myocardial Infarction,Coronary Artery Disease or Kardiyomiyopati----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Heart", name, age, gender, activityRate, height, weight);
		}
		else if ((chestPainSymptom == "yes") && (breathSymptom == "no") && (palpitationsSymptom == "no") && (fatigueSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Heart", name, age, gender, activityRate, height, weight);
		}

		else if ((chestPainSymptom == "no") && (breathSymptom == "no") && (palpitationsSymptom == "yes") && (fatigueSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Kardiyomiyopati,Hipertansiyon,Aritmiler,Heart failure or Heart Valve Diseases ----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Heart", name, age, gender, activityRate, height, weight);
		}
		else if ((chestPainSymptom == "no") && (breathSymptom == "no") && (palpitationsSymptom == "yes") && (fatigueSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Heart", name, age, gender, activityRate, height, weight);
		}
		else if ((chestPainSymptom == "no") && (breathSymptom == "no") && (palpitationsSymptom == "no") && (fatigueSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Heart", name, age, gender, activityRate, height, weight);
		}

		else if ((chestPainSymptom == "no") && (breathSymptom == "yes") && (palpitationsSymptom == "yes") && (fatigueSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Coronary Artery Disease,Aritmiler,Myocardial Infarction or Anjina Pektori disease----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Heart", name, age, gender, activityRate, height, weight);
		}

		else if ((chestPainSymptom == "no") && (breathSymptom == "yes") && (palpitationsSymptom == "yes") && (fatigueSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----You might have Coronary Artery Disease,Aritmiler,Heart Valve Diseases,Heaart Faiulre or Myokardit disease----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Heart", name, age, gender, activityRate, height, weight);
		}

		else if ((chestPainSymptom == "no") && (breathSymptom == "yes") && (palpitationsSymptom == "no") && (fatigueSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You might have Kardiyomiyopati,Aortic Regurgitation,Coronary Artery Disease,Heart Failure or Heart Valve Diseases----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Heart", name, age, gender, activityRate, height, weight);
		}

		else if ((chestPainSymptom == "no") && (breathSymptom == "yes") && (palpitationsSymptom == "no") && (fatigueSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Heart", name, age, gender, activityRate, height, weight);
		}
		else if ((chestPainSymptom == "yes") && (breathSymptom == "no") && (palpitationsSymptom == "yes") && (fatigueSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Valvular Heart Disease,Pericarditis,Endocarditis,Anjina Pektori disease or  Coronary Artery Diseaser----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Heart", name, age, gender, activityRate, height, weight);

		}
		else if ((chestPainSymptom == "yes") && (breathSymptom == "no") && (palpitationsSymptom == "no") && (fatigueSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Endocarditis, Congenital Heart Disease,Mitral Valve Prolapse,Rheumatic Heart Disease or Peripheral Artery Disease (PAD)----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Heart", name, age, gender, activityRate, height, weight);

		}
		else if ((chestPainSymptom == "no") && (breathSymptom == "yes") && (palpitationsSymptom == "yes") && (fatigueSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Pulmonary Hypertension,Aortic Stenosis ,Aortic Aneurysm,Pericarditis or Myocarditis----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Heart", name, age, gender, activityRate, height, weight);

		}
		else if ((chestPainSymptom == "no") && (breathSymptom == "yes") && (palpitationsSymptom == "no") && (fatigueSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Coronary Artery Disease (CAD),Arrhythmia,Atrial Fibrillation,Angina Pectoris or  Valvular Heart Disease ----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Heart", name, age, gender, activityRate, height, weight);

		}

		else if (symptom == "yes") {
			WritingConsoleInformation(name);
			diagnosis = "---- You have other Heart disaster----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Heart", name, age, gender, activityRate, height, weight);
		}

		else if (symptom == "no") {
			WritingConsoleInformation(name);
			diagnosis = "---- Please enter true departmentr----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Heart", name, age, gender, activityRate, height, weight);
		}
		else {
			WritingConsoleInformation(name);
			diagnosis = "---- Please enter only yes/no. Thank you.----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Heart", name, age, gender, activityRate, height, weight);
		}
	}

};

class abdomen : public organ {
private:
	string symptomAbdominalPain, symptomNausea, symptomVomiting, symptomBloating, symptom, diagnosis;

public:
	string getBodyPart() override {
		cout << "What's your abdomen problem area?" << endl;
		getline(cin, bodyPart);
		return bodyPart;
	}

	string abdominalPain() {
		cout << "Do you have abdominal pain? (yes/no)" << endl;
		cin >> symptomAbdominalPain;
		organ::convertToLowercase(symptomAbdominalPain);
		return symptomAbdominalPain;
	}

	string nausea() {
		cout << "Do you experience nausea? (yes/no)" << endl;
		cin >> symptomNausea;
		organ::convertToLowercase(symptomNausea);
		return symptomNausea;
	}

	string vomiting() {
		cout << "Do you have vomiting? (yes/no)" << endl;
		cin >> symptomVomiting;
		organ::convertToLowercase(symptomVomiting);
		return symptomVomiting;
	}

	string bloating() {
		cout << "Do you experience bloating? (yes/no)" << endl;
		cin >> symptomBloating;
		organ::convertToLowercase(symptomBloating);
		return symptomBloating;
	}

	string nothingSymptom() override {
		cout << "Do you have any other Abdomen disease symptoms? (yes/no)" << endl;
		cin >> symptom;
		organ::convertToLowercase(symptom);
		return symptom;
	}
	void writeDiagnosisToFile(const long long int& idNumber, const string& alergic, const string& alcol, const string& sigara, const string& medic, const string& diagnosis, const string& areaName, const string& Username, const int& Userage, const string& UserGender, const int& UserActivite, const int& Userheight, const int& Userweight) {
		user::writeDiagnosisToFile(idNumber, alergic, alcol, sigara, medic, diagnosis, areaName, Username, Userage, UserGender, UserActivite, Userheight, Userweight);
	}


	void findAbdominalDisease(string abdominalPainSymptom, string nauseaSymptom, string vomitingSymptom, string bloatingSymptom, string symptom, string name, long long int IDKimlik, int age, string gender, int activityRate, float height, float weight, string habitForCigarette, string habitForMedication, string habitForAlcohol, string habitForAllergic, string bodyPart) {

		if ((abdominalPainSymptom == "yes") && (nauseaSymptom == "yes") && (vomitingSymptom == "yes") && (bloatingSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "---- You have Gastroenteritis----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Abdomen", name, age, gender, activityRate, height, weight);
		}

		else if ((abdominalPainSymptom == "yes") && (nauseaSymptom == "yes") && (bloatingSymptom == "yes") && (vomitingSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Gastroenteritis, Irritable Bowel Syndrome (IBS), Gastritis or Functional Dyspepsia----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Abdomen", name, age, gender, activityRate, height, weight);
		}


		else if ((abdominalPainSymptom == "yes") && (nauseaSymptom == "yes") && (bloatingSymptom == "no") && (vomitingSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Gastroenteritis, Peptic Ulcer, Gallbladder Issues, Food Poisoning or Functional Abdominal Pain Syndrome----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Abdomen", name, age, gender, activityRate, height, weight);
		}
		else if ((abdominalPainSymptom == "yes") && (nauseaSymptom == "no") && (bloatingSymptom == "no") && (vomitingSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Abdomen", name, age, gender, activityRate, height, weight);
		}
		else if ((abdominalPainSymptom == "no") && (nauseaSymptom == "yes") && (bloatingSymptom == "no") && (vomitingSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Abdomen", name, age, gender, activityRate, height, weight);
		}
		else if ((abdominalPainSymptom == "no") && (nauseaSymptom == "no") && (bloatingSymptom == "yes") && (vomitingSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Abdomen", name, age, gender, activityRate, height, weight);
		}
		else if ((abdominalPainSymptom == "no") && (nauseaSymptom == "no") && (bloatingSymptom == "no") && (vomitingSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Abdomen", name, age, gender, activityRate, height, weight);
		}

		else if ((abdominalPainSymptom == "no") && (nauseaSymptom == "yes") && (bloatingSymptom == "yes") && (vomitingSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Food Poisoning, Gastroenteritis, Functional Gastrointestinal Disorders or  Obstruction of the Bowel----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Abdomen", name, age, gender, activityRate, height, weight);
		}
		else if ((abdominalPainSymptom == "no") && (nauseaSymptom == "no") && (bloatingSymptom == "yes") && (vomitingSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Food Poisoning, Gastroenteritis, Gastroparesis, Functional Gastrointestinal Disorders or  Obstruction of the Bowel----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Abdomen", name, age, gender, activityRate, height, weight);
		}

		else if ((abdominalPainSymptom == "yes") && (nauseaSymptom == "no") && (bloatingSymptom == "yes") && (vomitingSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Food Poisoning, Gastroenteritis, Gastroparesis, Functional Gastrointestinal Disorders or  Obstruction of the Bowel----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Abdomen", name, age, gender, activityRate, height, weight);
		}
		else if ((abdominalPainSymptom == "yes") && (nauseaSymptom == "yes") && (bloatingSymptom == "no") && (vomitingSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Food Poisoning, Gastroenteritis, Functional Gastrointestinal Disorders or  Obstruction of the Bowel----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Abdomen", name, age, gender, activityRate, height, weight);
		}
		else if ((abdominalPainSymptom == "yes") && (nauseaSymptom == "no") && (bloatingSymptom == "yes") && (vomitingSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Diarrhea,Colitis,Gastrointestinal Bleeding,Ovarian Cysts  or  Coronary Artery Diseaser----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Abdomen", name, age, gender, activityRate, height, weight);

		}
		else if ((abdominalPainSymptom == "yes") && (nauseaSymptom == "no") && (bloatingSymptom == "no") && (vomitingSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Pancreatitis, Gallstones,Hernia,Diverticulitis or Constipation----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Abdomen", name, age, gender, activityRate, height, weight);

		}
		else if ((abdominalPainSymptom == "no") && (nauseaSymptom == "yes") && (bloatingSymptom == "yes") && (vomitingSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----You haveIrritable Bowel Syndrome (IBS),Peptic Ulcer Disease ,Hepatitis,Cirrhosis or Pancreatitis----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Abdomen", name, age, gender, activityRate, height, weight);

		}
		else if ((abdominalPainSymptom == "no") && (nauseaSymptom == "yes") && (bloatingSymptom == "no") && (vomitingSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Gastroenteritis,Appendicitis,Cholecystitis,Inflammatory Bowel Disease (IBD) or Irritable Bowel Syndrome (IBS) ----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Abdomen", name, age, gender, activityRate, height, weight);

		}

		else if (symptom == "yes") {
			WritingConsoleInformation(name);
			diagnosis = "----If you have any other symptoms, please consult a doctor----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Abdomen", name, age, gender, activityRate, height, weight);
		}
		else if (symptom == "no") {
			WritingConsoleInformation(name);
			diagnosis = "Please enter true department";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Abdomen", name, age, gender, activityRate, height, weight);
		}
		else {
			WritingConsoleInformation(name);
			diagnosis = "Please enter only yes/no. Thank you.";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Abdomen", name, age, gender, activityRate, height, weight);

		}
	}

};

class arms : public organ {
private:
	string symptomArmPain, symptomArmSwelling, symptomArmWeakness, symptomArmNumbness, symptom, diagnosis;

public:
	string getBodyPart() override {
		cout << "What's your arms problem area?" << endl;
		getline(cin, bodyPart);
		return bodyPart;
	}

	string armPain() {
		cout << "Do you have pain in your arms? (yes/no)" << endl;
		cin >> symptomArmPain;
		organ::convertToLowercase(symptomArmPain);
		return symptomArmPain;
	}

	string armSwelling() {
		cout << "Do you experience swelling in your arms? (yes/no)" << endl;
		cin >> symptomArmSwelling;
		organ::convertToLowercase(symptomArmSwelling);
		return symptomArmSwelling;
	}

	string armWeakness() {
		cout << "Do you have weakness in your arms? (yes/no)" << endl;
		cin >> symptomArmWeakness;
		organ::convertToLowercase(symptomArmWeakness);
		return symptomArmWeakness;
	}

	string armNumbness() {
		cout << "Do you experience numbness in your arms? (yes/no)" << endl;
		cin >> symptomArmNumbness;
		organ::convertToLowercase(symptomArmNumbness);
		return symptomArmNumbness;
	}

	string nothingSymptom() override {
		cout << "Do you have any other Arm disease symptoms? (yes/no)" << endl;
		cin >> symptom;
		organ::convertToLowercase(symptom);
		return symptom;
	}
	void writeDiagnosisToFile(const long long int& idNumber, const string& alergic, const string& alcol, const string& sigara, const string& medic, const string& diagnosis, const string& areaName, const string& Username, const int& Userage, const string& UserGender, const int& UserActivite, const int& Userheight, const int& Userweight) {
		user::writeDiagnosisToFile(idNumber, alergic, alcol, sigara, medic, diagnosis, areaName, Username, Userage, UserGender, UserActivite, Userheight, Userweight);
	}


	void findArmDisease(string armPainSymptom, string armSwellingSymptom, string armWeaknessSymptom, string armNumbnessSymptom, string symptom, string name, long long int IDKimlik, int age, string gender, int activityRate, float height, float weight, string habitForCigarette, string habitForMedication, string habitForAlcohol, string habitForAllergic, string bodyPart) {
		if ((armPainSymptom == "yes") && (armSwellingSymptom == "yes") && (armWeaknessSymptom == "yes") && (armNumbnessSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You havePeripheral Artery Disease (PAD)----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Arm", name, age, gender, activityRate, height, weight);
		}

		else if ((armPainSymptom == "yes") && (armSwellingSymptom == "yes") && (armNumbnessSymptom == "yes") && (armWeaknessSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Peripheral Artery Disease (PAD), Deep Vein Thrombosis (DVT), Nerve Compression or Injury or Musculoskeletal Issues----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Arm", name, age, gender, activityRate, height, weight);
		}


		else if ((armPainSymptom == "yes") && (armSwellingSymptom == "yes") && (armNumbnessSymptom == "no") && (armWeaknessSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "You have Peripheral Artery Disease (PAD), Infection, Deep Vein Thrombosis (DVT), Nerve Compression or Injury or Musculoskeletal Issues";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Arm", name, age, gender, activityRate, height, weight);

		}
		else if ((armPainSymptom == "yes") && (armSwellingSymptom == "no") && (armNumbnessSymptom == "no") && (armWeaknessSymptom == "no")) {
			WritingConsoleInformation(name);

			diagnosis = "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Arm", name, age, gender, activityRate, height, weight);
		}
		else if ((armPainSymptom == "no") && (armSwellingSymptom == "yes") && (armNumbnessSymptom == "no") && (armWeaknessSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Arm", name, age, gender, activityRate, height, weight);

		}
		else if ((armPainSymptom == "no") && (armSwellingSymptom == "no") && (armNumbnessSymptom == "yes") && (armWeaknessSymptom == "no")) {

			WritingConsoleInformation(name);
			diagnosis = "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Arm", name, age, gender, activityRate, height, weight);
		}
		else if ((armPainSymptom == "no") && (armSwellingSymptom == "no") && (armNumbnessSymptom == "no") && (armWeaknessSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Arm", name, age, gender, activityRate, height, weight);
		}

		else if ((armPainSymptom == "no") && (armSwellingSymptom == "yes") && (armNumbnessSymptom == "yes") && (armWeaknessSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "You have Peripheral Artery Disease (PAD), Deep Vein Thrombosis (DVT), Nerve Compression or Injury or Infection";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Arm", name, age, gender, activityRate, height, weight);
		}
		else if ((armPainSymptom == "no") && (armSwellingSymptom == "no") && (armNumbnessSymptom == "yes") && (armWeaknessSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "You have Peripheral Artery Disease (PAD), Infection, Deep Vein Thrombosis (DVT), Nerve Compression or Injury or Musculoskeletal Issues";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Arm", name, age, gender, activityRate, height, weight);
		}

		else if ((armPainSymptom == "yes") && (armSwellingSymptom == "no") && (armNumbnessSymptom == "yes") && (armWeaknessSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "You have Peripheral Artery Disease (PAD), Deep Vein Thrombosis (DVT), Nerve Compression or Injury or Infection";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Arm", name, age, gender, activityRate, height, weight);
		}
		else if ((armPainSymptom == "yes") && (armSwellingSymptom == "yes") && (armNumbnessSymptom == "no") && (armWeaknessSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "You have Peripheral Artery Disease (PAD), Deep Vein Thrombosis (DVT), Nerve Compression or Injury or Infection";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Arm", name, age, gender, activityRate, height, weight);
		}
		else if ((armPainSymptom == "yes") && (armSwellingSymptom == "no") && (armNumbnessSymptom == "yes") && (armWeaknessSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Bursitis,Ganglion Cyst,Fracture (Broken Arm),Osteoarthritis of the Elbow  or  Peripheral Artery Disease (PAD)----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Arm", name, age, gender, activityRate, height, weight);

		}
		else if ((armPainSymptom == "yes") && (armSwellingSymptom == "no") && (armNumbnessSymptom == "no") && (armWeaknessSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Radial Tunnel Syndrome, Biceps Tendinitis,Rotator Cuff Tear,Tendinitis orBursitis----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Arm", name, age, gender, activityRate, height, weight);

		}
		else if ((armPainSymptom == "no") && (armSwellingSymptom == "yes") && (armNumbnessSymptom == "yes") && (armWeaknessSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Irritable Bowel Syndrome (IBS),Brachial Plexopathy Thoracic Outlet Syndrome,Golfer's Elbow or Radial Tunnel Syndrome----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Arm", name, age, gender, activityRate, height, weight);

		}
		else if ((armPainSymptom == "no") && (armSwellingSymptom == "yes") && (armNumbnessSymptom == "no") && (armWeaknessSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Tennis Elbow,Carpal Tunnel Syndrome,Cubital Tunnel Syndrome,De Quervain's Tenosynovitis or Dupuytren's Contracture ----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Arm", name, age, gender, activityRate, height, weight);

		}

		else if (symptom == "yes") {
			WritingConsoleInformation(name);
			diagnosis = "If you have any other symptoms, please consult a doctor.";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Arm", name, age, gender, activityRate, height, weight);
		}

		else if (symptom == "no") {
			WritingConsoleInformation(name);
			diagnosis = "Please enter true department";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Arm", name, age, gender, activityRate, height, weight);
		}
		else {
			WritingConsoleInformation(name);
			diagnosis = "Please enter only yes/no. Thank you. ";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Arm", name, age, gender, activityRate, height, weight);


		}
	}
};

class hands : public organ {
private:
	string symptomHandPain, symptomHandSwelling, symptomHandWeakness, symptomHandNumbness, symptom, diagnosis;

public:
	string getBodyPart() override {
		cout << "What's your hands problem area?" << endl;
		getline(cin, bodyPart);
		return bodyPart;
	}
	string handPain() {
		cout << "Do you have pain in your hands? (yes/no)" << endl;
		cin >> symptomHandPain;
		organ::convertToLowercase(symptomHandPain);
		return symptomHandPain;
	}

	string handSwelling() {
		cout << "Do you experience swelling in your hands? (yes/no)" << endl;
		cin >> symptomHandSwelling;
		organ::convertToLowercase(symptomHandSwelling);
		return symptomHandSwelling;
	}

	string handWeakness() {
		cout << "Do you have weakness in your hands? (yes/no)" << endl;
		cin >> symptomHandWeakness;
		organ::convertToLowercase(symptomHandWeakness);
		return symptomHandWeakness;
	}

	string handNumbness() {
		cout << "Do you experience numbness in your hands? (yes/no)" << endl;
		cin >> symptomHandNumbness;
		organ::convertToLowercase(symptomHandNumbness);
		return symptomHandNumbness;
	}

	string nothingSymptom()  override {
		cout << "Do you have any other Hand disease symptoms? (yes/no)" << endl;
		cin >> symptom;
		organ::convertToLowercase(symptom);
		return symptom;
	}
	void writeDiagnosisToFile(const long long int& idNumber, const string& alergic, const string& alcol, const string& sigara, const string& medic, const string& diagnosis, const string& areaName, const string& Username, const int& Userage, const string& UserGender, const int& UserActivite, const int& Userheight, const int& Userweight) {
		user::writeDiagnosisToFile(idNumber, alergic, alcol, sigara, medic, diagnosis, areaName, Username, Userage, UserGender, UserActivite, Userheight, Userweight);
	}

	void findHandDisease(string handPainSymptom, string handSwellingSymptom, string handWeaknessSymptom, string handNumbnessSymptom, string symptom, string name, long long int IDKimlik, int age, string gender, int activityRate, float height, float weight, string habitForCigarette, string habitForMedication, string habitForAlcohol, string habitForAllergic, string bodyPart) {
		if ((handPainSymptom == "yes") && (handSwellingSymptom == "yes") && (handWeaknessSymptom == "yes") && (handNumbnessSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "You have Carpal Tunnel Syndrome";

			printDiagnosis(diagnosis);
		}

		else if ((handPainSymptom == "yes") && (handSwellingSymptom == "yes") && (handNumbnessSymptom == "yes") && (handWeaknessSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "You have Rheumatoid Arthritis,Carpal Tunnel Syndrome, Peripheral Neuropathy or De Quervain's Tenosynovitis";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Hand", name, age, gender, activityRate, height, weight);
		}


		else if ((handPainSymptom == "yes") && (handSwellingSymptom == "yes") && (handNumbnessSymptom == "no") && (handWeaknessSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "You have Rheumatoid Arthritis,Carpal Tunnel Syndrome, Cubital Tunnel Syndrome, Peripheral Neuropathy or De Quervain's Tenosynovitis";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Hand", name, age, gender, activityRate, height, weight);
		}
		else if ((handPainSymptom == "yes") && (handSwellingSymptom == "no") && (handNumbnessSymptom == "no") && (handWeaknessSymptom == "no")) {
			WritingConsoleInformation(name);

			diagnosis = "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Hand", name, age, gender, activityRate, height, weight);
		}
		else if ((handPainSymptom == "no") && (handSwellingSymptom == "yes") && (handNumbnessSymptom == "no") && (handWeaknessSymptom == "no")) {
			WritingConsoleInformation(name);

			diagnosis = "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Hand", name, age, gender, activityRate, height, weight);
		}
		else if ((handPainSymptom == "no") && (handSwellingSymptom == "no") && (handNumbnessSymptom == "yes") && (handWeaknessSymptom == "no")) {
			WritingConsoleInformation(name);

			diagnosis = "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Hand", name, age, gender, activityRate, height, weight);
		}
		else if ((handPainSymptom == "no") && (handSwellingSymptom == "no") && (handNumbnessSymptom == "no") && (handWeaknessSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Hand", name, age, gender, activityRate, height, weight);
		}

		else if ((handPainSymptom == "no") && (handSwellingSymptom == "yes") && (handNumbnessSymptom == "yes") && (handWeaknessSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "You have Carpal Tunnel Syndrome, Cubital Tunnel Syndrome, Peripheral Neuropathy or De Quervain's Tenosynovitis";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Hand", name, age, gender, activityRate, height, weight);
		}
		else if ((handPainSymptom == "no") && (handSwellingSymptom == "no") && (handNumbnessSymptom == "yes") && (handWeaknessSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "You have Rheumatoid Arthritis,Carpal Tunnel Syndrome, Cubital Tunnel Syndrome, Peripheral Neuropathy or De Quervain's Tenosynovitis";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Hand", name, age, gender, activityRate, height, weight);
		}

		else if ((handPainSymptom == "yes") && (handSwellingSymptom == "no") && (handNumbnessSymptom == "yes") && (handWeaknessSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "You have Rheumatoid Arthritis, Cubital Tunnel Syndrome, Peripheral Neuropathy or De Quervain's Tenosynovitis";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Hand", name, age, gender, activityRate, height, weight);
		}
		else if ((handPainSymptom == "yes") && (handSwellingSymptom == "yes") && (handNumbnessSymptom == "no") && (handWeaknessSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "You have Dupuytren's Contracture,Carpal Tunnel Syndrome, Peripheral Neuropathy or De Quervain's Tenosynovitis";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Hand", name, age, gender, activityRate, height, weight);
		}
		else if ((handPainSymptom == "yes") && (handSwellingSymptom == "no") && (handNumbnessSymptom == "yes") && (handWeaknessSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Rheumatoid Arthritis in the Hand,Hand Vascular Disorderst,De Quervain's Tenosynovitis,Hand Dermatitiss  or Hand Psoriasis----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Hand", name, age, gender, activityRate, height, weight);

		}
		else if ((handPainSymptom == "yes") && (handSwellingSymptom == "no") && (handNumbnessSymptom == "no") && (handWeaknessSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Radial Tunnel Syndrome, Biceps Tendinitis,Rotator Cuff Tear,Tendinitis orBursitis----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Hand", name, age, gender, activityRate, height, weight);

		}
		else if ((handPainSymptom == "no") && (handSwellingSymptom == "yes") && (handNumbnessSymptom == "yes") && (handWeaknessSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Hand Osteoarthritis,Hand Sprain,Hand Vascular Disorders,Hand Dermatitis or Radial Tunnel Syndrome----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Hand", name, age, gender, activityRate, height, weight);

		}
		else if ((handPainSymptom == "no") && (handSwellingSymptom == "yes") && (handNumbnessSymptom == "no") && (handWeaknessSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Tennis Elbow,Carpal Tunnel Syndrome,Trigger Finger,Ganglion Cyst or Dupuytren's Hand Tumors ----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Hand", name, age, gender, activityRate, height, weight);

		}

		else if (symptom == "yes") {
			WritingConsoleInformation(name);
			diagnosis = "If you have any other symptoms, please consult a doctor.";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Hand", name, age, gender, activityRate, height, weight);
		}

		else if (symptom == "no") {
			WritingConsoleInformation(name);
			diagnosis = "Please enter true department";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Hand", name, age, gender, activityRate, height, weight);
		}
		else {
			WritingConsoleInformation(name);
			diagnosis = "Please enter only yes/no. Thank you. ";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Hand", name, age, gender, activityRate, height, weight);

		}
	}
};

class shoulders : public organ {
private:
	string symptomShoulderPain, symptomShoulderSwelling, symptomShoulderWeakness, symptomShoulderNumbness, symptom, diagnosis;

public:
	string getBodyPart() override {
		cout << "What's your shoulder problem area?" << endl;
		getline(cin, bodyPart);
		return bodyPart;
	}
	string shoulderPain() {
		cout << "Do you have pain in your shoulders? (yes/no)" << endl;
		cin >> symptomShoulderPain;
		organ::convertToLowercase(symptomShoulderPain);
		return symptomShoulderPain;
	}

	string shoulderSwelling() {
		cout << "Do you experience swelling in your shoulders? (yes/no)" << endl;
		cin >> symptomShoulderSwelling;
		organ::convertToLowercase(symptomShoulderSwelling);
		return symptomShoulderSwelling;
	}

	string shoulderWeakness() {
		cout << "Do you have weakness in your shoulders? (yes/no)" << endl;
		cin >> symptomShoulderWeakness;
		organ::convertToLowercase(symptomShoulderWeakness);
		return symptomShoulderWeakness;
	}

	string shoulderNumbness() {
		cout << "Do you experience numbness in your shoulders? (yes/no)" << endl;
		cin >> symptomShoulderNumbness;
		organ::convertToLowercase(symptomShoulderNumbness);
		return symptomShoulderNumbness;
	}

	string nothingSymptom() override {
		cout << "Do you have any other  Shoulder disease symptoms? (yes/no)" << endl;
		cin >> symptom;
		organ::convertToLowercase(symptom);
		return symptom;
	}
	void writeDiagnosisToFile(const long long int& idNumber, const string& alergic, const string& alcol, const string& sigara, const string& medic, const string& diagnosis, const string& areaName, const string& Username, const int& Userage, const string& UserGender, const int& UserActivite, const int& Userheight, const int& Userweight) {
		user::writeDiagnosisToFile(idNumber, alergic, alcol, sigara, medic, diagnosis, areaName, Username, Userage, UserGender, UserActivite, Userheight, Userweight);
	}

	void findShoulderDisease(string shoulderPainSymptom, string shoulderSwellingSymptom, string shoulderWeaknessSymptom, string shoulderNumbnessSymptom, string symptom, string name, long long int IDKimlik, int age, string gender, int activityRate, float height, float weight, string habitForCigarette, string habitForMedication, string habitForAlcohol, string habitForAllergic, string bodyPart) {
		if ((shoulderPainSymptom == "yes") && (shoulderSwellingSymptom == "yes") && (shoulderWeaknessSymptom == "yes") && (shoulderNumbnessSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "You have Rotator Cuff Injury";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Shoulders", name, age, gender, activityRate, height, weight);
		}

		else if ((shoulderPainSymptom == "yes") && (shoulderSwellingSymptom == "yes") && (shoulderNumbnessSymptom == "yes") && (shoulderWeaknessSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "You have Rotator Cuff Injury,Shoulder Impingement Syndrome, Frozen Shoulder (Adhesive Capsulitis) or Brachial Plexus Injury";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Shoulders", name, age, gender, activityRate, height, weight);
		}


		else if ((shoulderPainSymptom == "yes") && (shoulderSwellingSymptom == "yes") && (shoulderNumbnessSymptom == "no") && (shoulderWeaknessSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = " You have Thoracic Outlet Syndrome, Rotator Cuff Injury,Shoulder Impingement Syndrome, Frozen Shoulder (Adhesive Capsulitis) or Brachial Plexus Injury";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Shoulders", name, age, gender, activityRate, height, weight);
		}
		else if ((shoulderPainSymptom == "yes") && (shoulderSwellingSymptom == "no") && (shoulderNumbnessSymptom == "no") && (shoulderWeaknessSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = " Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional.";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Shoulders", name, age, gender, activityRate, height, weight);
		}
		else if ((shoulderPainSymptom == "no") && (shoulderSwellingSymptom == "yes") && (shoulderNumbnessSymptom == "no") && (shoulderWeaknessSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = " Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional.";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Shoulders", name, age, gender, activityRate, height, weight);
		}
		else if ((shoulderPainSymptom == "no") && (shoulderSwellingSymptom == "no") && (shoulderNumbnessSymptom == "yes") && (shoulderWeaknessSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = " Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional.";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Shoulders", name, age, gender, activityRate, height, weight);
		}
		else if ((shoulderPainSymptom == "no") && (shoulderSwellingSymptom == "no") && (shoulderNumbnessSymptom == "no") && (shoulderWeaknessSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = " Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional.";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Shoulders", name, age, gender, activityRate, height, weight);
		}

		else if ((shoulderPainSymptom == "no") && (shoulderSwellingSymptom == "yes") && (shoulderNumbnessSymptom == "yes") && (shoulderWeaknessSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "You have Rotator Cuff Injury,Shoulder Impingement Syndrome, Frozen Shoulder (Adhesive Capsulitis) or Brachial Plexus Injury";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Shoulders", name, age, gender, activityRate, height, weight);
		}
		else if ((shoulderPainSymptom == "no") && (shoulderSwellingSymptom == "no") && (shoulderNumbnessSymptom == "yes") && (shoulderWeaknessSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "  You have Thoracic Outlet Syndrome, Rotator Cuff Injury,Shoulder Impingement Syndrome, Frozen Shoulder (Adhesive Capsulitis) or Brachial Plexus Injury";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Shoulders", name, age, gender, activityRate, height, weight);
		}

		else if ((shoulderPainSymptom == "yes") && (shoulderSwellingSymptom == "no") && (shoulderNumbnessSymptom == "yes") && (shoulderWeaknessSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = " You have Rotator Cuff Injury,Shoulder Impingement Syndrome, Frozen Shoulder (Adhesive Capsulitis) or Brachial Plexus Injury";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Shoulders", name, age, gender, activityRate, height, weight);
		}
		else if ((shoulderPainSymptom == "yes") && (shoulderSwellingSymptom == "yes") && (shoulderNumbnessSymptom == "no") && (shoulderWeaknessSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = " You have Thoracic Outlet Syndrome, Rotator Cuff Injury, Frozen Shoulder (Adhesive Capsulitis) or Brachial Plexus Injury";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Shoulders", name, age, gender, activityRate, height, weight);
		}
		else if ((shoulderPainSymptom == "yes") && (shoulderSwellingSymptom == "no") && (shoulderNumbnessSymptom == "yes") && (shoulderWeaknessSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----You haveGlenoid Labrum Tear,Shoulder Bursitis,Shoulder Impingement Syndrome,Rotator Cuff Tear  or Shoulder Impingement Syndrome----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Shoulders", name, age, gender, activityRate, height, weight);

		}
		else if ((shoulderPainSymptom == "yes") && (shoulderSwellingSymptom == "no") && (shoulderNumbnessSymptom == "no") && (shoulderWeaknessSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Shoulder Tendinitis, Acromioclavicular (AC) Joint Separation,Clavicle Fracture,Scapula Fractures or Biceps Tendiniti----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Shoulders", name, age, gender, activityRate, height, weight);

		}
		else if ((shoulderPainSymptom == "no") && (shoulderSwellingSymptom == "yes") && (shoulderNumbnessSymptom == "yes") && (shoulderWeaknessSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Hand Biceps Tendiniti,Shoulder Dislocation,horacic Outlet Syndromey,Shoulder Arthritis or Proximal Humerus Fracture----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Shoulders", name, age, gender, activityRate, height, weight);

		}
		else if ((shoulderPainSymptom == "no") && (shoulderSwellingSymptom == "yes") && (shoulderNumbnessSymptom == "no") && (shoulderWeaknessSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Osteoarthritis of the Shoulder,Subacromial Bursitis,Shoulder Instability,Suprascapular Neuropathy or Biceps Tendinitis ----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Shoulders", name, age, gender, activityRate, height, weight);

		}

		else if (symptom == "yes") {
			WritingConsoleInformation(name);
			diagnosis = "If you have any other symptoms, please consult a doctor.";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Shoulders", name, age, gender, activityRate, height, weight);
		}

		else if (symptom == "no") {
			WritingConsoleInformation(name);

			diagnosis = "Please enter true department";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Mouth", name, age, gender, activityRate, height, weight);
		}
		else {
			WritingConsoleInformation(name);

			diagnosis = "Please enter only yes/no. Thank you. ";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Shoulders", name, age, gender, activityRate, height, weight);

		}
	}

};

class foot : public organ {
private:
	string symptomFootPain, symptomFootSwelling, symptomFootWeakness, symptomFootNumbness, symptom, diagnosis;

public:
	string getBodyPart() override {
		cout << "What's your foot problem area?" << endl;
		getline(cin, bodyPart);
		return bodyPart;
	}

	string footPain() {
		cout << "Do you have pain in your feet? (yes/no)" << endl;
		cin >> symptomFootPain;
		organ::convertToLowercase(symptomFootPain);
		return symptomFootPain;
	}

	string footSwelling() {
		cout << "Do you experience swelling in your feet? (yes/no)" << endl;
		cin >> symptomFootSwelling;
		organ::convertToLowercase(symptomFootSwelling);
		return symptomFootSwelling;
	}

	string footWeakness() {
		cout << "Do you have weakness in your feet? (yes/no)" << endl;
		cin >> symptomFootWeakness;
		organ::convertToLowercase(symptomFootWeakness);
		return symptomFootWeakness;
	}

	string footNumbness() {
		cout << "Do you experience numbness in your feet? (yes/no)" << endl;
		cin >> symptomFootNumbness;
		organ::convertToLowercase(symptomFootNumbness);
		return symptomFootNumbness;
	}

	string nothingSymptom() override {
		cout << "Do you have any other Foot disease symptoms? (yes/no)" << endl;
		cin >> symptom;
		organ::convertToLowercase(symptom);
		return symptom;
	}
	void writeDiagnosisToFile(const long long int& idNumber, const string& alergic, const string& alcol, const string& sigara, const string& medic, const string& diagnosis, const string& areaName, const string& Username, const int& Userage, const string& UserGender, const int& UserActivite, const int& Userheight, const int& Userweight) {
		user::writeDiagnosisToFile(idNumber, alergic, alcol, sigara, medic, diagnosis, areaName, Username, Userage, UserGender, UserActivite, Userheight, Userweight);
	}


	void findFootDisease(string footPainSymptom, string footSwellingSymptom, string footWeaknessSymptom, string footNumbnessSymptom, string symptom, string name, long long int IDKimlik, int age, string gender, int activityRate, float height, float weight, string habitForCigarette, string habitForMedication, string habitForAlcohol, string habitForAllergic, string bodyPart) {
		if ((footPainSymptom == "yes") && (footSwellingSymptom == "yes") && (footWeaknessSymptom == "yes") && (footNumbnessSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = " You have Peripheral Neuropathy";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Foot", name, age, gender, activityRate, height, weight);
		}

		else if ((footPainSymptom == "yes") && (footSwellingSymptom == "yes") && (footNumbnessSymptom == "yes") && (footWeaknessSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = " You have Peripheral Neuropathy, Tarsal Tunnel Syndrome, Peripheral Artery Disease (PAD) or Foot Arthritis ";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Foot", name, age, gender, activityRate, height, weight);
		}


		else if ((footPainSymptom == "yes") && (footSwellingSymptom == "yes") && (footNumbnessSymptom == "no") && (footWeaknessSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "  You have Sciatica, Peripheral Neuropathy, Tarsal Tunnel Syndrome, Peripheral Artery Disease (PAD) or Foot Arthritis ";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Foot", name, age, gender, activityRate, height, weight);
		}
		else if ((footPainSymptom == "yes") && (footSwellingSymptom == "no") && (footNumbnessSymptom == "no") && (footWeaknessSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = " Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional.";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Foot", name, age, gender, activityRate, height, weight);
		}
		else if ((footPainSymptom == "no") && (footSwellingSymptom == "yes") && (footNumbnessSymptom == "no") && (footWeaknessSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = " Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional.";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Foot", name, age, gender, activityRate, height, weight);
		}
		else if ((footPainSymptom == "no") && (footSwellingSymptom == "no") && (footNumbnessSymptom == "yes") && (footWeaknessSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = " Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional.";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Foot", name, age, gender, activityRate, height, weight);
		}
		else if ((footPainSymptom == "no") && (footSwellingSymptom == "no") && (footNumbnessSymptom == "no") && (footWeaknessSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = " Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional.";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Foot", name, age, gender, activityRate, height, weight);
		}

		else if ((footPainSymptom == "no") && (footSwellingSymptom == "yes") && (footNumbnessSymptom == "yes") && (footWeaknessSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = " You have Sciatica, Peripheral Neuropathy, Peripheral Artery Disease (PAD) or Foot Arthritis";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Foot", name, age, gender, activityRate, height, weight);

		}
		else if ((footPainSymptom == "no") && (footSwellingSymptom == "no") && (footNumbnessSymptom == "yes") && (footWeaknessSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "You have Sciatica, Peripheral Neuropathy, Tarsal Tunnel Syndrome, Peripheral Artery Disease (PAD) or Foot Arthritis";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Foot", name, age, gender, activityRate, height, weight);

		}

		else if ((footPainSymptom == "yes") && (footSwellingSymptom == "no") && (footNumbnessSymptom == "yes") && (footWeaknessSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = " You have Sciatica, Tarsal Tunnel Syndrome, Peripheral Artery Disease (PAD) or Foot Arthritis";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Foot", name, age, gender, activityRate, height, weight);

		}
		else if ((footPainSymptom == "yes") && (footSwellingSymptom == "yes") && (footNumbnessSymptom == "no") && (footWeaknessSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = " You have Peripheral Neuropathy, Tarsal Tunnel Syndrome, Peripheral Artery Disease (PAD) or Foot Arthritis";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Foot", name, age, gender, activityRate, height, weight);

		}
		else if ((footPainSymptom == "yes") && (footSwellingSymptom == "no") && (footNumbnessSymptom == "yes") && (footWeaknessSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Charcot-Marie-Tooth Disease,Claw Toe,Peripheral Neuropathy,Foot Arthritis or Sciaticae----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Foot", name, age, gender, activityRate, height, weight);

		}
		else if ((footPainSymptom == "yes") && (footSwellingSymptom == "no") && (footNumbnessSymptom == "no") && (footWeaknessSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Corns and Calluses, Heel Spurs,Metatarsalgia,Lisfranc Injury or Charcot-Marie-Tooth Disease----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Foot", name, age, gender, activityRate, height, weight);

		}
		else if ((footPainSymptom == "no") && (footSwellingSymptom == "yes") && (footNumbnessSymptom == "yes") && (footWeaknessSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----You haveHammer Toe,Flat Feet (Pes Planus),Gout,Ingrown Toenail or Corns and Calluses----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Foot", name, age, gender, activityRate, height, weight);

		}
		else if ((footPainSymptom == "no") && (footSwellingSymptom == "yes") && (footNumbnessSymptom == "no") && (footWeaknessSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Plantar Fasciitis,Achilles Tendinitis,Bunions (Hallux Valgus),Morton's Neuroma or Hammer Toe ----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Foot", name, age, gender, activityRate, height, weight);

		}

		else if (symptom == "yes") {
			WritingConsoleInformation(name);

			diagnosis = "If you have any other symptoms, please consult a doctor.";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Foot", name, age, gender, activityRate, height, weight);

		}

		else if (symptom == "no") {
			WritingConsoleInformation(name);
			cout << endl;
			cout << endl;

			diagnosis = "Please enter true department";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Foot", name, age, gender, activityRate, height, weight);

		}
		else {
			WritingConsoleInformation(name);

			diagnosis = "Please enter only yes/no. Thank you. ";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Foot", name, age, gender, activityRate, height, weight);


		}
	}

};

class legs : public organ {
private:
	string symptomLegPain, symptomLegSwelling, symptomLegWeakness, symptomLegNumbness, symptom, diagnosis;

public:
	string getBodyPart() override {
		cout << "What's your legs problem area?" << endl;
		getline(cin, bodyPart);
		return bodyPart;
	}
	string legPain() {
		cout << "Do you have pain in your legs? (yes/no)" << endl;
		cin >> symptomLegPain;
		organ::convertToLowercase(symptomLegPain);
		return symptomLegPain;
	}

	string legSwelling() {
		cout << "Do you experience swelling in your legs? (yes/no)" << endl;
		cin >> symptomLegSwelling;
		organ::convertToLowercase(symptomLegSwelling);
		return symptomLegSwelling;
	}

	string legWeakness() {
		cout << "Do you have weakness in your legs? (yes/no)" << endl;
		cin >> symptomLegWeakness;
		organ::convertToLowercase(symptomLegWeakness);
		return symptomLegWeakness;
	}

	string legNumbness() {
		cout << "Do you experience numbness in your legs? (yes/no)" << endl;
		cin >> symptomLegNumbness;
		organ::convertToLowercase(symptomLegNumbness);
		return symptomLegNumbness;
	}

	string nothingSymptom() override {
		cout << "Do you have any   other leg disease symptoms? (yes/no)" << endl;
		cin >> symptom;
		organ::convertToLowercase(symptom);
		return symptom;
	}
	void writeDiagnosisToFile(const long long int& idNumber, const string& alergic, const string& alcol, const string& sigara, const string& medic, const string& diagnosis, const string& areaName, const string& Username, const int& Userage, const string& UserGender, const int& UserActivite, const int& Userheight, const int& Userweight) {
		user::writeDiagnosisToFile(idNumber, alergic, alcol, sigara, medic, diagnosis, areaName, Username, Userage, UserGender, UserActivite, Userheight, Userweight);
	}


	void findLegDisease(string legPainSymptom, string legSwellingSymptom, string legWeaknessSymptom, string legNumbnessSymptom, string symptom, string name, long long int IDKimlik, int age, string gender, int activityRate, float height, float weight, string habitForCigarette, string habitForMedication, string habitForAlcohol, string habitForAllergic, string bodyPart) {
		if ((legPainSymptom == "yes") && (legSwellingSymptom == "yes") && (legWeaknessSymptom == "yes") && (legNumbnessSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = " You have Peripheral Artery Disease (PAD)";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Leg", name, age, gender, activityRate, height, weight);
		}

		else if ((legPainSymptom == "yes") && (legSwellingSymptom == "yes") && (legNumbnessSymptom == "yes") && (legWeaknessSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = " You have Peripheral Neuropathy, Deep Vein Thrombosis (DVT), Sciatica or Lumbar Spinal Stenosis";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Leg", name, age, gender, activityRate, height, weight);
		}


		else if ((legPainSymptom == "yes") && (legSwellingSymptom == "yes") && (legNumbnessSymptom == "no") && (legWeaknessSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "  You have Musculoskeletal Issues, Peripheral Neuropathy, Deep Vein Thrombosis (DVT), Sciatica or Lumbar Spinal Stenosis";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Leg", name, age, gender, activityRate, height, weight);
		}
		else if ((legPainSymptom == "yes") && (legSwellingSymptom == "no") && (legNumbnessSymptom == "no") && (legWeaknessSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = " Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional.";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Leg", name, age, gender, activityRate, height, weight);
		}
		else if ((legPainSymptom == "no") && (legSwellingSymptom == "yes") && (legNumbnessSymptom == "no") && (legWeaknessSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = " Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional.";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Leg", name, age, gender, activityRate, height, weight);
		}
		else if ((legPainSymptom == "no") && (legSwellingSymptom == "no") && (legNumbnessSymptom == "yes") && (legWeaknessSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = " Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional.";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Leg", name, age, gender, activityRate, height, weight);
		}
		else if ((legPainSymptom == "no") && (legSwellingSymptom == "no") && (legNumbnessSymptom == "no") && (legWeaknessSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = " Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional.";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Leg", name, age, gender, activityRate, height, weight);
		}

		else if ((legPainSymptom == "no") && (legSwellingSymptom == "yes") && (legNumbnessSymptom == "yes") && (legWeaknessSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = " You have Peripheral Neuropathy, Deep Vein Thrombosis (DVT), Sciatica or Lumbar Spinal Stenosis";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Leg", name, age, gender, activityRate, height, weight);

		}
		else if ((legPainSymptom == "no") && (legSwellingSymptom == "no") && (legNumbnessSymptom == "yes") && (legWeaknessSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = " You have Peripheral Artery Disease (PAD), Peripheral Neuropathy, Deep Vein Thrombosis (DVT), Sciatica or Lumbar Spinal Stenosis";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Leg", name, age, gender, activityRate, height, weight);

		}

		else if ((legPainSymptom == "yes") && (legSwellingSymptom == "no") && (legNumbnessSymptom == "yes") && (legWeaknessSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "You have Peripheral Artery Disease (PAD), Peripheral Neuropathy, Deep Vein Thrombosis (DVT) or Lumbar Spinal Stenosis";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Leg", name, age, gender, activityRate, height, weight);
		}
		else if ((legPainSymptom == "yes") && (legSwellingSymptom == "yes") && (legNumbnessSymptom == "no") && (legWeaknessSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = " You have Peripheral Artery Disease (PAD), Deep Vein Thrombosis (DVT), Sciatica or Lumbar Spinal Stenosis";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Leg", name, age, gender, activityRate, height, weight);
		}
		else if ((legPainSymptom == "yes") && (legSwellingSymptom == "no") && (legNumbnessSymptom == "yes") && (legWeaknessSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Peripheral Neuropathy in the Legs,Restless Legs Syndrome (RLS),Compartment Syndrome,Hamstring Injury or estless Legs Syndrome (RLS)----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Leg", name, age, gender, activityRate, height, weight);

		}
		else if ((legPainSymptom == "yes") && (legSwellingSymptom == "no") && (legNumbnessSymptom == "no") && (legWeaknessSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Osteoarthritis of the Knee,Meniscus Tear,Leg Ulcers,Cellulitis or Peripheral Neuropathy in the Legs----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Leg", name, age, gender, activityRate, height, weight);

		}
		else if ((legPainSymptom == "no") && (legSwellingSymptom == "yes") && (legNumbnessSymptom == "yes") && (legWeaknessSymptom == "no")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Calf Strain,Tendinitis,Stress Fractures,Sciatica or Osteoarthritis of the Knee----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Leg", name, age, gender, activityRate, height, weight);

		}
		else if ((legPainSymptom == "no") && (legSwellingSymptom == "yes") && (legNumbnessSymptom == "no") && (legWeaknessSymptom == "yes")) {
			WritingConsoleInformation(name);
			diagnosis = "----You have Deep Vein Thrombosis (DVT),Varicose Veins,Peripheral Artery Disease (PAD),Shin Splints or Calf Strain ----";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Leg", name, age, gender, activityRate, height, weight);

		}


		else if (symptom == "yes") {
			WritingConsoleInformation(name);
			diagnosis = "If you have any other symptoms, please consult a doctor.";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Leg", name, age, gender, activityRate, height, weight);
		}

		else if (symptom == "no") {
			WritingConsoleInformation(name);
			diagnosis = "Please enter true department";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Leg", name, age, gender, activityRate, height, weight);
		}
		else {
			WritingConsoleInformation(name);
			diagnosis = "Please enter only yes/no. Thank you. ";
			writeDiagnosisToFile(IDKimlik, habitForAllergic, habitForAlcohol, habitForCigarette, habitForMedication, diagnosis, "Leg", name, age, gender, activityRate, height, weight);

		}
	}
};
