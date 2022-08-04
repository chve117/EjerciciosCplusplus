#include <iostream>
#include <string.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Crear una cadena que tenga la siguiente frase "Hola que tal", luego crear otra cadena para preguntar al usuario su nombre, por ultimo añadir el nombre al final de la primera cadena y mostrar el mensaje "hola que tal nomusu"
using namespace std;
int main(int argc, char** argv) {
	char cad1[]="Hola que tal ";
	char cad2[30],cad3[100];
	cout<<"Hola porfavor ingrese su nombre: "<<endl;
	cin.getline(cad2,20,'\n');
	strcpy(cad3,cad1);//Hola que tal, strcpy copia una cadena en otra
	strcat(cad3,cad2);// concatena lo que tienes en una cadena junto con otra
	cout<<cad3<<endl;
	return 0;
}
