//Escribir un programa que genere un array de 100 elementos con valores aleatorios enteros del 0 al 9.
//Contar la cantidad de veces que aparece cada dıgito en el array e imprimir una tabla con las frecuencias.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));
  int elementos[100];
  int frecuencias[0];
  for (int i = 0; i < 100; i++) {
    frecuencias[i] = 0;
  }
  for (int i = 0; i < 100; i++) {
    elementos[i] = (rand() % 9) + 1;
    printf("%d ", elementos[i]);
    frecuencias[elementos[i]]++;
  }
  printf("\n");
  for (int i = 0; i < 100; i++) {
    printf("%d: %d ", i, frecuencias[i]);
  }
  printf("\n");
  return 0;
}
