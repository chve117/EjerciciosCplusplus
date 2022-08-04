#include <iostream>
#include <conio.h>
#include <string.h>
//Pedir al usuario una cadena de caracteres, almacenarla en un arreglo y copiar todo su contenido hacia otro arreglo de caracteres
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	char nombre[20],nombre2[20];
	cout<<"Ingrese su cadena: "<<endl;
	cin.getline(nombre,20,'\n');
	strcpy(nombre2,nombre);//funcion que copia lo que tiene una cadena a otra
	cout<<nombre2<<endl;
	return 0;
}
