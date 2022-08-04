#include <iostream>
// Hacer un programa en C++ que lea n números y determine cuál es el mayor, el menor y la media de los números leídos.
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	int n,num;
	int mayor=0,menor=0,media=0,sum=0;
	
	cout<<"ingrese la cantidad de numeros a comparar: "<<endl;cin>>n;
	
	for(int i=1;i<=n;i++){
		cout<<"ingrese el numero: "<<endl;cin>>num;
		if(i==1){
		mayor=menor=num;
		}
		if(num>mayor){
			mayor=num;
		}if(num<menor){
		    menor=num;
		}
		sum +=num;
	}
	media = sum / n;
    cout<<"El numero mayor es: "<<mayor<<endl;
    cout<<"El numero menor es: "<<menor<<endl;
    cout<<"La media total es: "<<media<<endl;
	return 0;}
