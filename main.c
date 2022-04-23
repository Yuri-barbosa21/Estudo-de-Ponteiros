#include "stdio.h"


//----------------- COMO PASSAR UM PONTEIRO COMO PARAMETRO -------------------
/*
void Imprimir(int *num){    
    printf("%d\n", *num);
    *num = 80;
}
*/
//____________________________________________________________________________



//---------------------- VETOR É SEMPRE UM PONTEIRO ------------------------

void Teste(int vet[], int tam){
    int i;
    for(i = 0; i < tam; i++){
        vet[i] *= 2;
    }
    printf("\n");
}

void ImprimirVetor(int vet[], int tam){
    int i;
    for(i = 0; i < tam; i++){
        printf("%d ", vet[i]);
    }
    printf("\n");
}
    
//___________________________________________________________________________


int main(void) {
    //------------------------- COMO CRIAR UM PONTEIRO ------------------------
    /*
    int num = 10;
    int *p;

    p = &num;

    printf("Valor de num: %d\n", num);
    printf("Endereço de num: %p\n", &num);
    printf("Valor de p: %p\n", p);
    printf("Endereço de p: %p\n", &p);
    printf("Valor apontado por p: %d\n", *p);
    */
    //_________________________________________________________________________
    


    //------------------ QUANTA MEMORIA OCUPA UM PONTEIRO ---------------------
    /*
    int *p;
    char *p2;
    float *p3;

    printf("Tamanho: %lu\n", sizeof(p));
    printf("Tamanho: %lu\n", sizeof(p2));
    printf("Tamanho: %lu\n", sizeof(p3));
    */
    //_________________________________________________________________________



    //----------------- COMO PASSAR UM PONTEIRO COMO PARAMETRO ------------------
    /*
    int idade = 35;
     
    Imprimir(&idade);
    printf("No main: %d\n", idade);
    */
    //___________________________________________________________________________



    //---------------------- VETOR É SEMPRE UM PONTEIRO -----------------------
    int vet[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    ImprimirVetor(vet, 10);
    Teste(vet, 10);
    ImprimirVetor(vet, 10);
    //___________________________________________________________________________
    
  return 0;
}
