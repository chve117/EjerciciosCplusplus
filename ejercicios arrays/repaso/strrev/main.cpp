#include <iostream>
#include <string.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	char cad[100],cad2[100];
    cout<<"ingrese la cadena: "<<endl;
	gets(cad);
	strcpy(cad2,cad);
	strrev(cad);
	if(strcmp(cad,cad2)==0){
		cout<<"la palabra es palindromo: "<<cad<<endl;
	}else{
		cout<<"no es palindromo: "<<cad<<endl;
	}
	return 0;
}
