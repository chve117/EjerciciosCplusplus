#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Hacer un programa en C++ que permita al usuario elegir calcular el area de figuras geometricas como: circulo, cuadrado, rectangulo, triangulo.
void areadelcirculo(void);
void areadelcuadrado(void);
void areadelrectangulo(void);
void areadeltriangulo(void);

const float pi= 3.14;

int main(int argc, char** argv) {
	char opcion;
	
	cout<<"opciones (a)circulo,(b)cuadrado,(c)rectangulo,(d)triangulo,(e)salir "<<endl;
	cout<<"indique la funcion a realizar: "<<endl;cin>>opcion;
    while(opcion != 'e'){
	switch(opcion){
		case 'a':areadelcirculo();
		system("pause");
		system("cls");
		break;
		case 'b':areadelcuadrado();
		system("pause");
		system("cls");
		break;
		case 'c':areadelrectangulo();
		system("pause");
		system("cls");
		break;
		case 'd':areadeltriangulo();
		system("pause");
		system("cls");
		break;
}
}
cout<<"se acabo el programa"<<endl;
}

void mostrararea(float area){
	cout<<"el area es: "<<area<<endl;
}

void areadelcirculo(void){
	float radio, area=0;
	cout<<"ingrese el radio: "<<endl;cin>>radio;
	area= pow(radio,2)*pi;
	mostrararea(area);
	return;	
}

void areadelcuadrado(void){
	float lado, area=0;
	cout<<"ingrese el lado: "<<endl;cin>>lado;
	area= lado*lado;
	mostrararea(area);
	return;	
}

void areadeltriangulo(void){
	float base,altura, area=0;
	cout<<"ingrese la base: "<<endl;cin>>base;
	cout<<"ingrese la altura: "<<endl;cin>>altura;
	area= (base*altura)/2;
	mostrararea(area);
	return;	
}

void areadelrectangulo(void){
	float base,altura, area=0;
	cout<<"ingrese el base: "<<endl;cin>>base;
	cout<<"ingrese el altura: "<<endl;cin>>altura;
	area= base*altura;
	mostrararea(area);
	return;	
}

