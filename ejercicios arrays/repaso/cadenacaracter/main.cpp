#include <iostream>
#include <conio.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	char palabra[20];
	int longitud=0;
	
	cout<<"Digite una cadena mayor a diez para que sea impresa: "<<endl;
	cin.getline(palabra,20,'\n');//lectura de la cadena (variable, longitud, espacio)
	longitud=strlen(palabra);//strlen funcion que devuelve un entero con la longitud de la cadena
    cout<<"Su longitud es: "<<longitud<<endl;//imprimimos la longitud
    if(longitud>10){//condicion de impresion para cadenas mayores a 10
	cout<<palabra<<endl;
     }else{
     	cout<<"la longitud de su cadena debe ser mayor a 10"<<endl;
	 }
	getch();
	return 0;
}
