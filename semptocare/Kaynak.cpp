#include <iostream>
#include "human.h"
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");

	int choiceForMenu=0;
	bool choiceForEmergency;
	
	cout<< " Welcome to SymptoCare!"<<endl;
	
	cout<< " Do you have an emergency situation?"<<endl;
	cin>>choiceForEmergency;
	
	if(choiceForEmergency){
		//ACIL DURUM ICIN DIREK YONLENDIRME YAPALIM
	}
	else {
		while(choiceForMenu!=2){
		
		cout<< " 1.Enter Patient information"<<endl;
		cout<< " 2.Exit"<<endl;
		
		cout<< " Enter what do you want"<<endl;
		cin>> choiceForMenu;
		
		if(choiceForMenu==1){
			//HASTALARIN BILGILERINI GIRDIGI KISIM
		}
			
		}
	
		
	}

	cout<<" Bizi tercih ettiğiniz için teşekkürler."<<endl;
	
	
		
	return 0;

}
