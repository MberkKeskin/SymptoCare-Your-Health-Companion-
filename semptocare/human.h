
#pragma once
#include <iostream>
#include <limits>
#include <string>
#include <cctype>

using namespace std;

class human {
private:
	string bodyPart;

public:
	void convertToLowercase(string& symptom) {
		for (char& ch : symptom) {
			ch = tolower(ch);
		}
	}

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

	string nothingSymptom() {
		cout << " Do you have any other symptoms? (yes/no) " << endl;
		cin >> symptom;
		human::convertToLowercase(symptom);
		return symptom;
	}

	void findEyeDisaster(string semptomBluredVision, string semptomeyePain, string semptomEyeSwell, string symptom) {

		if ((semptomBluredVision == "yes") && (semptomeyePain == "yes") && (semptomEyeSwell == "yes")) {
			cout << " You have Glaucoma disease " << endl;
			//ABİ NORMALDE BURAYI TEXT FİLE RAPOR OLARAK YAPCAZ BEN SADECE GEÇİÇİ YAZDIM
		}
		else if ((semptomBluredVision == "yes") && (semptomeyePain == "yes") && (semptomEyeSwell == "no")) {
			cout << " You have Optic Retinopati disease " << endl;
			//ABİ NORMALDE BURAYI TEXT FİLE RAPOR OLARAK YAPCAZ BEN SADECE GEÇİÇİ YAZDIM
		}
		else if ((semptomBluredVision == "no") && (semptomeyePain == "no") && (semptomEyeSwell == "yes")) {
			cout << " Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional. " << endl;
			//ABİ NORMALDE BURAYI TEXT FİLE RAPOR OLARAK YAPCAZ BEN SADECE GEÇİÇİ YAZDIM
		}
		else if ((semptomBluredVision == "no") && (semptomeyePain == "yes") && (semptomEyeSwell == "yes")) {
			cout << " You have cataract disease " << endl;
		}
		else if ((semptomBluredVision == "yes") && (semptomeyePain == "no") && (semptomEyeSwell == "no")) {
			cout << " Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional." << endl;
		}
		else if ((semptomBluredVision == "yes") && (semptomeyePain == "no") && (semptomEyeSwell == "yes")) {
			cout << " You have Optic Norit disease " << endl;
			//ABİ NORMALDE BURAYI TEXT FİLE RAPOR OLARAK YAPCAZ BEN SADECE GEÇİÇİ YAZDIM
		}
		else if ((semptomBluredVision == "no") && (semptomeyePain == "yes") && (semptomEyeSwell == "no")) {
			cout << " Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional. " << endl;
			//ABİ NORMALDE BURAYI TEXT FİLE RAPOR OLARAK YAPCAZ BEN SADECE GEÇİÇİ YAZDIM
		}
		else if (symptom == "yes") {
			cout << " If you have any other symptoms, please consult a doctor." << endl;
		}
		else if (symptom == "no") {
			cout << "Please enter true department. Eye department might be the wrong department for you." << endl;
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
		human::convertToLowercase(symptomTasteDiasater);
		return symptomTasteDiasater;
	}

	string bleedingTeeth() {
		cout << " Do you have bleeding teeth? (yes/no) " << endl;
		cin >> symptomBleedingTeeth;
		human::convertToLowercase(symptomBleedingTeeth);
		return symptomBleedingTeeth;
	}

	string toothLosse() {
		cout << " Do you have any tooth loss? (yes/no) " << endl;
		cin >> symptomForToothLoss;
		human::convertToLowercase(symptomForToothLoss);
		return symptomForToothLoss;
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

	string nothingSymptom() {
		cout << " Do you have other Symptoms ? (yes/no) " << endl;
		cin >> symptom;
		human::convertToLowercase(symptom);
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
			cout << "You have Chronic Gingivitis disease" << endl;
		}

		else if ((semptomTasteDisaster == "yes") && (semptomBleddingTeeth == "yes") && (semptomDryness == "no") && (symptomCankerSores == "no") && (semptomToothLose == "no")) {
			cout << "You have Xerostomia disease" << endl;
		}
		else if ((semptomTasteDisaster == "yes") && (semptomBleddingTeeth == "no") && (semptomDryness == "no") && (symptomCankerSores == "no") && (semptomToothLose == "no")) {
			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
		}
		else if ((semptomTasteDisaster == "no") && (semptomBleddingTeeth == "yes") && (semptomDryness == "no") && (symptomCankerSores == "no") && (semptomToothLose == "no")) {
			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
		}
		else if ((semptomTasteDisaster == "no") && (semptomBleddingTeeth == "no") && (semptomDryness == "yes") && (symptomCankerSores == "no") && (semptomToothLose == "no")) {
			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
		}
		else if ((semptomTasteDisaster == "no") && (semptomBleddingTeeth == "no") && (semptomDryness == "no") && (symptomCankerSores == "yes") && (semptomToothLose == "no")) {
			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
		}
		else if ((semptomTasteDisaster == "no") && (semptomBleddingTeeth == "no") && (semptomDryness == "no") && (symptomCankerSores == "no") && (semptomToothLose == "yes")) {
			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
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
			cout << "If you have any other symptoms, please consult a doctor." << endl;
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

	string nothingSymptom() {
		cout << "Do you have any other symptoms? (yes/no)" << endl;
		cin >> symptom;
		human::convertToLowercase(symptom);
		return symptom;
	}

	void findBrainDisease(string headache, string seizures, string memoryLoss, string panicAttack, string symptom) {
		if ((headache == "yes") && (seizures == "yes") && (memoryLoss == "yes") && (panicAttack == "yes")) {
			cout << "You have epilepsi" << endl;
		}

		else if ((headache == "yes") && (seizures == "yes") && (memoryLoss == "yes") && (panicAttack == "no")) {
			cout << "You have Vascular Problems" << endl;
		}

		else if ((headache == "yes") && (seizures == "yes") && (memoryLoss == "no") && (panicAttack == "yes")) {
			cout << "You have Psychogenic Seizures:" << endl;
		}

		else if ((headache == "yes") && (seizures == "yes") && (memoryLoss == "no") && (panicAttack == "no")) {
			cout << "You have Neurological Diseases" << endl;
		}
		else if ((headache == "yes") && (seizures == "no") && (memoryLoss == "yes") && (panicAttack == "yes")) {
			cout << "Possible heart-related issue. Consult a cardiologist." << endl;
		}
		else if ((headache == "yes") && (seizures == "no") && (memoryLoss == "yes") && (panicAttack == "no")) {
			cout << "Probable respiratory infection. Consult a doctor for further evaluation." << endl;
		}
		else if ((headache == "yes") && (seizures == "no") && (memoryLoss == "no") && (panicAttack == "yes")) {
			cout << "Likely influenza. Rest and stay hydrated." << endl;
		}
		else if ((headache == "yes") && (seizures == "no") && (memoryLoss == "no") && (panicAttack == "no")) {
			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
		}

		else if ((headache == "no") && (seizures == "no") && (memoryLoss == "yes") && (panicAttack == "yes")) {
			cout << "Panic attacks and memory loss can be associated with anxiety disorders." << endl;
		}
		else if ((headache == "no") && (seizures == "no") && (memoryLoss == "yes") && (panicAttack == "no")) {
			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
		}
		else if ((headache == "no") && (seizures == "no") && (memoryLoss == "no") && (panicAttack == "yes")) {
			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
		}

		else if ((headache == "no") && (seizures == "yes") && (memoryLoss == "yes") && (panicAttack == "yes")) {
			cout << "You might have epilepsy or anxiety." << endl;
		}

		else if ((headache == "no") && (seizures == "yes") &&( memoryLoss == "yes") && (panicAttack == "no")) {
			cout << "You might have epilepsy or Alzheimer's disease." << endl;
		}

		else if ((headache == "no") && (seizures == "yes") && (memoryLoss == "no") && (panicAttack == "yes")) {
			cout << "You might have epilepsy. Consult a psychiatrist for your panic attack." << endl;
		}

		else if ((headache == "no") && (seizures == "yes") && (memoryLoss == "no") && (panicAttack == "no")) {
			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
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

	string nothingSymptom() {
		cout << "Do you have any other symptoms? (yes/no)" << endl;
		cin >> symptom;
		human::convertToLowercase(symptom);
		return symptom;
	}

	void findChestDisease(string chestPainSymptom, string breathSymptom, string coughSymptom, string feverSymptom, string symptom) {
		if ((chestPainSymptom == "yes") && (breathSymptom == "yes") && (coughSymptom == "yes") && (feverSymptom == "yes")) {
			cout << "You have lung cancer" << endl;
		}

		else if ((chestPainSymptom == "yes") && (breathSymptom == "yes") && (coughSymptom == "yes") && (feverSymptom == "no")) {
			cout << "You have Gastroözofageal Reflü disease" << endl;
		}

		else if ((chestPainSymptom == "yes") && (breathSymptom == "yes") && (coughSymptom == "no") && (feverSymptom == "yes")) {
			cout << "You have Pnömoni disease" << endl;
		}

		else if ((chestPainSymptom == "yes") && (breathSymptom == "yes") && (coughSymptom == "no") && (feverSymptom == "no")) {
			cout << "You have plörezi diseases" << endl;
		}
		else if ((chestPainSymptom == "yes") && (breathSymptom == "no") && (coughSymptom == "yes") && (feverSymptom == "yes")) {
			cout << "Possible Pnomotoraks diseases" << endl;
		}
		else if ((chestPainSymptom == "yes") && (breathSymptom == "no") && (coughSymptom == "yes") && (feverSymptom == "no")) {
			cout << "Probable KOAH." << endl;
		}
		else if ((chestPainSymptom == "yes") && (breathSymptom == "no") && (coughSymptom == "no") && (feverSymptom == "yes")) {
			cout << "Likely pulmonary embolism." << endl;
		}
		else if ((chestPainSymptom == "yes") && (breathSymptom == "no") && (coughSymptom == "no") && (feverSymptom == "no")) {
			cout << "Sorry One symptom is not enought for ill" << endl;
		}

		else if ((chestPainSymptom == "no") && (breathSymptom == "no") && (coughSymptom == "yes") && (feverSymptom == "yes")) {
			cout << "You have Asthma disease." << endl;
		}
		else if ((chestPainSymptom == "no") && (breathSymptom == "no") && (coughSymptom == "yes") && (feverSymptom == "no")) {
			cout << "Sorry One symptom is not enought for ill" << endl;
		}
		else if ((chestPainSymptom == "no") && (breathSymptom == "no") && (coughSymptom == "no") && (feverSymptom == "yes")) {
			cout << "Sorry One symptom is not enought for ill" << endl;
		}

		else if ((chestPainSymptom == "no") && (breathSymptom == "yes") && (coughSymptom == "yes") && (feverSymptom == "yes")) {
			cout << "You have Kistik Fibrozis disease" << endl;
		}

		else if ((chestPainSymptom == "no") && (breathSymptom == "yes") && (coughSymptom == "yes") && (feverSymptom == "no")) {
			cout << "You might have Plevra  disease." << endl;
		}

		else if ((chestPainSymptom == "no") && (breathSymptom == "yes") && (coughSymptom == "no") && (feverSymptom == "yes")) {
			cout << "You might have Sarkoidoz disease." << endl;
		}

		else if ((chestPainSymptom == "no") && (breathSymptom == "yes") && (coughSymptom == "no") && (feverSymptom == "no")) {
			cout << "Sorry One symptom is not enought for ill" << endl;
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

	string nothingSymptom() {
		cout << "Do you have any other symptoms? (yes/no)" << endl;
		cin >> symptom;
		human::convertToLowercase(symptom);
		return symptom;
	}

	void findHeartCondition(string chestPainSymptom, string breathSymptom, string palpitationsSymptom, string fatigueSymptom, string symptom) {
		if ((chestPainSymptom == "yes") && (breathSymptom == "yes") && (palpitationsSymptom == "yes") && (fatigueSymptom == "yes")) {
			cout << "You have lung cancer" << endl;
		}

		else if ((chestPainSymptom == "yes") && (breathSymptom == "yes") && (palpitationsSymptom == "yes") && (fatigueSymptom == "no")) {
			cout << "You have Gastroözofageal Reflü disease" << endl;
		}

		else if ((chestPainSymptom == "yes") && (breathSymptom == "yes") && (palpitationsSymptom == "no") && (fatigueSymptom == "yes")) {
			cout << "You have Pnömoni disease" << endl;
		}

		else if ((chestPainSymptom == "yes") && (breathSymptom == "yes") && (palpitationsSymptom == "no") && (fatigueSymptom == "no")) {
			cout << "You have plörezi diseases" << endl;
		}
		else if ((chestPainSymptom == "yes") && (breathSymptom == "no") && (palpitationsSymptom == "yes") && (fatigueSymptom == "yes")) {
			cout << "Possible Pnomotoraks diseases" << endl;
		}
		else if ((chestPainSymptom == "yes") && (breathSymptom == "no") && (palpitationsSymptom == "yes") && (fatigueSymptom == "no")) {
			cout << "Probable KOAH." << endl;
		}
		else if ((chestPainSymptom == "yes") && (breathSymptom == "no") && (palpitationsSymptom == "no") && (fatigueSymptom == "yes")) {
			cout << "Likely pulmonary embolism." << endl;
		}
		else if ((chestPainSymptom == "yes") && (breathSymptom == "no") && (palpitationsSymptom == "no") && (fatigueSymptom == "no")) {
			cout << "Sorry One symptom is not enought for ill" << endl;
		}

		else if ((chestPainSymptom == "no") && (breathSymptom == "no") && (palpitationsSymptom == "yes") && (fatigueSymptom == "yes")) {
			cout << "You have Asthma disease." << endl;
		}
		else if ((chestPainSymptom == "no") && (breathSymptom == "no") && (palpitationsSymptom == "yes") && (fatigueSymptom == "no")) {
			cout << "Sorry One symptom is not enought for ill" << endl;
		}
		else if ((chestPainSymptom == "no") && (breathSymptom == "no") && (palpitationsSymptom == "no") && (fatigueSymptom == "yes")) {
			cout << "Sorry One symptom is not enought for ill" << endl;
		}

		else if ((chestPainSymptom == "no") && (breathSymptom == "yes") && (palpitationsSymptom == "yes") && (fatigueSymptom == "yes")) {
			cout << "You have Kistik Fibrozis disease" << endl;
		}

		else if ((chestPainSymptom == "no") && (breathSymptom == "yes") && (palpitationsSymptom == "yes") && (fatigueSymptom == "no")) {
			cout << "You might have Plevra  disease." << endl;
		}

		else if ((chestPainSymptom == "no") && (breathSymptom == "yes") && (palpitationsSymptom == "no") && (fatigueSymptom == "yes")) {
			cout << "You might have Sarkoidoz disease." << endl;
		}

		else if ((chestPainSymptom == "no") && (breathSymptom == "yes") && (palpitationsSymptom == "no") && (fatigueSymptom == "no")) {
			cout << "Sorry One symptom is not enought for ill" << endl;
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

	string nothingSymptom() {
		cout << "Do you have any other symptoms? (yes/no)" << endl;
		cin >> symptom;
		human::convertToLowercase(symptom);
		return symptom;
	}

	void findAbdominalCondition(string abdominalPainSymptom, string nauseaSymptom, string vomitingSymptom, string bloatingSymptom, string symptom) {
		if (abdominalPainSymptom == "yes" && nauseaSymptom == "yes" && vomitingSymptom == "yes" && bloatingSymptom == "yes") {
			cout << "You may have a severe gastrointestinal issue. Seek immediate medical attention." << endl;
		}
		else if (abdominalPainSymptom == "yes" && nauseaSymptom == "yes" && vomitingSymptom == "no" && bloatingSymptom == "yes") {
			cout << "Possible gastritis. Consult a gastroenterologist." << endl;
		}
		else if (abdominalPainSymptom == "no" && nauseaSymptom == "yes" && vomitingSymptom == "yes" && bloatingSymptom == "no") {
			cout << "Probable food poisoning. Consult a doctor for further evaluation." << endl;
		}
		else if (abdominalPainSymptom == "no" && nauseaSymptom == "no" && vomitingSymptom == "yes" && bloatingSymptom == "yes") {
			cout << "Likely gastroenteritis. Rest and stay hydrated." << endl;
		}
		else if (abdominalPainSymptom == "no" && nauseaSymptom == "yes" && vomitingSymptom == "no" && bloatingSymptom == "no") {
			cout << "Mild stomach upset. Monitor symptoms and seek medical advice if they persist." << endl;
		}
		else if (abdominalPainSymptom == "yes" && nauseaSymptom == "no" && vomitingSymptom == "no" && bloatingSymptom == "no") {
			cout << "Possible musculoskeletal abdominal pain. Consult a healthcare professional for evaluation." << endl;
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

class limb : public human {


};

class arms : public limb, public human {
private:
	string symptomArmPain, symptomArmSwelling, symptomArmWeakness, symptomArmNumbness, symptom;

public:
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

	string nothingSymptom() {
		cout << "Do you have any other symptoms? (yes/no)" << endl;
		cin >> symptom;
		human::convertToLowercase(symptom);
		return symptom;
	}

	void findArmCondition(string armPainSymptom, string armSwellingSymptom, string armWeaknessSymptom, string armNumbnessSymptom, string symptom) {
		if (armPainSymptom == "yes" && armSwellingSymptom == "yes" && armWeaknessSymptom == "yes" && armNumbnessSymptom == "yes") {
			cout << "You may have a serious neurological or vascular issue in your arms. Seek immediate medical attention." << endl;
		}
		else if (armPainSymptom == "yes" && armSwellingSymptom == "yes" && armWeaknessSymptom == "no" && armNumbnessSymptom == "yes") {
			cout << "Possible musculoskeletal injury in your arms. Rest and consult an orthopedic specialist if needed." << endl;
		}
		else if (armPainSymptom == "no" && armSwellingSymptom == "yes" && armWeaknessSymptom == "yes" && armNumbnessSymptom == "no") {
			cout << "Probable circulatory problem in your arms. Consult a doctor for further evaluation." << endl;
		}
		else if (armPainSymptom == "no" && armSwellingSymptom == "no" && armWeaknessSymptom == "yes" && armNumbnessSymptom == "yes") {
			cout << "Likely nerve compression in your arms. Consult a neurologist for further assessment." << endl;
		}
		else if (armPainSymptom == "no" && armSwellingSymptom == "yes" && armWeaknessSymptom == "no" && armNumbnessSymptom == "no") {
			cout << "Mild swelling in your arms. Monitor symptoms and consult a healthcare professional if needed." << endl;
		}
		else if (armPainSymptom == "yes" && armSwellingSymptom == "no" && armWeaknessSymptom == "no" && armNumbnessSymptom == "no") {
			cout << "Possible muscle strain in your arms. Rest and consult a healthcare professional if symptoms persist." << endl;
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

class hands : public limb, public human {
private:
	string symptomHandPain, symptomHandSwelling, symptomHandWeakness, symptomHandNumbness, symptom;

public:
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

	string nothingSymptom() {
		cout << "Do you have any other symptoms? (yes/no)" << endl;
		cin >> symptom;
		human::convertToLowercase(symptom);
		return symptom;
	}

	void findHandCondition(string handPainSymptom, string handSwellingSymptom, string handWeaknessSymptom, string handNumbnessSymptom, string symptom) {
		if (handPainSymptom == "yes" && handSwellingSymptom == "yes" && handWeaknessSymptom == "yes" && handNumbnessSymptom == "yes") {
			cout << "You may have a serious neurological or vascular issue in your hands. Seek immediate medical attention." << endl;
		}
		else if (handPainSymptom == "yes" && handSwellingSymptom == "yes" && handWeaknessSymptom == "no" && handNumbnessSymptom == "yes") {
			cout << "Possible musculoskeletal injury in your hands. Rest and consult an orthopedic specialist if needed." << endl;
		}
		else if (handPainSymptom == "no" && handSwellingSymptom == "yes" && handWeaknessSymptom == "yes" && handNumbnessSymptom == "no") {
			cout << "Probable circulatory problem in your hands. Consult a doctor for further evaluation." << endl;
		}
		else if (handPainSymptom == "no" && handSwellingSymptom == "no" && handWeaknessSymptom == "yes" && handNumbnessSymptom == "yes") {
			cout << "Likely nerve compression in your hands. Consult a neurologist for further assessment." << endl;
		}
		else if (handPainSymptom == "no" && handSwellingSymptom == "yes" && handWeaknessSymptom == "no" && handNumbnessSymptom == "no") {
			cout << "Mild swelling in your hands. Monitor symptoms and consult a healthcare professional if needed." << endl;
		}
		else if (handPainSymptom == "yes" && handSwellingSymptom == "no" && handWeaknessSymptom == "no" && handNumbnessSymptom == "no") {
			cout << "Possible muscle strain in your hands. Rest and consult a healthcare professional if symptoms persist." << endl;
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

class shoulders : public limb, public human {
private:
	string symptomShoulderPain, symptomShoulderSwelling, symptomShoulderWeakness, symptomShoulderNumbness, symptom;

public:
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

	string nothingSymptom() {
		cout << "Do you have any other symptoms? (yes/no)" << endl;
		cin >> symptom;
		human::convertToLowercase(symptom);
		return symptom;
	}

	void findShoulderCondition(string shoulderPainSymptom, string shoulderSwellingSymptom, string shoulderWeaknessSymptom, string shoulderNumbnessSymptom, string symptom) {
		if (shoulderPainSymptom == "yes" && shoulderSwellingSymptom == "yes" && shoulderWeaknessSymptom == "yes" && shoulderNumbnessSymptom == "yes") {
			cout << "You may have a serious neurological or vascular issue in your shoulders. Seek immediate medical attention." << endl;
		}
		else if (shoulderPainSymptom == "yes" && shoulderSwellingSymptom == "yes" && shoulderWeaknessSymptom == "no" && shoulderNumbnessSymptom == "yes") {
			cout << "Possible musculoskeletal injury in your shoulders. Rest and consult an orthopedic specialist if needed." << endl;
		}
		else if (shoulderPainSymptom == "no" && shoulderSwellingSymptom == "yes" && shoulderWeaknessSymptom == "yes" && shoulderNumbnessSymptom == "no") {
			cout << "Probable circulatory problem in your shoulders. Consult a doctor for further evaluation." << endl;
		}
		else if (shoulderPainSymptom == "no" && shoulderSwellingSymptom == "no" && shoulderWeaknessSymptom == "yes" && shoulderNumbnessSymptom == "yes") {
			cout << "Likely nerve compression in your shoulders. Consult a neurologist for further assessment." << endl;
		}
		else if (shoulderPainSymptom == "no" && shoulderSwellingSymptom == "yes" && shoulderWeaknessSymptom == "no" && shoulderNumbnessSymptom == "no") {
			cout << "Mild swelling in your shoulders. Monitor symptoms and consult a healthcare professional if needed." << endl;
		}
		else if (shoulderPainSymptom == "yes" && shoulderSwellingSymptom == "no" && shoulderWeaknessSymptom == "no" && shoulderNumbnessSymptom == "no") {
			cout << "Possible muscle strain in your shoulders. Rest and consult a healthcare professional if symptoms persist." << endl;
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

class foot : public limb, public human {
private:
	string symptomFootPain, symptomFootSwelling, symptomFootWeakness, symptomFootNumbness, symptom;

public:
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

	string nothingSymptom() {
		cout << "Do you have any other symptoms? (yes/no)" << endl;
		cin >> symptom;
		human::convertToLowercase(symptom);
		return symptom;
	}

	void findFootCondition(string footPainSymptom, string footSwellingSymptom, string footWeaknessSymptom, string footNumbnessSymptom, string symptom) {
		if (footPainSymptom == "yes" && footSwellingSymptom == "yes" && footWeaknessSymptom == "yes" && footNumbnessSymptom == "yes") {
			cout << "You may have a serious neurological or vascular issue in your feet. Seek immediate medical attention." << endl;
		}
		else if (footPainSymptom == "yes" && footSwellingSymptom == "yes" && footWeaknessSymptom == "no" && footNumbnessSymptom == "yes") {
			cout << "Possible musculoskeletal injury in your feet. Rest and consult an orthopedic specialist if needed." << endl;
		}
		else if (footPainSymptom == "no" && footSwellingSymptom == "yes" && footWeaknessSymptom == "yes" && footNumbnessSymptom == "no") {
			cout << "Probable circulatory problem in your feet. Consult a doctor for further evaluation." << endl;
		}
		else if (footPainSymptom == "no" && footSwellingSymptom == "no" && footWeaknessSymptom == "yes" && footNumbnessSymptom == "yes") {
			cout << "Likely nerve compression in your feet. Consult a neurologist for further assessment." << endl;
		}
		else if (footPainSymptom == "no" && footSwellingSymptom == "yes" && footWeaknessSymptom == "no" && footNumbnessSymptom == "no") {
			cout << "Mild swelling in your feet. Monitor symptoms and consult a healthcare professional if needed." << endl;
		}
		else if (footPainSymptom == "yes" && footSwellingSymptom == "no" && footWeaknessSymptom == "no" && footNumbnessSymptom == "no") {
			cout << "Possible muscle strain in your feet. Rest and consult a healthcare professional if symptoms persist." << endl;
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

class legs : public limb, public human {
private:
	string symptomLegPain, symptomLegSwelling, symptomLegWeakness, symptomLegNumbness, symptom;

public:
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

	string nothingSymptom() {
		cout << "Do you have any other symptoms? (yes/no)" << endl;
		cin >> symptom;
		human::convertToLowercase(symptom);
		return symptom;
	}

	void findLegCondition(string legPainSymptom, string legSwellingSymptom, string legWeaknessSymptom, string legNumbnessSymptom, string symptom) {
		if (legPainSymptom == "yes" && legSwellingSymptom == "yes" && legWeaknessSymptom == "yes" && legNumbnessSymptom == "yes") {
			cout << "You may have a serious neurological or vascular issue in your legs. Seek immediate medical attention." << endl;
		}
		else if (legPainSymptom == "yes" && legSwellingSymptom == "yes" && legWeaknessSymptom == "no" && legNumbnessSymptom == "yes") {
			cout << "Possible musculoskeletal injury in your legs. Rest and consult an orthopedic specialist if needed." << endl;
		}
		else if (legPainSymptom == "no" && legSwellingSymptom == "yes" && legWeaknessSymptom == "yes" && legNumbnessSymptom == "no") {
			cout << "Probable circulatory problem in your legs. Consult a doctor for further evaluation." << endl;
		}
		else if (legPainSymptom == "no" and legSwellingSymptom == "no" && legWeaknessSymptom == "yes" && legNumbnessSymptom == "yes") {
			cout << "Likely nerve compression in your legs. Consult a neurologist for further assessment." << endl;
		}
		else if (legPainSymptom == "no" && legSwellingSymptom == "yes" && legWeaknessSymptom == "no" && legNumbnessSymptom == "no") {
			cout << "Mild swelling in your legs. Monitor symptoms and consult a healthcare professional if needed." << endl;
		}
		else if (legPainSymptom == "yes" && legSwellingSymptom == "no" && legWeaknessSymptom == "no" && legNumbnessSymptom == "no") {
			cout << "Possible muscle strain in your legs. Rest and consult a healthcare professional if symptoms persist." << endl;
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
			for (char& ch : genderSelection) {
				ch = tolower(ch);
			}

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
			for (char& ch : habit) {
				ch = tolower(ch);
			}
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
			for (char& ch : habit) {
				ch = tolower(ch);
			}
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
			for (char& ch : habit) {
				ch = tolower(ch);
			}
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
			for (char& ch : habit) {
				ch = tolower(ch);
			}
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
