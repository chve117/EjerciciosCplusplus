#include <iostream>
using namespace std;
//escribe un programa que defina un vector de numeros y muestre
//en la salida estandar el vector en orden inverso-del ultimo al primero
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main () { 
     int array[100];
     int total;
     cout<<"ingrese la cantidad de valores: "<<endl;cin>>total;
     for(int i=0;i<total;i++){
     	cout<<"de los valores para el arreglo: "<<endl;cin>>array[i];
	 }
	 
	 for(int i=total-1;i>=0;i--){
	 	cout<<"arreglo: "<<i<<" ->"<<array[i]<<endl;
	 }
return(0);
 }

