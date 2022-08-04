#include <iostream>
#include <conio.h>
#include <string.h>
//Pedir al usuario 2 cadenas e indicar si ambas son iguales, en caso contrario indicar cual es mayor alfabeticamente
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(){
 
 char cadena1[100];
 
 char cadena2[100];
 
 cout<<"\nDigite una palabra: ";
 cin.getline(cadena1,100,'\n');
 cout<<"\nDigite otra palabra: ";
 cin.getline(cadena2,100,'\n');
 
 if(strcmp(cadena1,cadena2)==0){ //verificamos si las cadenas son iguales
  cout<<"Las palabras son iguales.";
 }
 else if(strcmp(cadena1,cadena2)>0){// vemos si cual de las palabras va antes que la otra
  cout<<"La palabra "<<cadena1<<" es mayor que: "<<cadena2<<endl;
 }
 else if(strcmp(cadena1,cadena2)<0){
  cout<<"La palabra "<<cadena2<<" es mayor que: "<<cadena1<<endl;
 }
 
 getch();
 return 0;
}
