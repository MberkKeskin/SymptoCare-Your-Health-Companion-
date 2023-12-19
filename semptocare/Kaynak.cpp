#include <iostream>
#include "human.h"
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");

	int choiceForMenu=0;
	bool choiceForEmengrcy;
	
	cout<< " Welcome to Semptocare!"<<endl;
	
	cout<< " Do you have emengcy stitions"<<endl;
	cin>>choiceForEmengrcy;
	
	if(choiceForEmengrcy){
		//ACIL DURUM ICIN DIREK YONLENDIRME YAPALIM
	}
	else {
		while(choiceForMenu!=2){
		
		cout<< " 1.Enter Patient infirmation"<<endl;
		cout<< " 2.Exit"<<endl;
		
		cout<< " Enter what do you want"<<endl;
		cin>> choiceForMenu;
		
		if(choiceForMenu==1){
			//HASTALARIN BILGILERINI GIRDIGI KISIM
		}
			
		}
	
		
	}

	cout<<" BIZI TERCIH ETTIGINIZ ICIN TESEKKURLER"<<endl;
	
	
		
	return 0;

}
