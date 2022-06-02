//Escribir un programa que genere un array de 100 elementos con enteros aleatorios entre 0 y 100. Calcular el promedio de los valores en el array.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int array[100];
  double sum = 0.0;
  for (int i = 0; i < 100; i++) {
    array[i] = (rand() % 100) + 1;
    printf("%d ", array[i]);
  } printf("\n");
  for (int i = 0; i < 100; i++) {
    sum += array[i];
  }
  double prom = sum/100;
  printf("Promedio: %.2f ", prom);
  printf("\n");
  return 0;
}
