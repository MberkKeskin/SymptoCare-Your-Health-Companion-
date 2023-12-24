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

		if ((semptomBluredVision == "yes") && (semptomeyePain == "yes") && (semptomEyeSwell == "yes")) {
			cout << " You have Glokom disease " << endl;
			//ABİ NORMALDE BURAYI TEXT FİLE RAPOR OLARAK YAPCAZ BEN SADECE GEÇİÇİ YAZDIM
		}
		else if ((semptomBluredVision == "yes") && (semptomeyePain == "yes") && (semptomEyeSwell == "no")) {
			cout << " You have Optic Norit disease " << endl;
			//ABİ NORMALDE BURAYI TEXT FİLE RAPOR OLARAK YAPCAZ BEN SADECE GEÇİÇİ YAZDIM
		}
		else if ((semptomBluredVision == "no") && (semptomeyePain == "no") && (semptomEyeSwell == "yes")) {
			cout << " You have Alerjic Konjonktivit disease " << endl;
			//ABİ NORMALDE BURAYI TEXT FİLE RAPOR OLARAK YAPCAZ BEN SADECE GEÇİÇİ YAZDIM
		}
		else if ((semptomBluredVision == "no") && (semptomeyePain == "yes") && (semptomEyeSwell == "yes")) {
			cout << " You have Katarackt disease " << endl;
		}
		else if ((semptomBluredVision == "yes") && (semptomeyePain == "no") && (semptomEyeSwell == "no")) {
			cout << " Sorry One symptom is not enought for ill " << endl;
		}
		else if (symptom == "yes") {
			cout << " If you have other eye disaster symptoms please go to doctor  " << endl;
		}
		else if (symptom == "no") {
			cout << "Please enter true department. Eye department might be the wrong department for you " << endl;
		}

		else {
			cout << "Please enter only yes/no. Thank you. " << endl;

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

		if ((semptomTasteDisaster == "yes") && (semptomBleddingTeeth == "yes") && (symptomCankerSores == "yes") && (semptomDryness == "yes") && (semptomToothLose == "yes")) {
			cout << "You have tongue cancer" << endl;
		}

		else if ((semptomTasteDisaster == "yes") && (semptomBleddingTeeth == "yes") && (semptomDryness == "yes") && (semptomToothLose == "yes") && (symptomCankerSores == "no")) {
			cout << "You have Periodontal disease" << endl;
		}

		else if ((semptomTasteDisaster == "yes") && (semptomBleddingTeeth == "yes") && (semptomToothLose == "yes") && (semptomDryness == "no") && (symptomCankerSores == "no")) {
			cout << "You have Kronik Gingivitis disease" << endl;
		}

		else if ((semptomTasteDisaster == "yes") && (semptomBleddingTeeth == "yes") && (semptomDryness == "no") && (symptomCankerSores == "no") && (semptomToothLose == "no")) {
			cout << "You have Xerostomia disease" << endl;
		}
		else if ((semptomTasteDisaster == "yes") && (semptomBleddingTeeth == "no") && (semptomDryness == "no") && (symptomCankerSores == "no") && (semptomToothLose == "no")) {
			cout << "Sorry One symptom is not enought for ill" << endl;
		}
		else if ((semptomTasteDisaster == "no") && (semptomBleddingTeeth == "yes") && (semptomDryness == "no") && (symptomCankerSores == "no") && (semptomToothLose == "no")) {
			cout << "Sorry One symptom is not enought for ill" << endl;
		}
		else if ((semptomTasteDisaster == "no") && (semptomBleddingTeeth == "no") && (semptomDryness == "yes") && (symptomCankerSores == "no") && (semptomToothLose == "no")) {
			cout << "Sorry One symptom is not enought for ill" << endl;
		}
		else if ((semptomTasteDisaster == "no") && (semptomBleddingTeeth == "no") && (semptomDryness == "no") && (symptomCankerSores == "yes") && (semptomToothLose == "no")) {
			cout << "Sorry One symptom is not enought for ill" << endl;
		}
		else if ((semptomTasteDisaster == "no") && (semptomBleddingTeeth == "no") && (semptomDryness == "no") && (symptomCankerSores == "no") && (semptomToothLose == "yes")) {
			cout << "Sorry One symptom is not enought for ill" << endl;
		}
		else if ((semptomTasteDisaster == "no") && (semptomBleddingTeeth == "yes") && (semptomDryness == "yes") && (symptomCankerSores == "yes") && (semptomToothLose == "yes")) {
			cout << "You have Gum disease" << endl;
		}
		else if ((semptomTasteDisaster == "no") && (semptomBleddingTeeth == "no") && (semptomDryness == "yes") && (symptomCankerSores == "yes") && (semptomToothLose == "yes")) {
			cout << "You have Oral Candidiasis" << endl;
		}
		else if ((semptomTasteDisaster == "no") && (semptomBleddingTeeth == "no") && (semptomDryness == "yes") && (symptomCankerSores == "yes") && (semptomToothLose == "no")) {
			cout << "You have Aphthous Stomatitis" << endl;

		}
		else if ((semptomTasteDisaster == "yes") && (semptomBleddingTeeth == "no") && (semptomDryness == "yes") && (symptomCankerSores == "yes") && (semptomToothLose == "yes")) {
			cout << "You have Oral Lichen Planus" << endl;
		}
		else if ((semptomTasteDisaster == "yes") && (semptomBleddingTeeth == "yes") && (semptomDryness == "no") && (symptomCankerSores == "yes") && (semptomToothLose == "yes")) {
			cout << "You have mouth condition disease" << endl;
		}
		else if ((semptomTasteDisaster == "yes") && (semptomBleddingTeeth == "yes") && (semptomDryness == "yes") && (symptomCankerSores == "no") && (semptomToothLose == "yes")) {
			cout << "You have Chronic Gingivitis disease" << endl;
		}
		else if (symptom == "yes") {
			cout << " You have other mouth disaster " << endl;
		}

		else if (symptom == "no") {
			cout << "Please enter true department" << endl;
		}
		else {
			cout << "Please enter only yes/no. Thank you. " << endl;

		}
	}
};

class brain : public head, public human {
private:
	string headache, seizures, memoryLoss, panicAttack, symptom;

public:
	string headacheSymptom() {
		cout << "Do you have strong headaches? (yes/no)" << endl;
		cin >> headache;
		return headache;
	}

	
	string seizureSymptom() {
		cout << "Do you have seizures very often? (yes/no)" << endl;
		cin >> seizures;
		return seizures;
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

	void findBrainDisaster(string headache,  string seizure, string memory, string panicAttack, string symptom) {
		if ((headache == "yes") && (seizure == "yes") && (memory == "yes") && (panicAttack == "yes")) {
			cout << "You have epilepsi" << endl;
		}

		else if ((headache == "yes") && (seizure == "yes") && (memory == "yes") && (panicAttack == "no")) {
			cout << "You have Vascular Problems" << endl;
		}

		else if ((headache == "yes") && (seizure == "yes") && (memory == "no") && (panicAttack == "yes") ) {
			cout << "You have Psychogenic Seizures:" << endl;
		}

		else if ((headache == "yes") && (seizure == "yes") && (memory == "no") && (panicAttack == "no") ) {
			cout << "You have Neurological Diseases" << endl;
		}
		else if ((headache == "yes") &&(seizures == "no") &&(memoryLoss == "yes") &&(panicAttack == "yes")) {
    			cout << "Possible heart-related issue. Consult a cardiologist." << endl;
		}
		else if ((headache == "yes") &&(seizures == "no") &&(memoryLoss == "yes") &&(panicAttack == "no")) 		{
    			cout << "Probable respiratory infection. Consult a doctor for further evaluation." << endl;
		}
		else if ((headache == "yes") &&(seizures == "no") &&(memoryLoss == "no") &&(panicAttack == "yes")) {
    			cout << "Likely influenza. Rest and stay hydrated." << endl;
		}
		else if ((headache == "yes") &&(seizures == "no") &&(memoryLoss == "no") &&(panicAttack == "no")) {
    			cout << "Mild respiratory irritation. Monitor symptoms and seek medical advice if they persist." << endl;
		}

		else if ((headache == "no") && (seizures == "no") && ( memoryLoss == "yes") && (panicAttack == "yes") ) {
			cout << "Panic attacks and memory loss can be associated with anxiety disorders." << endl;
		}
		else if ((headache == "no") && (seizures == "no") && (memoryLoss == "yes") && (panicAttack == "no") ) {
			cout << "Memory loss may indicate Alzheimer's disease, dementia, or other memory disorders." << endl;
		}
		else if ((headache == "no") && (seizures == "no") && (memoryLoss == "no") && (panicAttack == "yes")) {
			cout << "Sorry One symptom is not enought for ill" << endl;
		}

		else if (headache == "no" && seizures == "yes" && memoryLoss == "yes" && panicAttack == "yes") {
			cout << "You might have epilepsy or anxiety." << endl;
		}

		else if (headache == "no" && seizures == "yes" && memoryLoss == "yes" && panicAttack == "no") {
			cout << "You might have epilepsy or Alzheimer's disease." << endl;
		}
		
		else if (headache == "no" && seizures == "yes" && memoryLoss == "no" && panicAttack == "yes") {
			cout << "You might have epilepsy. Consult a psychiatrist for your panic attack." << endl;
		}
		
		else if (headache == "no" && seizures == "yes" && memoryLoss == "no" && panicAttack == "no") {
			cout << "You might have epilepsy, traumatic injuries or brain infections." << endl;
		}
		else if (symptom == "yes") {
			cout << " You have other mouth disaster " << endl;
		}

		else if (symptom == "no") {
			cout << "Please enter true department" << endl;
		}
		else {
			cout << "Please enter only yes/no. Thank you. " << endl;

		}
	}
};

class body : public human {

};

class chest : public body, public human {
private:
	string symptomChestPain, symptomShortnessOfBreath, symptomCough, symptomFever, symptom;

public:
	string chestPain() {
		cout << "Do you have chest pain? (yes/no)" << endl;
		cin >> symptomChestPain;
		return symptomChestPain;
	}

	string shortnessOfBreath() {
		cout << "Do you have shortness of breath? (yes/no)" << endl;
		cin >> symptomShortnessOfBreath;
		return symptomShortnessOfBreath;
	}

	string cough() {
		cout << "Do you have a cough? (yes/no)" << endl;
		cin >> symptomCough;
		return symptomCough;
	}

	string fever() {
		cout << "Do you have a fever? (yes/no)" << endl;
		cin >> symptomFever;
		return symptomFever;
	}

	string nothingSymptom() {
		cout << "Do you have any other symptoms? (yes/no)" << endl;
		cin >> symptom;
		return symptom;
	}

	void findChestDisease(string chestPainSymptom, string breathSymptom, string coughSymptom, string feverSymptom,string symptom) {
		
		else if (symptom == "yes") {
			cout << " You have other mouth disaster " << endl;
		}

		else if (symptom == "no") {
			cout << "Please enter true department" << endl;
		}
		else {
			cout << "Please enter only yes/no. Thank you. " << endl;

		}
	}
};



class heart : public body, public human {
private:
	string symptomChestPain, symptomShortnessOfBreath, symptomPalpitations, symptomFatigue, symptom;

public:
	string chestPpain() {
		cout << "Do you have chest pain? (yes/no)" << endl;
		cin >> symptomChestPain;
		return symptomChestPain;
	}

	string shortnessOfBbreath() {
		cout << "Do you have shortness of breath? (yes/no)" << endl;
		cin >> symptomShortnessOfBreath;
		return symptomShortnessOfBreath;
	}

	string palpitations() {
		cout << "Do you experience palpitations? (yes/no)" << endl;
		cin >> symptomPalpitations;
		return symptomPalpitations;
	}

	string fatigue() {
		cout << "Do you feel fatigue? (yes/no)" << endl;
		cin >> symptomFatigue;
		return symptomFatigue;
	}

	string nothingSymptom() {
		cout << "Do you have any other symptoms? (yes/no)" << endl;
		cin >> symptom;
		return symptom;
	}

	void findHeartCondition(string chestPainSymptom, string breathSymptom, string palpitationsSymptom, string fatigueSymptom,string symptom) {
		
		else if (symptom == "yes") {
			cout << " You have other mouth disaster " << endl;
		}

		else if (symptom == "no") {
			cout << "Please enter true department" << endl;
		}
		else {
			cout << "Please enter only yes/no. Thank you. " << endl;

		}
	}

};

class abdomen : public body, public human {
private:
	string symptomAbdominalPain, symptomNausea, symptomVomiting, symptomBloating, symptom;

public:
	string abdominalPain() {
		cout << "Do you have abdominal pain? (yes/no)" << endl;
		cin >> symptomAbdominalPain;
		return symptomAbdominalPain;
	}

	string nausea() {
		cout << "Do you experience nausea? (yes/no)" << endl;
		cin >> symptomNausea;
		return symptomNausea;
	}

	string vomiting() {
		cout << "Do you have vomiting? (yes/no)" << endl;
		cin >> symptomVomiting;
		return symptomVomiting;
	}

	string bloating() {
		cout << "Do you experience bloating? (yes/no)" << endl;
		cin >> symptomBloating;
		return symptomBloating;
	}

	string nothingSymptom() {
		cout << "Do you have any other symptoms? (yes/no)" << endl;
		cin >> symptom;
		return symptom;
	}

	void findAbdominalCondition(string abdominalPainSymptom, string nauseaSymptom, string vomitingSymptom, string bloatingSymptom,string symptom) {
		
		else if (symptom == "yes") {
			cout << " You have other mouth disaster " << endl;
		}

		else if (symptom == "no") {
			cout << "Please enter true department" << endl;
		}
		else {
			cout << "Please enter only yes/no. Thank you. " << endl;

		}
	}

};

class limb : public human {


};

class arms : public limb, public human {
private:
	string symptomArmPain, symptomArmSwelling, symptomArmWeakness, symptomArmNumbness, symptom;

public:
	string armPain() {
		cout << "Do you have pain in your arms? (yes/no)" << endl;
		cin >> symptomArmPain;
		return symptomArmPain;
	}

	string armSwelling() {
		cout << "Do you experience swelling in your arms? (yes/no)" << endl;
		cin >> symptomArmSwelling;
		return symptomArmSwelling;
	}

	string armWeakness() {
		cout << "Do you have weakness in your arms? (yes/no)" << endl;
		cin >> symptomArmWeakness;
		return symptomArmWeakness;
	}

	string armNumbness() {
		cout << "Do you experience numbness in your arms? (yes/no)" << endl;
		cin >> symptomArmNumbness;
		return symptomArmNumbness;
	}

	string nothingSymptom() {
		cout << "Do you have any other symptoms? (yes/no)" << endl;
		cin >> symptom;
		return symptom;
	}

	void findArmCondition(string armPainSymptom, string armSwellingSymptom, string armWeaknessSymptom, string armNumbnessSymptom,string symptom) {
		
		else if (symptom == "yes") {
			cout << " You have other mouth disaster " << endl;
		}

		else if (symptom == "no") {
			cout << "Please enter true department" << endl;
		}
		else {
			cout << "Please enter only yes/no. Thank you. " << endl;

		}
	}

};

class hands : public limb, public human {
private:
	string symptomHandPain, symptomHandSwelling, symptomHandWeakness, symptomHandNumbness, symptom;

public:
	string handPain() {
		cout << "Do you have pain in your hands? (yes/no)" << endl;
		cin >> symptomHandPain;
		return symptomHandPain;
	}

	string handSwelling() {
		cout << "Do you experience swelling in your hands? (yes/no)" << endl;
		cin >> symptomHandSwelling;
		return symptomHandSwelling;
	}

	string handWeakness() {
		cout << "Do you have weakness in your hands? (yes/no)" << endl;
		cin >> symptomHandWeakness;
		return symptomHandWeakness;
	}

	string handNumbness() {
		cout << "Do you experience numbness in your hands? (yes/no)" << endl;
		cin >> symptomHandNumbness;
		return symptomHandNumbness;
	}

	string nothingSymptom() {
		cout << "Do you have any other symptoms? (yes/no)" << endl;
		cin >> symptom;
		return symptom;
	}

	void findHandCondition(string handPainSymptom, string handSwellingSymptom, string handWeaknessSymptom, string handNumbnessSymptom, string symptom) {
		
		else if (symptom == "yes") {
			cout << " You have other mouth disaster " << endl;
		}

		else if (symptom == "no") {
			cout << "Please enter true department" << endl;
		}
		else {
			cout << "Please enter only yes/no. Thank you. " << endl;

		}
	}
};

class shoulders : public limb, public human {
private:
	string symptomShoulderPain, symptomShoulderSwelling, symptomShoulderWeakness, symptomShoulderNumbness, symptom;

public:
	string shoulderPain() {
		cout << "Do you have pain in your shoulders? (yes/no)" << endl;
		cin >> symptomShoulderPain;
		return symptomShoulderPain;
	}

	string shoulderSwelling() {
		cout << "Do you experience swelling in your shoulders? (yes/no)" << endl;
		cin >> symptomShoulderSwelling;
		return symptomShoulderSwelling;
	}

	string shoulderWeakness() {
		cout << "Do you have weakness in your shoulders? (yes/no)" << endl;
		cin >> symptomShoulderWeakness;
		return symptomShoulderWeakness;
	}

	string shoulderNumbness() {
		cout << "Do you experience numbness in your shoulders? (yes/no)" << endl;
		cin >> symptomShoulderNumbness;
		return symptomShoulderNumbness;
	}

	string nothingSymptom() {
		cout << "Do you have any other symptoms? (yes/no)" << endl;
		cin >> symptom;
		return symptom;
	}

	void findShoulderCondition(string shoulderPainSymptom, string shoulderSwellingSymptom, string shoulderWeaknessSymptom, string shoulderNumbnessSymptom,string symptom) {
		
		else if (symptom == "yes") {
			cout << " You have other mouth disaster " << endl;
		}

		else if (symptom == "no") {
			cout << "Please enter true department" << endl;
		}
		else {
			cout << "Please enter only yes/no. Thank you. " << endl;

		}
	}

};

class foot : public limb, public human {
private:
	string symptomFootPain, symptomFootSwelling, symptomFootWeakness, symptomFootNumbness, symptom;

public:
	string footPain() {
		cout << "Do you have pain in your feet? (yes/no)" << endl;
		cin >> symptomFootPain;
		return symptomFootPain;
	}

	string footSwelling() {
		cout << "Do you experience swelling in your feet? (yes/no)" << endl;
		cin >> symptomFootSwelling;
		return symptomFootSwelling;
	}

	string footWeakness() {
		cout << "Do you have weakness in your feet? (yes/no)" << endl;
		cin >> symptomFootWeakness;
		return symptomFootWeakness;
	}

	string footNumbness() {
		cout << "Do you experience numbness in your feet? (yes/no)" << endl;
		cin >> symptomFootNumbness;
		return symptomFootNumbness;
	}

	string nothingSymptom() {
		cout << "Do you have any other symptoms? (yes/no)" << endl;
		cin >> symptom;
		return symptom;
	}

	void findFootCondition(string footPainSymptom, string footSwellingSymptom, string footWeaknessSymptom, string footNumbnessSymptom,string symptom) {
		
		else if (symptom == "yes") {
			cout << " You have other mouth disaster " << endl;
		}

		else if (symptom == "no") {
			cout << "Please enter true department" << endl;
		}
		else {
			cout << "Please enter only yes/no. Thank you. " << endl;

		}
	}

};

class legs : public limb, public human {
private:
	string symptomLegPain, symptomLegSwelling, symptomLegWeakness, symptomLegNumbness, symptom;

public:
	string legPain() {
		cout << "Do you have pain in your legs? (yes/no)" << endl;
		cin >> symptomLegPain;
		return symptomLegPain;
	}

	string legSwelling() {
		cout << "Do you experience swelling in your legs? (yes/no)" << endl;
		cin >> symptomLegSwelling;
		return symptomLegSwelling;
	}

	string legWeakness() {
		cout << "Do you have weakness in your legs? (yes/no)" << endl;
		cin >> symptomLegWeakness;
		return symptomLegWeakness;
	}

	string legNumbness() {
		cout << "Do you experience numbness in your legs? (yes/no)" << endl;
		cin >> symptomLegNumbness;
		return symptomLegNumbness;
	}

	string nothingSymptom() {
		cout << "Do you have any other symptoms? (yes/no)" << endl;
		cin >> symptom;
		return symptom;
	}

	void findLegCondition(string legPainSymptom, string legSwellingSymptom, string legWeaknessSymptom, string legNumbnessSymptom,string symptom) {
		
		else if (symptom == "yes") {
			cout << " You have other mouth disaster " << endl;
		}

		else if (symptom == "no") {
			cout << "Please enter true department" << endl;
		}
		else {
			cout << "Please enter only yes/no. Thank you. " << endl;

		}
	}

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
