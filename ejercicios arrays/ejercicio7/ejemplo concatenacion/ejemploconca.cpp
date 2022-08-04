#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char array1[]={'a','b','c','d','e'};
	char array2[]={'f','g','h','i','j'};
	char letras3[10];
	//copiando los elementos de array1 hacia letras3
	for(int i=0;i<5;i++){
		letras3[i]= array1[i];
	}
	//copiando los elementos de array2 hacia letras3
	for(int i=5;i<10;i++){
		letras3[i]=array2[i-5];
	}
	
    //mostrar los elementos del nuevo array
    for(int i=0;i<10;i++){
    	cout<<letras3[i]<<endl;
	}
	return 0;
}
