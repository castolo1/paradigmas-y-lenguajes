#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <iomanip>
#include <sstream>
#include <iterator>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <vector>
#include <ostream>
using namespace std;

//separo todas las cadenas donde se encuentre un espacio y devuelvo un vector con estas
vector<string> separarCadenas(string cadena){
	vector<string> resultado;
	istringstream isstream(cadena);
	string palabra;
	
	while(isstream >> palabra){
		resultado.push_back(palabra);
	}
	
	return resultado;
}
	
bool id(string cadena){
	char aux[];
	bool resultado;
	
	if('a' or 'b' or 'c' or 'd' or 'e' or 'f' or 'g' or 'h' or 'i' or 'j' or 'k' or 'l' or 'm' or 'n' or 'o' or 'p' or 'q'
	   or 'r' or 's' or 't' or 'u' or 'v' or 'w' or 'x' or 'y' or 'z' or 'A' or 'B' or 'C' or 'D' or 'E' or 'F' or 'G' or 
	   'H' or 'I' or 'J' or 'K' or 'L' or 'M' or 'N' or 'S' or 'T' or 'U' or 'V' or 'W' or 'X' or 'Y' or 'Z' or '_'){
		
	}
	
	return resultado;
}

int main(int argc, char *argv[]) {
	string delimitador = " ";
	ifstream archivo;
	string temporario, texto="";
	vector<string> cadenas;

	archivo.open("archivo.txt", ios::in);
	if(archivo.fail())
	{
		cout<<"error al abrir el archivo"<<endl;
		exit(0);
	}
	if(archivo.is_open()){
		while(!archivo.eof()){
			getline(archivo, temporario);
			texto = texto + " " + temporario;
		}
		
		/*while (archivo.get(cant)) {
			cadenas.push_back(cant);
		}
		for (const auto &i : cadenas) {
			if
			cout << i << "-";
		}*/
	}
	archivo.close();
	
	cadenas=separarCadenas(texto);
	for (size_t i=0 ; i<cadenas.size() ; i++){
	string cad = cadenas[i];
	cout<<cad<<"/";
	//id(cad);
	}
	

	
	return 0;
}




