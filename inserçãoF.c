#include <stdio.h>
#include <stdlib.h>

int* inserirFInal(int *arr, int n, int valor){

    arr = realloc(arr, (n + 1) * sizeof(int));

            if(arr == NULL){

                printf("Erro na alocacao de memoria\n");

            exit(1);

            }

    arr[n] = valor;

    return arr;

}

int main(){

    int n = 5;
    int *arr = malloc(n * sizeof(int));

            if (arr == NULL){

                printf("Erro na alocacao de memoria\n");

                return 1;

            }

    arr[0] = 10; arr[1] = 20; arr[2] = 30; arr[3] = 40; arr[4] = 50;

    int valor = 60;

    arr = inserirFInal(arr, n, valor);

    n++;

        printf("Vetor apos insercao: ");

            for(int i = 0; i < n; i++){

                printf("%d ", arr[i]);

            }

        printf("\n");

    free(arr);

    return 0;
}
