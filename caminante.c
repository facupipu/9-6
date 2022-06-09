#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(void) {
  srand(time(NULL));
  bool win = false;
  int grilla[15][15];

  for (int i = 0; i < 15; i++) {
    for (int j = 0; j < 15; j++) {
      grilla[i][j] = 0;
    }
  }

  int x = 7;
  int y = 7;
  int k = 1;
  grilla[x][y] = k;

  for (int i = 0; i < 100; i++){
    int r = rand() % 4;
    if ( r == 0 && grilla[x+1][y] == 0) {x++; k++;}
    if ( r == 1 && grilla[x][y+1] == 0) {y++; k++;}
    if ( r == 2 && grilla[x-1][y] == 0) {x--; k++;}
    if ( r == 3 && grilla[x][y-1] == 0) {y--; k++;}
    if (x > 14 || x < 0 || y > 14 || y < 0){
      win = true;
      break;
    }
    grilla[x][y] = k;
    }

  for (int i = 0; i < 15; i++) {
    for (int j = 0; j < 15; j++){
      printf("%02d ", grilla[i][j]);
    }
    printf("\n");
  }
  printf("\n%s\n", win ? "ganaste":"perdiste" );
  return 0;
}
