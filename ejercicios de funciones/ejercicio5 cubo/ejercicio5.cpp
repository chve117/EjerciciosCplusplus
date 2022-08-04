#include <iostream>
using namespace std;
//Hacer un programa en C++ que calcule el cubo de un número.
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int cubo(int);

int main(int argc, char** argv) {
	int base;
	char opc;
	cout<<"ingrese la operacion"<<endl;cin>>opc;
	cout<<"ingrese la base: "<<endl;cin>>base;
	while(opc!='c'){
	switch(opc){
	
	 case 'a':cubo(base);
	break;
	 case 'b':cuadrado(base);
		break;
	return 0;}
}
}

int cubo(int base){
	return base*base*base;
}

int cuadrado(int basex){
	return base*base;
}
