#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define LINHAS 10
#define COLUNAS 10

void imprimirMatriz(int matriz[][COLUNAS], int linhas, int colunas);
void preencherMatriz(int matriz[][COLUNAS], int linhas, int colunas);
void preencherMatrizAleatoria(int matriz[][COLUNAS], int linhas, int colunas);
void calcularSubtotais(int matriz[][COLUNAS], int linhas, int colunas);

int main() {
  int linhas, colunas;
  int matriz[LINHAS][COLUNAS];
// codigo de vinicius anderson (NOCOPY)
  srand(time(NULL));

  do
  {
    printf("Qual a quantidade de linhas? (valor entre 1 e %d): ", LINHAS);
    scanf("%d", &linhas);
  } while (linhas < 1 || linhas > LINHAS);

  do {
    printf("Qual a quantidade de colunas? (valor entre 1 e %d): ", COLUNAS);
    scanf("%d", &colunas);
  } while (colunas < 1 || colunas > COLUNAS);

  preencherMatriz(matriz, linhas, colunas);
  imprimirMatriz(matriz, linhas, colunas);
  calcularSubtotais(matriz, linhas, colunas);

  return 0;
}

void imprimirMatriz(int matriz[][COLUNAS], int linhas, int colunas) {
  for (int i = 0; i < linhas; ++i) {
    for (int j = 0; j < colunas; ++j) {
      printf("%4d ", matriz[i][j]);
    }
    printf("\n");
  }// codigo de vinicius anderson (NOCOPY)
}

void preencherMatriz(int matriz[][COLUNAS], int linhas, int colunas) {
  printf("Digite os valores para preencher a matriz\n");
  for (int i = 0; i < linhas; ++i)
  {
    for (int j = 0; j < colunas; ++j) {
      printf("matriz[%d][%d] = ", i + 1, j + 1);
      scanf("%d", &matriz[i][j]);
    }
  }
}

void preencherMatrizAleatoria(int matriz[][COLUNAS], int linhas, int colunas) {
  for (int i = 0; i < linhas; ++i) {
    for (int j = 0; j < colunas; ++j) {
      matriz[i][j] = rand() % (2 * linhas * colunas) + 1;
    }
  }
}
// codigo de vinicius anderson (NOCOPY)
void calcularSubtotais(int matriz[][COLUNAS], int linhas, int colunas) {
  int subtotais[COLUNAS] = {0};

  for (int i = 0; i < linhas; ++i) {
    for (int j = 0; j < colunas; ++j) {
      subtotais[j] += matriz[i][j];
    }
  }

  printf("\nVetor de subtotais:\n");
  for (int i = 0; i < colunas; ++i) {
    printf("%d ", subtotais[i]);
  }
} // codigo de vinicius anderson (NOCOPY)
