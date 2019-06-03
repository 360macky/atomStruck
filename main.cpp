#include<iostream>

using namespace std;

int main(){
	system("title AtomStruck");
	cout <<"Hola. Bienvenidos a AtomStruck.\n\n";

	// Well, it's my first file on GitHub.
	//I know it's very short and basic, but I'll start updating it little by little.

cout<"\n\n";

/*

     _   _                  ____  _                   _
    / \ | |_ ___  _ __ ___ / ___|| |_ _ __ _   _  ___| | __
   / _ \| __/ _ \| '_ ` _ \\___ \| __| '__| | | |/ __| |/ /
  / ___ \ || (_) | | | | | |___) | |_| |  | |_| | (__|   <
 /_/   \_\__\___/|_| |_| |_|____/ \__|_|   \__,_|\___|_|\_\



*/

	int element, o = 5, color = 1;
	string isit = ">>> El elemento es ", isSymbol = " su simbolo es ", line = "\n------------------------------------------------------------";
	string p1 = ">>> Se encuentra en el primer periodo";
	string p2 = ">>> Se encuentra en el segundo periodo";
	string p3 = ">>> Se encuentra en el tercer periodo";
	string p4 = ">>> Se encuentra en el cuarto periodo";
	string p5 = ">>> Se encuentra en el quinto periodo";
	string p6 = ">>> Se encuentra en el sexto periodo";
	string p7 = ">>> Se encuentra en el septimo periodo";

	cout <<"Digite el numero del elemento quimico:\t";
	cin>> element;


	while (element!=0){
			// Color predeterminado
			system("color 1B");
			// Limpieza de la pantalla
			system("cls");

	switch (element){

		//Hey, this only have 21 elements :( I know I know
		case 1: cout << line <<"\n" << isit << "HIDROGENO"
		<< isSymbol << "H\n" << p1 << line << "\n\n";
		break;
		case 2: cout << line <<"\n" << isit << "HELIO"
		<< isSymbol << "He\n" << p1 << line << "\n\n";
		break;
		case 3: cout << line <<"\n" << isit << "LITIO"
		<< isSymbol << "Li\n" <<  p2 << line << "\n\n";
		break;
		case 4: cout << line <<"\n" << isit << "BERILIO"
		<< isSymbol << "Be\n" << p2 << line << "\n\n";
		break;
		case 5: cout << line <<"\n" << isit << "BORO"
		<< isSymbol << "B\n" << p2 << line << "\n\n";
		break;
		case 6: cout << line <<"\n" << isit << "CARBONO"
		<< isSymbol << "C\n" << p2 << line << "\n\n";
		break;
		case 7: cout << line <<"\n" << isit << "NITROGENO"
		<< isSymbol << "N\n" << p2 << line << "\n\n";
		break;
		case 8: cout << line <<"\n" << isit << "OXIGENO"
		<< isSymbol << "O\n" << p2 << line << "\n\n";
		break;
		case 9: cout << line <<"\n" << isit << "FLUOR"
		<< isSymbol << "F\n" << p2 << line << "\n\n";
		break;
		case 10: cout << line <<"\n" << isit << "NEON"
		<< isSymbol << "Ne\n" << p2 << line << "\n\n";
		break;
		case 11: cout << line <<"\n" << isit << "SODIO"
		<< isSymbol << "Na\n" << p3 << line << "\n\n";
		break;
		case 12: cout << line <<"\n" << isit << "MAGNESIO"
		<< isSymbol << "Mg\n" << p3 << line << "\n\n";
		break;
		case 13: cout << line <<"\n" << isit << "ALUMINIO"
		<< isSymbol << "Al\n" << p3 << line << "\n\n";
		break;
		case 14: cout << line <<"\n" << isit << "SILICIO"
		<< isSymbol << "Si\n" << p3 << line << "\n\n";
		break;
		case 15: cout << line <<"\n" << isit << "FOSFORO"
		<< isSymbol << "P\n" << p3 << line << "\n\n";
		break;
		case 16: cout << line <<"\n" << isit << "AZUFRE"
		<< isSymbol << "S\n" << p3 << line << "\n\n";
		break;
		case 17: cout << line <<"\n" << isit << "CLORO"
		<< isSymbol << "Cl\n" << p3 << line << "\n\n";
		break;
		case 18: cout << line <<"\n" << isit << "ARGON"
		<< isSymbol << "Ar\n" << p3 << line << "\n\n";
		break;
		case 19: cout << line <<"\n" << isit << "POTASIO"
		<< isSymbol << "K\n" << p4 << line << "\n\n";
		break;
		case 20: cout << line <<"\n" << isit << "CALCIO"
		<< isSymbol << "Ca\n" << p4 << line << "\n\n";
		break;
		case 21: cout << line <<"\n" << isit << "ESCANDIO"
		<< isSymbol << "Sc\n" << p4 << line << "\n\n";
		break;
		case 22: cout << line <<"\n" << isit << "TITANIO"
		<< isSymbol << "Ti\n" << p4 << line << "\n\n";
		break;
		case 23: cout << line <<"\n" << isit << "VANADIO"
		<< isSymbol << "V\n" << p4 << line << "\n\n";
		break;
		case 24: cout << line <<"\n" << isit << "CROMO"
		<< isSymbol << "Cr\n" << p4 << line << "\n\n";
		break;
		case 25: cout << line <<"\n" << isit << "MANGANESO"
		<< isSymbol << "Mg\n" << p4 << line << "\n\n";
		break;
		case 26: cout << line <<"\n" << isit << "HIERRO"
		<< isSymbol << "Fe\n" << p4 << line << "\n\n";
		break;
		case 27: cout << line <<"\n" << isit << "COBALTO"
		<< isSymbol << "Co\n" << p4 << line << "\n\n";
		break;
		case 28: cout << line <<"\n" << isit << "NIQUEL"
		<< isSymbol << "Ni\n" << p4 << line << "\n\n";
		break;
		case 29: cout << line <<"\n" << isit << "COBRE"
		<< isSymbol << "Cu\n" << p4 << line << "\n\n";
		break;
		case 30: cout << line <<"\n" << isit << "ZINC"
		<< isSymbol << "Zn\n" << p4 << line << "\n\n";
		break;
		case 31: cout << line <<"\n" << isit << "GALIO"
		<< isSymbol << "Ga\n" << p4 << line << "\n\n";
		break;
		case 32: cout << line <<"\n" << isit << "GERMANIO"
		<< isSymbol << "Ge\n" << p4 << line << "\n\n";
		break;
		case 33: cout << line <<"\n" << isit << "ARSENICO"
		<< isSymbol << "As\n" << p4 << line << "\n\n";
		break;
		case 34: cout << line <<"\n" << isit << "SELENIO"
		<< isSymbol << "Se\n" << p4 << line << "\n\n";
		break;
		case 35: cout << line <<"\n" << isit << "BROMO"
		<< isSymbol << "Br\n" << p4 << line << "\n\n";
		break;
		case 36: cout << line <<"\n" << isit << "KRIPTON"
		<< isSymbol << "Kr\n" << p4 << line << "\n\n";
		break;
		case 37: cout << line <<"\n" << isit << "RUBIDIO"
		<< isSymbol << "Kr\n" << p5 << line << "\n\n";
		break;
		case 38: cout << line <<"\n" << isit << "ESTRONCIO"
		<< isSymbol << "Sr\n" << p5 << line << "\n\n";
		break;
		case 39: cout << line <<"\n" << isit << "ITRIO"
		<< isSymbol << "Y\n" << p5 << line << "\n\n";
		break;
		case 40: cout << line <<"\n" << isit << "ZIRCONIO"
		<< isSymbol << "Zr\n" << p5 << line << "\n\n";
		break;
		case 41: cout << line <<"\n" << isit << "NIOBIO"
		<< isSymbol << "Zr\n" << p5 << line << "\n\n";
		break;
		case 42: cout << line <<"\n" << isit << "MOLIBDENO"
		<< isSymbol << "Zr\n" << p5 << line << "\n\n";
		break;
		case 43: cout << line <<"\n" << isit << "TECNECIO"
		<< isSymbol << "Tc\n" << p5 << line << "\n\n";
		break;
		case 44: cout << line <<"\n" << isit << "RUTENIO"
		<< isSymbol << "Ru\n" << p5 << line << "\n\n";
		break;
		case 45: cout << line <<"\n" << isit << "RODIO"
		<< isSymbol << "Rh\n" << p5 << line << "\n\n";
		break;
		case 46: cout << line <<"\n" << isit << "PALADIO"
		<< isSymbol << "Pd\n" << p5 << line << "\n\n";
		break;
	default:
		cout <<"\nEl elemento no fue encontrado :(\n\n";
	}

	cout <<"// Digite el numero del siguiente elemento.\nSi deseas salir solo digita '0':\t";
	cin>> element;


	}

	cout<< line << "\nAtomStruck Version Beta\nDesarrollado por 360macky\n\n\n\n";
	return 0;
}
