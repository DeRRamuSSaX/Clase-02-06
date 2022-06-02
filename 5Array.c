//Escribir un programa que genere un array de 100 lugares con enteros aleatorios entre 0 y 100. Encontrar el maximo y el mınimo del array.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

int main(void) {
  int array[100];
  srand(time(NULL));
  int max = INT_MIN;
  int min = INT_MAX;
  for (int i = 0; i < 100; i++) {
    array[i] = (rand() % 100) + 1;
  }
  for (int i = 0; i < 100; i++) {
    printf("%d ", array[i]);
  } printf("\n");
  for (int i = 0; i < 100; i++) {
    if (array[i] > max) max = array[i];
    if (array[i] < min) min = array[i];
  }
  printf("Maximo: %d Minimo: %d\n", max, min);
  return 0;
}
