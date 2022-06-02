//Escribir un programa que calcule el producto punto entre dos vectores de dimension N y valores reales. Siendo N una constante conocida en tiempo de compilacion al igual que los componentes de los vectores.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int N = 3;
  double total = 0;
  double resultado[3] = {0,0,0};
  double vector[3] = {1.0, 2.0, 3.0};
  double vector2[3] = {4.0, 5.0, 6.0};
  for (int i = 0; i < N; i++) {
    resultado[i] = vector[i] * vector2[i];
  }
  for (int i = 0; i < N; i++) {
    total += resultado[i];
  }
  printf("%.2f\n", total);
  return 0;
}
