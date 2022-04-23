#include "stdio.h"


//----------------- COMO PASSAR UM PONTEIRO COMO PARAMETRO -------------------
void Imprimir(int *num){    
    printf("%d\n", *num);
    *num = 80;
}
//____________________________________________________________________________

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



    //----------------- COMO PASSAR UM PONTEIRO COMO PARAMETRO -------------------
    int idade = 35;
     
    Imprimir(&idade);
    printf("No main: %d\n", idade);
    //____________________________________________________________________________
    
  return 0;
}
