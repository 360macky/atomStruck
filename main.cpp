#include <iostream>
#include "start.cpp"
#include "elements.cpp"

using namespace std;

int o = 5, color = 1;

int main(){
	
	// Window title
	system("title AtomStruck");

	float version = 0.3;
	
	// ASCII Art for software title
	start_software();

	cout <<"\n\n";

	while (element!=0){
			// Color for showing chemical elements
			if (element % 2 == 0)
			{
				system("color B");
			}
			else
			{
				system("color D");
			}

			// Clean window
			system("cls");

			// Print an atom
			cout << " \\ /\\ /\n";
			if (element < 10) {
				cout << " < () >  \n";
			}else if(element < 20) {
				cout << " < ++ >  \n";
			}else if(element < 30) {
				cout << " < XX >  \n";
			}else if(element < 40) {
				cout << " > OO <  \n";
			}else if(element < 60) {
				cout << " < == >  \n";
			}else if(element < 80) {
				cout << " > -- <  \n";
			}else if(element < 100) {
				cout << " < .. >  \n";
			}else{
				cout << " < ## >  \n";
			}
			cout << " / \\/ \\";

	cout << "Digite el numero del elemento quimico:\t";
	cin >> element;
	findElement();

	cout <<"// Digite el numero del siguiente elemento.\nSi deseas salir solo digita '0':\t";
	cin>> element;
	}

	cout<< line << "\natomStruck Version Beta\nDesarrollado por 360macky\n\n\n\n";
	
	cout << "Version " << version;

	system("pause");
	return 0;
}
