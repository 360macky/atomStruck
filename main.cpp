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
