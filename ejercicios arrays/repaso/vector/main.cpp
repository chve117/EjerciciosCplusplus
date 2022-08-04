
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[100],n,suma=0,existe=0;
	
	cout<<"Digite el numeros de arreglos del elemento: "; cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<"Digite un numero: "; 
		cin>>numeros[i];
		suma += numeros[i];
		
		if(numeros[i] == suma/2){
			existe=suma/2;
			cout<<"Ese numero es la suma de todos los anteriores: \n"<<existe<<endl;
			break;
		}
	}
	cout<<"no existe ningun elemento que sea igual a la suma de los demas en el arreglo";
	
	
	
	getch();
	return 0;
}
