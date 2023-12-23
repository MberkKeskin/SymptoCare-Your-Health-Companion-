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
public:
	void arda() {
		cout << "arda";
	}
};

class mouth : public head, public human {

};

class brain : public head, public human {

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
			getline(cin,habit);
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
			getline(cin,habit);
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
			getline(cin,habit);
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
			getline(cin,habit);
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
