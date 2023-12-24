
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

	void findBrainDisaster(string headache, string nausea, string seizure, string shaking, string memory, string panicAttack, string nothing) {
		if ((headache == "yes" || headache == "YES" || headache == "Yes") && (nausea == "yes" || nausea == "YES" || nausea == "Yes")) {
			cout << " you have migraine" << endl;

		}
		else if ((panicAttack == "yes" || panicAttack == "yes" || panicAttack == "yes") && (seizure == "yes" || seizure == "Yes" || seizure == "YES") && (shaking == "yes" || shaking == "Yes" || shaking == "YES")) {
			cout << " you have anxiety" << endl;
		}
		else if ((shaking == "yes" || shaking == "Yes" || shaking == "YES") && (headache == "yes" || headache == "YES" || headache == "Yes")) {
			cout << " you have parkinson" << endl;
		}

	}
};

class body : public human {

};

class chest : public body, public human {
private:
	string symptomChestPain, symptomShortnessOfBreath, symptomCough, symptomFever;

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

	void findChestDisease(string chestPainSymptom, string breathSymptom, string coughSymptom, string feverSymptom) {
		if (chestPainSymptom == "yes" && breathSymptom == "yes" && coughSymptom == "yes" && feverSymptom == "yes") {
			cout << "You may have severe pneumonia. Seek immediate medical attention." << endl;
		}
		else if (chestPainSymptom == "yes" && breathSymptom == "yes" && coughSymptom == "no" && feverSymptom == "yes") {
			cout << "Possible heart-related issue. Consult a cardiologist." << endl;
		}
		else if (chestPainSymptom == "no" && breathSymptom == "yes" && coughSymptom == "yes" && feverSymptom == "no") {
			cout << "Probable respiratory infection. Consult a doctor for further evaluation." << endl;
		}
		else if (chestPainSymptom == "no" && breathSymptom == "no" && coughSymptom == "yes" && feverSymptom == "yes") {
			cout << "Likely influenza. Rest and stay hydrated." << endl;
		}
		else if (chestPainSymptom == "no" && breathSymptom == "yes" && coughSymptom == "no" && feverSymptom == "no") {
			cout << "Mild respiratory irritation. Monitor symptoms and seek medical advice if they persist." << endl;
		}
		else if (chestPainSymptom == "yes" && breathSymptom == "no" && coughSymptom == "no" && feverSymptom == "no") {
			cout << "Possible musculoskeletal chest pain. Consult a healthcare professional for evaluation." << endl;
		}
		else {
			cout << "Unable to provide a specific diagnosis based on the given symptoms. Consult a healthcare professional." << endl;
		}
	}
};



class heart : public body, public human {
private:
	string symptomChestPain, symptomShortnessOfBreath, symptomPalpitations, symptomFatigue;

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

	void findHeartCondition(string chestPainSymptom, string breathSymptom, string palpitationsSymptom, string fatigueSymptom) {
		if (chestPainSymptom == "yes" && breathSymptom == "yes" && palpitationsSymptom == "yes" && fatigueSymptom == "yes") {
			cout << "You may have a serious heart condition. Seek immediate medical attention." << endl;
		}
		else if (chestPainSymptom == "yes" && breathSymptom == "yes" && palpitationsSymptom == "no" && fatigueSymptom == "yes") {
			cout << "Possible angina. Consult a cardiologist." << endl;
		}
		else if (chestPainSymptom == "no" && breathSymptom == "yes" && palpitationsSymptom == "yes" && fatigueSymptom == "no") {
			cout << "Probable arrhythmia. Consult a doctor for further evaluation." << endl;
		}
		else if (chestPainSymptom == "no" && breathSymptom == "no" && palpitationsSymptom == "yes" && fatigueSymptom == "yes") {
			cout << "Likely heart palpitations. Monitor symptoms and seek medical advice if they persist." << endl;
		}
		else if (chestPainSymptom == "no" && breathSymptom == "yes" && palpitationsSymptom == "no" && fatigueSymptom == "no") {
			cout << "Mild shortness of breath. Monitor symptoms and consult a healthcare professional if needed." << endl;
		}
		else if (chestPainSymptom == "yes" && breathSymptom == "no" && palpitationsSymptom == "no" && fatigueSymptom == "no") {
			cout << "Possible musculoskeletal chest pain. Consult a healthcare professional for evaluation." << endl;
		}
		else {
			cout << "Unable to provide a specific diagnosis based on the given symptoms. Consult a healthcare professional." << endl;
		}
	}

};

class abdomen : public body, public human {
private:
	string symptomAbdominalPain, symptomNausea, symptomVomiting, symptomBloating;

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

	void findAbdominalCondition(string abdominalPainSymptom, string nauseaSymptom, string vomitingSymptom, string bloatingSymptom) {
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
		else {
			cout << "Unable to provide a specific diagnosis based on the given symptoms. Consult a healthcare professional." << endl;
		}
	}

};

class limb : public human {
private:
	string symptomPain, symptomSwelling, symptomWeakness, symptomNumbness;

public:
	string limbPain() {
		cout << "Do you have limb pain? (yes/no)" << endl;
		cin >> symptomPain;
		return symptomPain;
	}

	string swelling() {
		cout << "Do you experience swelling in your limbs? (yes/no)" << endl;
		cin >> symptomSwelling;
		return symptomSwelling;
	}

	string weakness() {
		cout << "Do you have weakness in your limbs? (yes/no)" << endl;
		cin >> symptomWeakness;
		return symptomWeakness;
	}

	string numbness() {
		cout << "Do you experience numbness in your limbs? (yes/no)" << endl;
		cin >> symptomNumbness;
		return symptomNumbness;
	}

	void findLimbCondition(string painSymptom, string swellingSymptom, string weaknessSymptom, string numbnessSymptom) {
		if (painSymptom == "yes" && swellingSymptom == "yes" && weaknessSymptom == "yes" && numbnessSymptom == "yes") {
			cout << "You may have a serious neurological or vascular issue. Seek immediate medical attention." << endl;
		}
		else if (painSymptom == "yes" && swellingSymptom == "yes" && weaknessSymptom == "no" && numbnessSymptom == "yes") {
			cout << "Possible musculoskeletal injury. Rest and consult an orthopedic specialist if needed." << endl;
		}
		else if (painSymptom == "no" && swellingSymptom == "yes" && weaknessSymptom == "yes" && numbnessSymptom == "no") {
			cout << "Probable circulatory problem. Consult a doctor for further evaluation." << endl;
		}
		else if (painSymptom == "no" && swellingSymptom == "no" && weaknessSymptom == "yes" && numbnessSymptom == "yes") {
			cout << "Likely nerve compression. Consult a neurologist for further assessment." << endl;
		}
		else if (painSymptom == "no" && swellingSymptom == "yes" && weaknessSymptom == "no" && numbnessSymptom == "no") {
			cout << "Mild swelling. Monitor symptoms and consult a healthcare professional if needed." << endl;
		}
		else if (painSymptom == "yes" && swellingSymptom == "no" && weaknessSymptom == "no" && numbnessSymptom == "no") {
			cout << "Possible muscle strain. Rest and consult a healthcare professional if symptoms persist." << endl;
		}
		else {
			cout << "Unable to provide a specific diagnosis based on the given symptoms. Consult a healthcare professional." << endl;
		}
	}

};

class arms : public limb, public human {
private:
	string symptomArmPain, symptomArmSwelling, symptomArmWeakness, symptomArmNumbness;

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

	void findArmCondition(string armPainSymptom, string armSwellingSymptom, string armWeaknessSymptom, string armNumbnessSymptom) {
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
		else {
			cout << "Unable to provide a specific diagnosis based on the given arm symptoms. Consult a healthcare professional." << endl;
		}
	}

};

class hands : public limb, public human {
private:
	string symptomHandPain, symptomHandSwelling, symptomHandWeakness, symptomHandNumbness;

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

	void findHandCondition(string handPainSymptom, string handSwellingSymptom, string handWeaknessSymptom, string handNumbnessSymptom) {
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
		else {
			cout << "Unable to provide a specific diagnosis based on the given hand symptoms. Consult a healthcare professional." << endl;
		}
	}
};

class shoulders : public limb, public human {
private:
	string symptomShoulderPain, symptomShoulderSwelling, symptomShoulderWeakness, symptomShoulderNumbness;

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

	void findShoulderCondition(string shoulderPainSymptom, string shoulderSwellingSymptom, string shoulderWeaknessSymptom, string shoulderNumbnessSymptom) {
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
		else {
			cout << "Unable to provide a specific diagnosis based on the given shoulder symptoms. Consult a healthcare professional." << endl;
		}
	}

};

class foot : public limb, public human {
private:
	string symptomFootPain, symptomFootSwelling, symptomFootWeakness, symptomFootNumbness;

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

	void findFootCondition(string footPainSymptom, string footSwellingSymptom, string footWeaknessSymptom, string footNumbnessSymptom) {
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
		else {
			cout << "Unable to provide a specific diagnosis based on the given foot symptoms. Consult a healthcare professional." << endl;
		}
	}

};

class legs : public limb, public human {
private:
	string symptomLegPain, symptomLegSwelling, symptomLegWeakness, symptomLegNumbness;

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

	void findLegCondition(string legPainSymptom, string legSwellingSymptom, string legWeaknessSymptom, string legNumbnessSymptom) {
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
		else {
			cout << "Unable to provide a specific diagnosis based on the given leg symptoms. Consult a healthcare professional." << endl;
		}
	}

};


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
