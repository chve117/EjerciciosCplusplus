
#include <iostream>
int main(){
  int numeros[100][100], filas, columnas, contadorBanderas=0;
  char band = 'F';
  std::cout << "Digite el numero de Filas: ";
  std::cin >> filas; //3
  std::cout << "Digite el numero de Columnas: ";
  std::cin >> columnas; //3
  // rellenamos matriz
  for(int i = 0; i < filas; i++){
    for(int j=0; j < columnas; j++){
      std::cout << "Digite Numero [" << i << "][" << j << "]: ";
      std::cin >> numeros[i][j];
    }
    std::cout << "\n";
  }
  // evaluamos si es una matriza simetrica = cuadrada y transpuesta
  if(filas == columnas){
    for(int i=0; i < filas; i++){
      for(int j=0; j < columnas; j++){
        if(numeros[i][j] == numeros[j][i]){
          band = 'V';
          contadorBanderas++;
        }
      }
    }
  }
  if(contadorBanderas == (filas*columnas)){
    std::cout << "La matriz es simetrica" << std::endl;
  }else{
    std::cout << "La matriz no es simetrica" << std::endl;
  }
  return 0;
}
