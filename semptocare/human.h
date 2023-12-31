
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
void writeDiagnosisToFile(const string& diagnosis, const string& areaName) {
	ofstream outputFile("C:\\Dio\\diagnosis_report.txt", ios::app);
	if (outputFile.is_open()) {
		outputFile << "Our possible diagnosis is " << diagnosis << " due to your disease in the " << areaName << " Please get medical treatment as soon as possible" << endl;

		outputFile.close();
	}
	else {
		cout << "Dosyaya yazma hatası. Dosyanın açık olduğundan emin olun." << endl;
	}
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

	string nothingSymptom() {
		cout << " Do you have any other symptoms? (yes/no) " << endl;
		cin >> symptom;
		human::convertToLowercase(symptom);
		return symptom;
	}

	void writeDiagnosisToFile(const string& diagnosis, const string& areaName) {
	human::writeDiagnosisToFile(diagnosis,areaName);
	}


	void findEyeDisaster(string semptomBluredVision, string semptomeyePain, string semptomEyeSwell, string symptom) {
	string diagnosis;

	if ((semptomBluredVision == "yes") && (semptomeyePain == "yes") && (semptomEyeSwell == "yes")) {
		cout << " Please read your Health report, get well soon " << endl;
		diagnosis = "Glokom disease";
		//cout << diagnosis << endl;
		writeDiagnosisToFile(diagnosis,"Eye");
	}

	else if ((semptomBluredVision == "yes") && (semptomeyePain == "yes") && (semptomEyeSwell == "no")) {
		cout << " Please read your Health report, get well soon " << endl;
		diagnosis = "You have Hipertansif Retinopati,Üveit and Optic Retinopati disease";
		//cout << diagnosis << endl;
		writeDiagnosisToFile(diagnosis, "Eye");
	}
	else if ((semptomBluredVision == "no") && (semptomeyePain == "no") && (semptomEyeSwell == "yes")) {
		cout << " Please read your Health report, get well soon " << endl;
		diagnosis = "--HASTALIK DOLDURMAK LAZIM KESİN--";
		//cout << diagnosis << endl;
		writeDiagnosisToFile(diagnosis, "Eye");
	}
	else if ((semptomBluredVision == "no") && (semptomeyePain == "yes") && (semptomEyeSwell == "yes")) {
		cout << " Please read your Health report, get well soon " << endl;
		diagnosis = "You have Orbital Selülit,Hipertansif Retinopati and cataract disease";
		//cout << diagnosis << endl;
		writeDiagnosisToFile(diagnosis, "Eye");
	}
	else if ((semptomBluredVision == "yes") && (semptomeyePain == "no") && (semptomEyeSwell == "no")) {
		cout << " Please read your Health report, get well soon " << endl;
		diagnosis = "--HASTALIK DOLDURMAK LAZIM KESİN--";
		//cout << diagnosis << endl;
		writeDiagnosisToFile(diagnosis, "Eye");
	}
	else if ((semptomBluredVision == "yes") && (semptomeyePain == "no") && (semptomEyeSwell == "yes")) {
		cout << " Please read your Health report, get well soon " << endl;
		diagnosis = " You have Üveit,Konjonktivit and Optic Norit disease";
		//cout << diagnosis << endl;
		writeDiagnosisToFile(diagnosis, "Eye");
	}
	else if ((semptomBluredVision == "no") && (semptomeyePain == "yes") && (semptomEyeSwell == "no")) {
		cout << " Please read your Health report, get well soon " << endl;
		diagnosis = " --HASTALIK DOLDURMAK LAZIM KESİN--";
		//cout << diagnosis << endl;
		writeDiagnosisToFile(diagnosis, "Eye");
	}
	else if (symptom == "yes") {
		cout << " Please read your Health report, get well soon " << endl;
		diagnosis = " --HASTALIK DOLDURMAK LAZIM KESİN--";
		//cout << diagnosis << endl;
		writeDiagnosisToFile(diagnosis, "Eye");
	}
	else if (symptom == "no") {
		cout << "Please enter true department. Eye department might be the wrong department for you." << endl;
	}
	
	else {
		cout << "Please enter only yes/no. Thank you. " << endl;

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

	string nothingSymptom() {
		cout << " Do you have other Symptoms ? (yes/no) " << endl;
		cin >> symptom;
		human::convertToLowercase(symptom);
		return symptom;
	}

	void findMouthDisaster(string semptomTasteDisaster, string semptomBleddingTeeth, string semptomToothLose, string semptomDryness, string symptomCankerSores, string symptom) {

		if ((semptomTasteDisaster == "yes") && (semptomBleddingTeeth == "yes") && (symptomCankerSores == "yes") && (semptomDryness == "yes") ) {
			cout << "hasta yeriniz:" << bodyPart << endl;
			cout << "You have tongue cancer" << endl;
		}

		else if ((semptomTasteDisaster == "yes") && (semptomBleddingTeeth == "yes") && (semptomDryness == "yes") && (symptomCankerSores == "no")) {
			cout << "hasta yeriniz:" << bodyPart << endl;
			cout << "You have Gingival Bleeding,Periodontal Disease and Periodontal disease" << endl;
		}


		else if ((semptomTasteDisaster == "yes") && (semptomBleddingTeeth == "yes") && (semptomDryness == "no") && (symptomCankerSores == "no")) {
			cout << "hasta yeriniz:" << bodyPart << endl;
			cout << "You have Periodontal Disease,Taste Disorder,Xerostomia,Caries,Oral Hygiene Problems and Xerostomia disease" << endl;
		}
		else if ((semptomTasteDisaster == "yes") && (semptomBleddingTeeth == "no") && (semptomDryness == "no") && (symptomCankerSores == "no")) {
			cout << "hasta yeriniz:" << bodyPart << endl;
			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
		}
		else if ((semptomTasteDisaster == "no") && (semptomBleddingTeeth == "yes") && (semptomDryness == "no") && (symptomCankerSores == "no")) {
			cout << "hasta yeriniz:" << bodyPart << endl;
			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
		}
		else if ((semptomTasteDisaster == "no") && (semptomBleddingTeeth == "no") && (semptomDryness == "yes") && (symptomCankerSores == "no"))) {
			cout << "hasta yeriniz:" << bodyPart << endl;
			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
		}
		else if ((semptomTasteDisaster == "no") && (semptomBleddingTeeth == "no") && (semptomDryness == "no") && (symptomCankerSores == "yes")) {
			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
		}
		
		else if ((semptomTasteDisaster == "no") && (semptomBleddingTeeth == "yes") && (semptomDryness == "yes") && (symptomCankerSores == "yes")) {
			cout << "You have Canker Sores,Xerostomia, Periodontal disease and  Gum disease" << endl;
		}
		else if ((semptomTasteDisaster == "no") && (semptomBleddingTeeth == "no") && (semptomDryness == "yes") && (symptomCankerSores == "yes")) {
			cout << "You have Xerostomia,Gingival Bleeding,Gum Diseases and Periodontal disease" << endl;
		}
		
		else if ((semptomTasteDisaster == "yes") && (semptomBleddingTeeth == "no") && (semptomDryness == "yes") && (symptomCankerSores == "yes") ) {
			cout << "You have Taste Disorder,Dryness,Canker Sores or Oral Lichen Planus" << endl;
		}
		else if ((semptomTasteDisaster == "yes") && (semptomBleddingTeeth == "yes") && (semptomDryness == "no") && (symptomCankerSores == "yes") ) {
			cout << "You have  Bleeding Teeth,Taste Disorder,Gingival Bleeding or mouth condition disease" << endl;
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

		else if ((headache == "no") && (seizures == "yes") && (memoryLoss == "yes") && (panicAttack == "no")) {
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

	string nothingSymptom() {
		cout << "Do you have any other symptoms? (yes/no)" << endl;
		cin >> symptom;
		human::convertToLowercase(symptom);
		return symptom;
	}

	void findHeartCondition(string chestPainSymptom, string breathSymptom, string palpitationsSymptom, string fatigueSymptom, string symptom) {
		if ((chestPainSymptom == "yes") && (breathSymptom == "yes") && (palpitationsSymptom == "yes") && (fatigueSymptom == "yes")) {
			cout << "You have Myocardial Infarction " << endl;
		}

		else if ((chestPainSymptom == "yes") && (breathSymptom == "yes") && (palpitationsSymptom == "yes") && (fatigueSymptom == "no")) {
			cout << "You have Angina Pektoris disease,Heart failure,Myokarit disase or Aritmiler  disease" << endl;
		}

		else if ((chestPainSymptom == "yes") && (breathSymptom == "yes") && (palpitationsSymptom == "no") && (fatigueSymptom == "yes")) {
			cout << "You have Myokardit disease,Anjina Pektoris,Aortic Stenosis or Coronary Artery Disease" << endl;
		}

		else if ((chestPainSymptom == "yes") && (breathSymptom == "yes") && (palpitationsSymptom == "no") && (fatigueSymptom == "no")) {
			cout << "You have likely  Perikardit ,Pulmoner Emboli, Angina Pektoris,Heart Valve Diseases or Heart failure diseases" << endl;
		}
		else if ((chestPainSymptom == "yes") && (breathSymptom == "no") && (palpitationsSymptom == "yes") && (fatigueSymptom == "yes")) {
			cout << "Possible Angina Pektoris,Aritmiler,Heart Valve Diseases or Myokardit diseases" << endl;
		}
		else if ((chestPainSymptom == "yes") && (breathSymptom == "no") && (palpitationsSymptom == "yes") && (fatigueSymptom == "no")) {
			cout << "Probable Pulmoner Hipertansiyon,Perikardit,Myocardial Infarction ,Anjina Pektoris or Heart failure" << endl;
		}
		else if ((chestPainSymptom == "yes") && (breathSymptom == "no") && (palpitationsSymptom == "no") && (fatigueSymptom == "yes")) {
			cout << "Likely pulmonary embolism,Anjina Pektoris,Myocardial Infarction,Coronary Artery Disease or Kardiyomiyopati." << endl;
		}
		else if ((chestPainSymptom == "yes") && (breathSymptom == "no") && (palpitationsSymptom == "no") && (fatigueSymptom == "no")) {
			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
		}

		else if ((chestPainSymptom == "no") && (breathSymptom == "no") && (palpitationsSymptom == "yes") && (fatigueSymptom == "yes")) {
			cout << "You have Kardiyomiyopati,Hipertansiyon,Aritmiler,Heart failure or Heart Valve Diseases ." << endl;
		}
		else if ((chestPainSymptom == "no") && (breathSymptom == "no") && (palpitationsSymptom == "yes") && (fatigueSymptom == "no")) {
			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
		}
		else if ((chestPainSymptom == "no") && (breathSymptom == "no") && (palpitationsSymptom == "no") && (fatigueSymptom == "yes")) {
			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
		}

		else if ((chestPainSymptom == "no") && (breathSymptom == "yes") && (palpitationsSymptom == "yes") && (fatigueSymptom == "yes")) {
			cout << "You have Coronary Artery Disease,Aritmiler,Myocardial Infarction or Anjina Pektori disease" << endl;
		}

		else if ((chestPainSymptom == "no") && (breathSymptom == "yes") && (palpitationsSymptom == "yes") && (fatigueSymptom == "no")) {
			cout << "You might have Coronary Artery Disease,Aritmiler,Heart Valve Diseases,Heaart Faiulre or Myokardit disease." << endl;
		}

		else if ((chestPainSymptom == "no") && (breathSymptom == "yes") && (palpitationsSymptom == "no") && (fatigueSymptom == "yes")) {
			cout << "You might have Kardiyomiyopati,Aortic Regurgitation,Coronary Artery Disease,Heart Failure or Heart Valve Diseases." << endl; 
		}

		else if ((chestPainSymptom == "no") && (breathSymptom == "yes") && (palpitationsSymptom == "no") && (fatigueSymptom == "no")) {
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

	string nothingSymptom() {
		cout << "Do you have any other symptoms? (yes/no)" << endl;
		cin >> symptom;
		human::convertToLowercase(symptom);
		return symptom;
	}

	void findAbdominalCondition(string abdominalPainSymptom, string nauseaSymptom, string vomitingSymptom, string bloatingSymptom, string symptom) {
		
		if ((abdominalPainSymptom == "yes") && (nauseaSymptom == "yes") && (vomitingSymptom == "yes") && (bloatingSymptom == "yes")) {
			cout << "You have Myocardial Infarction " << endl;
		}

		else if ((abdominalPainSymptom == "yes") && (nauseaSymptom == "yes") && (vomitingSymptom == "yes") && (bloatingSymptom == "no")) {
			cout << "You have Gastroenterit  disease" << endl;
		}

		else if ((abdominalPainSymptom == "yes") && (nauseaSymptom == "yes") && (vomitingSymptom == "no") && (bloatingSymptom == "yes")) {
			cout << "You have Gastroenterit,Irritable Bowel Syndrome,Peptik Ülser or Gastroözofageal Reflü Disease" << endl;
		}

		else if ((abdominalPainSymptom == "yes") && (nauseaSymptom == "yes") && (vomitingSymptom == "no") && (bloatingSymptom == "no")) {
			cout << "You have likely  Gastroenterit,Peptik Ülser,Irritable Bowel Syndrome,Peptik Ülser or Gastroözofageal Reflü diseases" << endl;
		}
		else if ((abdominalPainSymptom == "yes") && (nauseaSymptom == "no") && (vomitingSymptom == "yes") && (bloatingSymptom == "yes")) {
			cout << "Possible Angina Pektoris,Aritmiler,Heart Valve Diseases or Myokardit diseases" << endl;
		}
		else if ((abdominalPainSymptom == "yes") && (nauseaSymptom == "no") && (vomitingSymptom == "yes") && (bloatingSymptom == "no")) {
			cout << "Probable Pulmoner Hipertansiyon,Perikardit,Myocardial Infarction ,Anjina Pektoris or Heart failure" << endl;
		}
		else if ((abdominalPainSymptom == "yes") && (nauseaSymptom == "no") && (vomitingSymptom == "no") && (bloatingSymptom == "yes")) {
			cout << "Likely pulmonary embolism,Anjina Pektoris,Myocardial Infarction,Coronary Artery Disease or Kardiyomiyopati." << endl;
		}
		else if ((abdominalPainSymptom == "yes") && (nauseaSymptom == "no") && (vomitingSymptom == "no") && (bloatingSymptom == "no")) {
			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
		}

		else if ((abdominalPainSymptom == "no") && (nauseaSymptom == "no") && (vomitingSymptom == "yes") && (bloatingSymptom == "yes")) {
			cout << "You have Kardiyomiyopati,Hipertansiyon,Aritmiler,Heart failure or Heart Valve Diseases ." << endl;
		}
		else if ((abdominalPainSymptom == "no") && (nauseaSymptom == "no") && (vomitingSymptom == "yes") && (bloatingSymptom == "no")) {
			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
		}
		else if ((abdominalPainSymptom == "no") && (nauseaSymptom == "no") && (vomitingSymptom == "no") && (bloatingSymptom == "yes")) {
			cout << "Sorry! One symptom is not enough for diagnosis. Please consult a healthcare professional" << endl;
		}

		else if ((abdominalPainSymptom == "no") && (nauseaSymptom == "yes") && (vomitingSymptom == "yes") && (bloatingSymptom == "yes")) {
			cout << "You have Coronary Artery Disease,Aritmiler,Myocardial Infarction or Anjina Pektori disease" << endl;
		}

		else if ((abdominalPainSymptom == "no") && (nauseaSymptom == "yes") && (vomitingSymptom == "yes") && (bloatingSymptom == "no")) {
			cout << "You might have Coronary Artery Disease,Aritmiler,Heart Valve Diseases,Heaart Faiulre or Myokardit disease." << endl;
		}

		else if ((abdominalPainSymptom == "no") && (nauseaSymptom == "yes") && (vomitingSymptom == "no") && (bloatingSymptom == "yes")) {
			cout << "You might have Kardiyomiyopati,Aortic Regurgitation,Coronary Artery Disease,Heart Failure or Heart Valve Diseases." << endl; 
		}

		else if ((abdominalPainSymptom == "no") && (nauseaSymptom == "yes") && (vomitingSymptom == "no") && (bloatingSymptom == "no")) {
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
        else if (armPainSymptom == "yes" && armSwellingSymptom == "no" && armWeaknessSymptom == "no" && armNumbnessSymptom == "yes") {
            cout << "You may suffer from ,Radial Nerve Compression: Compression of the radial nerve on the inner part of the arm can lead to pain and numbness." << endl;
        }
        else if (armPainSymptom == "no" && armSwellingSymptom == "no" && armWeaknessSymptom == "no" && armNumbnessSymptom == "no") {
            cout <<" If you are not experiencing symptoms such as arm pain, swelling, weakness, and numbness, it can generally be said that you are healthy. The absence of these symptoms may indicate a condition outside various diseases or conditions. However, to maintain your health and prevent diseases, it is important to undergo regular medical check-ups, adopt a balanced dietary habit, and maintain an active lifestyle. Not having these symptoms generally suggests a state of well-being. Nevertheless, if you have any health concerns, it is important to consult with a healthcare professional who can assess your overall health and provide necessary guidance." << endl;
        }
        else if (armPainSymptom == "no" && armSwellingSymptom == "no" && armWeaknessSymptom == "no" && armNumbnessSymptom == "yes") {
            cout
                    << "You may have ,Neuropathy: A condition arising from nerve damage. This condition can lead to arm pain and numbness"
                    << endl;
        }
        else if (armPainSymptom == "no" && armSwellingSymptom == "yes" && armWeaknessSymptom == "no" && armNumbnessSymptom == "yes") {
            cout <<"These symptoms can arise from various conditions. Arm swelling is typically associated with circulation problems, infections, or other inflammatory conditions. Arm numbness, on the other hand, may result from issues in the nervous system, nerve compression, or other neurological problems."<<endl;
        }
        else if (armPainSymptom == "yes" && armSwellingSymptom == "yes" && armWeaknessSymptom == "no" && armNumbnessSymptom == "no") {
            cout << "Injuries, infections, inflammatory conditions, or circulatory problems can trigger these symptoms."<<endl;

        }
        else if (armPainSymptom == "yes" && armSwellingSymptom == "no" && armWeaknessSymptom == "yes" && armNumbnessSymptom == "yes") {
            cout << "Pain, weakness, and numbness in the arm may arise from a problem in the nerves or be associated with the compression of a specific nerve in the region."<<endl;

        }
        else if (armPainSymptom == "yes" && armSwellingSymptom == "no" && armWeaknessSymptom == "yes" && armNumbnessSymptom == "no") {
            cout << "Tendon injury or another musculoskeletal issue may be possible."<<endl;

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
        else if (handPainSymptom == "yes" && handSwellingSymptom == "yes" && handWeaknessSymptom == "yes" && handNumbnessSymptom == "no") {
            cout << "The presence of pain, swelling, and weakness in the hand without numbness may suggest various musculoskeletal or inflammatory conditions. Conditions such as arthritis, tendonitis, or other inflammatory disorders could be considered." << endl;
        }
        else if (handPainSymptom == "yes" && handSwellingSymptom == "yes" && handWeaknessSymptom == "no" && handNumbnessSymptom == "no") {
            cout << "The presence of hand pain and swelling without weakness or numbness may suggest various conditions, including inflammatory or traumatic causes. Inflammatory conditions like arthritis or injuries such as sprains or strains could be considered." << endl;
        }
        else if (handPainSymptom == "yes" && handSwellingSymptom == "no" && handWeaknessSymptom == "yes" && handNumbnessSymptom == "yes") {
            cout << "The presence of hand pain, weakness, and numbness without swelling may suggest various neurological or musculoskeletal issues. Conditions such as nerve compression, carpal tunnel syndrome, or other neurological disorders could be considered." << endl;
        }
        else if (handPainSymptom == "yes" && handSwellingSymptom == "no" && handWeaknessSymptom == "yes" && handNumbnessSymptom == "no") {
            cout << "The presence of hand pain and weakness without swelling or numbness may suggest various musculoskeletal or neurological issues. Conditions such as muscle strain, tendonitis, or nerve compression could be considered."<<endl;


        }
        else if (handPainSymptom == "yes" && handSwellingSymptom == "no" && handWeaknessSymptom == "no" && handNumbnessSymptom == "yes") {
            cout << "The presence of hand pain and numbness without swelling or weakness may suggest various neurological or circulatory issues. Conditions such as nerve compression, peripheral neuropathy, or circulatory problems could be considered." << endl;
        }
        else if (handPainSymptom == "no" && handSwellingSymptom == "yes" && handWeaknessSymptom == "yes" && handNumbnessSymptom == "yes") {
            cout << "The presence of hand swelling, weakness, and numbness without pain may suggest various neurological, musculoskeletal, or vascular issues. Conditions such as nerve compression, peripheral neuropathy, or vascular disorders could be considered." << endl;
        }
        else if (handPainSymptom == "no" && handSwellingSymptom == "yes" && handWeaknessSymptom == "yes" && handNumbnessSymptom == "no") {
            cout << "The presence of hand swelling and weakness without pain or numbness may suggest various musculoskeletal or neurological issues. Conditions such as muscle strain, tendonitis, or nerve compression could be considered." << endl;
        }
        else if (handPainSymptom == "no" && handSwellingSymptom == "yes" && handWeaknessSymptom == "no" && handNumbnessSymptom == "yes") {
            cout << "The presence of hand swelling and numbness without pain or weakness may suggest various musculoskeletal or neurological issues. Conditions such as nerve compression, peripheral neuropathy, or other neurological disorders could be considered." << endl;
        }
        else if (handPainSymptom == "no" && handSwellingSymptom == "yes" && handWeaknessSymptom == "no" && handNumbnessSymptom == "no") {
            cout << "The presence of hand swelling without pain, weakness, or numbness may suggest various musculoskeletal or circulatory issues. Conditions such as localized inflammation, fluid retention, or vascular problems could be considered." << endl;
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
	string name,nameForReturn, habitForCigarette, habitForAlcol, habitForAlergic,habitForMedicane , genderSelection, smoking, drinking, allergic, medication,gender;
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
