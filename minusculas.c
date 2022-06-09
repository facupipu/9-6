//Escribir un programa que convierta una palabra a todas letras min ́ısculas. Ingresar la palabra como argumento.
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
  int j=1;
  
  while (j< argc) {
    int i=0;
    char *palabra = argv[j];
    printf("%s\n", palabra);

    while (palabra[i] !=0) {
      if (palabra[i]<97)  palabra[i]+=32;
      printf("%c", palabra[i]);
      i++;
    }

    printf("\n");
    j++;
}
  printf("\n");
  return 0;
}
